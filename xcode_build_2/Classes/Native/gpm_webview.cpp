#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_tBAE0EBE1B8D4A3690FCB3ADC3EF79DF8654B6A36;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Object>[]
struct EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// Gpm.WebView.Internal.AndroidWebView
struct AndroidWebView_tC7DD776D673E610D51EE31E1425FE3BC93E17506;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// Gpm.WebView.Internal.DefaultWebView
struct DefaultWebView_tB60903E2C70F939B933C18B1DDD579DB0B026A07;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.UI.Dropdown
struct Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96;
// UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Gpm.WebView.GpmWebViewError
struct GpmWebViewError_tBDC438A993BE136762458A7B80E9FC35C32F8C21;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Gpm.WebView.Internal.IOSWebView
struct IOSWebView_tAA6DC2B33D6BA965C3B791BDD1DE99D53953F70C;
// Gpm.WebView.Internal.IWebView
struct IWebView_t5246E4E6E8FF2346601F8F64D333E638126A65D8;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.UI.InputField
struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// Gpm.WebView.Internal.NativeMessage
struct NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282;
// Gpm.WebView.Internal.NativeWebView
struct NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// SampleWebView
struct SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.UI.Toggle
struct Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40;
// Gpm.WebView.Internal.WebViewImplementation
struct WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6;
// Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback
struct CommunicatorCallback_t00B1202EFFD17164FFEFE3AD8C02468ED4C82391;
// Gpm.Communicator.GpmCommunicatorVO/Configuration
struct Configuration_tAF8DF53753B7EC302B1FD14BEBAA6E9CBA272079;
// Gpm.Communicator.GpmCommunicatorVO/Message
struct Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701;
// Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate
struct GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526;
// Gpm.WebView.GpmWebViewRequest/Configuration
struct Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425;
// Gpm.WebView.GpmWebViewRequest/ConfigurationSafeBrowsing
struct ConfigurationSafeBrowsing_t1E8DF97EEABF137067881FFF0A185D5B9921C6F9;
// Gpm.WebView.GpmWebViewRequest/CustomSchemePostCommand
struct CustomSchemePostCommand_t25DC04BF3BCCC447F4AED01102F27DAC5B04561A;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9;
// Gpm.WebView.Internal.NativeRequest/Configuration
struct Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8;
// Gpm.WebView.Internal.NativeRequest/ConfigurationSafeBrowsing
struct ConfigurationSafeBrowsing_t94FB8E4680C3B6D1E293B895BA7F753BBAB0527D;
// Gpm.WebView.Internal.NativeRequest/ExecuteJavaScript
struct ExecuteJavaScript_t149D2FB7BCB60A39444FC3DA705EB898DE46DE23;
// Gpm.WebView.Internal.NativeRequest/Margins
struct Margins_tD3B287C5998931DED6C19FD0EA7533D529ABC4D7;
// Gpm.WebView.Internal.NativeRequest/Position
struct Position_t99CED3006BAD63E73FD1E85EE78BE4936CADBD70;
// Gpm.WebView.Internal.NativeRequest/ShowSafeBrowsing
struct ShowSafeBrowsing_t711EFBB8AB7CCBC665A817A20F5347B285EF302F;
// Gpm.WebView.Internal.NativeRequest/ShowWebBrowser
struct ShowWebBrowser_tCB3CE687A4216C5E8F53038047E697F9DDEAD891;
// Gpm.WebView.Internal.NativeRequest/ShowWebView
struct ShowWebView_t47B866BED20A6758D9DA52EDF8D22305A08ED1FA;
// Gpm.WebView.Internal.NativeRequest/Size
struct Size_tD84EC7BBB992369C9A0CC7D80AD0268F3ED54D12;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075;

IL2CPP_EXTERN_C RuntimeClass* CallbackType_t6E0F72D8FA9985F30CE3B7DBD1FBA5BF7F43246D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommunicatorCallback_t00B1202EFFD17164FFEFE3AD8C02468ED4C82391_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConfigurationSafeBrowsing_t1E8DF97EEABF137067881FFF0A185D5B9921C6F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConfigurationSafeBrowsing_t94FB8E4680C3B6D1E293B895BA7F753BBAB0527D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Configuration_tAF8DF53753B7EC302B1FD14BEBAA6E9CBA272079_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomSchemePostCommand_t25DC04BF3BCCC447F4AED01102F27DAC5B04561A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecuteJavaScript_t149D2FB7BCB60A39444FC3DA705EB898DE46DE23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOSWebView_tAA6DC2B33D6BA965C3B791BDD1DE99D53953F70C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWebView_t5246E4E6E8FF2346601F8F64D333E638126A65D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Margins_tD3B287C5998931DED6C19FD0EA7533D529ABC4D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeCallbackHandler_t0A61748AAD4518D616E864B7C6C1D8E26AC78017_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Position_t99CED3006BAD63E73FD1E85EE78BE4936CADBD70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShowSafeBrowsing_t711EFBB8AB7CCBC665A817A20F5347B285EF302F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShowWebBrowser_tCB3CE687A4216C5E8F53038047E697F9DDEAD891_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShowWebView_t47B866BED20A6758D9DA52EDF8D22305A08ED1FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Size_tD84EC7BBB992369C9A0CC7D80AD0268F3ED54D12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04F8834E37A04F4BBCA017B29A65B35423675447;
IL2CPP_EXTERN_C String_t* _stringLiteral093507DEB05FB14DD8659BC619825EC3274FD8C6;
IL2CPP_EXTERN_C String_t* _stringLiteral0B241CB3EEE5D589CA19710ABBF0C7D1B11EB9A3;
IL2CPP_EXTERN_C String_t* _stringLiteral0DF4E5E91BB385BD19147E061A8A343416B56593;
IL2CPP_EXTERN_C String_t* _stringLiteral1065F5D308E0AFAFE334CE09E95A7A2669A83F98;
IL2CPP_EXTERN_C String_t* _stringLiteral252117B4E8431D0FCC2658F426AFAD0AEB5F4D04;
IL2CPP_EXTERN_C String_t* _stringLiteral2B8116384BF7900DF0AF76D78296BB5986E60B67;
IL2CPP_EXTERN_C String_t* _stringLiteral2F788246CC4B1F56C30416BB4828AB5DFE1D7571;
IL2CPP_EXTERN_C String_t* _stringLiteral3353FE40126F6A90AE70941B74EDAC7A246A6819;
IL2CPP_EXTERN_C String_t* _stringLiteral3537900A966F6526B545496171B453540EA156E2;
IL2CPP_EXTERN_C String_t* _stringLiteral376A5604328B846CD33630B4AFA7D547D0BD69BE;
IL2CPP_EXTERN_C String_t* _stringLiteral392253FBD9663E091C33F0EFE13CDA2BA1CBEAD9;
IL2CPP_EXTERN_C String_t* _stringLiteral437495827EE2F417C6EF6D171D77428822A383BC;
IL2CPP_EXTERN_C String_t* _stringLiteral48033893DB25402A6F3FBD3544D34AB02C25E0EF;
IL2CPP_EXTERN_C String_t* _stringLiteral4E3C626060D5B82A6EA09D2EE983D7C449F4F249;
IL2CPP_EXTERN_C String_t* _stringLiteral4EF917734AC14033FA41F53D00974CA539F0C445;
IL2CPP_EXTERN_C String_t* _stringLiteral5B00FE2C21F21764BB277C1BEE12004F53874EB5;
IL2CPP_EXTERN_C String_t* _stringLiteral624680CF43A758F7BA992C7A896E612BF23FA850;
IL2CPP_EXTERN_C String_t* _stringLiteral663488ABE057592166FC68C8A6EF26CBF9C8178E;
IL2CPP_EXTERN_C String_t* _stringLiteral6F5DC295F8AA395185E978B7D6DE85F3427EDEA0;
IL2CPP_EXTERN_C String_t* _stringLiteral7071697C1E72CB5E80E775D7964F46C9AB875732;
IL2CPP_EXTERN_C String_t* _stringLiteral70B7395C88F8552F75F2CAE166CC33435A494E23;
IL2CPP_EXTERN_C String_t* _stringLiteral84445DED3F38F40E166E8658E59ED855104487FA;
IL2CPP_EXTERN_C String_t* _stringLiteral875EA38258012EC0814C5E1E233E2AE18EF8F40F;
IL2CPP_EXTERN_C String_t* _stringLiteral9819B2ADE3033816812B6476FC3144B46A0E4301;
IL2CPP_EXTERN_C String_t* _stringLiteral981BC9EBC76493CC8A6BEEC0CEF767E026141833;
IL2CPP_EXTERN_C String_t* _stringLiteral9F6FEC0B16C8B98098A911F6CB65DC2E44F58856;
IL2CPP_EXTERN_C String_t* _stringLiteralA332264C9D57E5DC8F42C16E8FDF8EC8C769CAC1;
IL2CPP_EXTERN_C String_t* _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827;
IL2CPP_EXTERN_C String_t* _stringLiteralA5275D367BE340B201FADFB2D43BEE76A579C9BA;
IL2CPP_EXTERN_C String_t* _stringLiteralAEB3364828FCCCEE79F6A49E9F6DEA464771F96B;
IL2CPP_EXTERN_C String_t* _stringLiteralB55FBB16F1E36A507754DAF6FEBD2C683933A109;
IL2CPP_EXTERN_C String_t* _stringLiteralBC5B4F97E6B0EEC7B605538C44266B526CCA0ACE;
IL2CPP_EXTERN_C String_t* _stringLiteralBD98E2640FCC4873264BAE9F62528D696400D87F;
IL2CPP_EXTERN_C String_t* _stringLiteralC34B23CD76F40324322D49396FD0F04E34128CAB;
IL2CPP_EXTERN_C String_t* _stringLiteralCE782499A8125F334C5753700BDD39AD31E382E9;
IL2CPP_EXTERN_C String_t* _stringLiteralD8CBA63A13F1D65A1D993CEFCDA7DE953DA8286C;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F;
IL2CPP_EXTERN_C String_t* _stringLiteralDF1C4D8BF6C22738F012A325F6F14CD7E5F8C9FD;
IL2CPP_EXTERN_C String_t* _stringLiteralE28241AB93EF4EDF8C85F2BD33E54A913E960306;
IL2CPP_EXTERN_C String_t* _stringLiteralEA68DCEC5DF5C9D1BAB1EB121891A32269876B92;
IL2CPP_EXTERN_C String_t* _stringLiteralEBC6A109B31082B93DBCD3AEF08F4F4B18A8D860;
IL2CPP_EXTERN_C String_t* _stringLiteralF24E270202456BA0B227B1CABB006E5064AB3192;
IL2CPP_EXTERN_C String_t* _stringLiteralFD276C42E9A5561AAE86E99C7DEC52DEAD68ED18;
IL2CPP_EXTERN_C String_t* _stringLiteralFDA796685120EA50A129C055DDF20DF3D99D95DB;
IL2CPP_EXTERN_C String_t* _stringLiteralFE7BA8039B0BAFD01FB42599D4033518FDAC4259;
IL2CPP_EXTERN_C String_t* _stringLiteralFED5871C0F55B10B28297D7D6F16B57A7B4C72A9;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mE6DB9458466D0F98B67E2C6CAEFABBF9576AC4D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_ToObject_TisGpmWebViewError_tBDC438A993BE136762458A7B80E9FC35C32F8C21_mE7D68030B931626E14554AE2B4E54530894571C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_ToObject_TisNativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_mAF5A886193F504741023DD1FB533B2518B340C59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeCallbackHandler_GetCallback_TisGpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526_m7C73C3CA6D5F45525B51618971223B7A0A124F72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeWebView_OnAsyncEvent_m48B394F63348988949D0D6F619CC6951F5EC63CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SampleWebView_OnWebViewCallback_m018CF011D59E487CE62FF47391C5B8AD5A4B349A_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t4C534E85E0682B9D921F5BD38F793E01886BA8D2 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E* ___entries_1;
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
	KeyCollection_tBAE0EBE1B8D4A3690FCB3ADC3EF79DF8654B6A36 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F, ___entries_1)); }
	inline EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F, ___keys_7)); }
	inline KeyCollection_tBAE0EBE1B8D4A3690FCB3ADC3EF79DF8654B6A36 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tBAE0EBE1B8D4A3690FCB3ADC3EF79DF8654B6A36 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tBAE0EBE1B8D4A3690FCB3ADC3EF79DF8654B6A36 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F, ___values_8)); }
	inline ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * get_values_8() const { return ___values_8; }
	inline ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Gpm.WebView.Internal.DefaultWebView
struct DefaultWebView_tB60903E2C70F939B933C18B1DDD579DB0B026A07  : public RuntimeObject
{
public:

public:
};


// Gpm.WebView.GpmOrientation
struct GpmOrientation_t138705BED495B9D2EEE3B6694D5FE1FBFFCF4ABA  : public RuntimeObject
{
public:

public:
};


// Gpm.WebView.GpmWebView
struct GpmWebView_tCF063AF84F996FBECC6EF887479EF930C0B29021  : public RuntimeObject
{
public:

public:
};


// Gpm.WebView.GpmWebViewCallback
struct GpmWebViewCallback_t76950B57E0DE8CC38219D33E55C8D8A949A25707  : public RuntimeObject
{
public:

public:
};


// Gpm.WebView.GpmWebViewContentMode
struct GpmWebViewContentMode_t8781E30C519A18462C2E443D4ABB50BE184FAC1C  : public RuntimeObject
{
public:

public:
};


// Gpm.WebView.GpmWebViewCustomSchemeCommand
struct GpmWebViewCustomSchemeCommand_tEF484142DB5CD622019D2A4620DA8ADE0905020B  : public RuntimeObject
{
public:

public:
};


// Gpm.WebView.GpmWebViewError
struct GpmWebViewError_tBDC438A993BE136762458A7B80E9FC35C32F8C21  : public RuntimeObject
{
public:
	// System.String Gpm.WebView.GpmWebViewError::domain
	String_t* ___domain_0;
	// System.Int32 Gpm.WebView.GpmWebViewError::code
	int32_t ___code_1;
	// System.String Gpm.WebView.GpmWebViewError::message
	String_t* ___message_2;
	// Gpm.WebView.GpmWebViewError Gpm.WebView.GpmWebViewError::error
	GpmWebViewError_tBDC438A993BE136762458A7B80E9FC35C32F8C21 * ___error_3;

public:
	inline static int32_t get_offset_of_domain_0() { return static_cast<int32_t>(offsetof(GpmWebViewError_tBDC438A993BE136762458A7B80E9FC35C32F8C21, ___domain_0)); }
	inline String_t* get_domain_0() const { return ___domain_0; }
	inline String_t** get_address_of_domain_0() { return &___domain_0; }
	inline void set_domain_0(String_t* value)
	{
		___domain_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___domain_0), (void*)value);
	}

	inline static int32_t get_offset_of_code_1() { return static_cast<int32_t>(offsetof(GpmWebViewError_tBDC438A993BE136762458A7B80E9FC35C32F8C21, ___code_1)); }
	inline int32_t get_code_1() const { return ___code_1; }
	inline int32_t* get_address_of_code_1() { return &___code_1; }
	inline void set_code_1(int32_t value)
	{
		___code_1 = value;
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(GpmWebViewError_tBDC438A993BE136762458A7B80E9FC35C32F8C21, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_2), (void*)value);
	}

	inline static int32_t get_offset_of_error_3() { return static_cast<int32_t>(offsetof(GpmWebViewError_tBDC438A993BE136762458A7B80E9FC35C32F8C21, ___error_3)); }
	inline GpmWebViewError_tBDC438A993BE136762458A7B80E9FC35C32F8C21 * get_error_3() const { return ___error_3; }
	inline GpmWebViewError_tBDC438A993BE136762458A7B80E9FC35C32F8C21 ** get_address_of_error_3() { return &___error_3; }
	inline void set_error_3(GpmWebViewError_tBDC438A993BE136762458A7B80E9FC35C32F8C21 * value)
	{
		___error_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_3), (void*)value);
	}
};


// Gpm.WebView.GpmWebViewErrorCode
struct GpmWebViewErrorCode_t59A68130EB8FD67666A62CFA8F1ECAE48839EDE3  : public RuntimeObject
{
public:

public:
};


// Gpm.WebView.GpmWebViewRequest
struct GpmWebViewRequest_t9D1AC92EE2051C4524CCDC75F24B8DF8B9742D35  : public RuntimeObject
{
public:

public:
};


// Gpm.WebView.GpmWebViewSafeBrowsing
struct GpmWebViewSafeBrowsing_t760E3F1BE639E1D538850695D207B16E01E5164E  : public RuntimeObject
{
public:

public:
};


// Gpm.WebView.GpmWebViewStyle
struct GpmWebViewStyle_t9BFE520DE60A0B3D541152247FB06E0E21B8BF52  : public RuntimeObject
{
public:

public:
};


// Gpm.WebView.Internal.NativeCallbackHandler
struct NativeCallbackHandler_t0A61748AAD4518D616E864B7C6C1D8E26AC78017  : public RuntimeObject
{
public:

public:
};

struct NativeCallbackHandler_t0A61748AAD4518D616E864B7C6C1D8E26AC78017_StaticFields
{
public:
	// System.Int32 Gpm.WebView.Internal.NativeCallbackHandler::handle
	int32_t ___handle_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Object> Gpm.WebView.Internal.NativeCallbackHandler::callbackDic
	Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * ___callbackDic_1;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(NativeCallbackHandler_t0A61748AAD4518D616E864B7C6C1D8E26AC78017_StaticFields, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of_callbackDic_1() { return static_cast<int32_t>(offsetof(NativeCallbackHandler_t0A61748AAD4518D616E864B7C6C1D8E26AC78017_StaticFields, ___callbackDic_1)); }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * get_callbackDic_1() const { return ___callbackDic_1; }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F ** get_address_of_callbackDic_1() { return &___callbackDic_1; }
	inline void set_callbackDic_1(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * value)
	{
		___callbackDic_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackDic_1), (void*)value);
	}
};


// Gpm.WebView.Internal.NativeMessage
struct NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282  : public RuntimeObject
{
public:
	// System.String Gpm.WebView.Internal.NativeMessage::scheme
	String_t* ___scheme_0;
	// System.String Gpm.WebView.Internal.NativeMessage::error
	String_t* ___error_1;
	// System.String Gpm.WebView.Internal.NativeMessage::data
	String_t* ___data_2;
	// System.String Gpm.WebView.Internal.NativeMessage::extra
	String_t* ___extra_3;
	// System.Int32 Gpm.WebView.Internal.NativeMessage::callback
	int32_t ___callback_4;
	// System.Int32 Gpm.WebView.Internal.NativeMessage::callbackType
	int32_t ___callbackType_5;

public:
	inline static int32_t get_offset_of_scheme_0() { return static_cast<int32_t>(offsetof(NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282, ___scheme_0)); }
	inline String_t* get_scheme_0() const { return ___scheme_0; }
	inline String_t** get_address_of_scheme_0() { return &___scheme_0; }
	inline void set_scheme_0(String_t* value)
	{
		___scheme_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scheme_0), (void*)value);
	}

	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282, ___error_1)); }
	inline String_t* get_error_1() const { return ___error_1; }
	inline String_t** get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(String_t* value)
	{
		___error_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_1), (void*)value);
	}

	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282, ___data_2)); }
	inline String_t* get_data_2() const { return ___data_2; }
	inline String_t** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(String_t* value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_2), (void*)value);
	}

	inline static int32_t get_offset_of_extra_3() { return static_cast<int32_t>(offsetof(NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282, ___extra_3)); }
	inline String_t* get_extra_3() const { return ___extra_3; }
	inline String_t** get_address_of_extra_3() { return &___extra_3; }
	inline void set_extra_3(String_t* value)
	{
		___extra_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extra_3), (void*)value);
	}

	inline static int32_t get_offset_of_callback_4() { return static_cast<int32_t>(offsetof(NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282, ___callback_4)); }
	inline int32_t get_callback_4() const { return ___callback_4; }
	inline int32_t* get_address_of_callback_4() { return &___callback_4; }
	inline void set_callback_4(int32_t value)
	{
		___callback_4 = value;
	}

	inline static int32_t get_offset_of_callbackType_5() { return static_cast<int32_t>(offsetof(NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282, ___callbackType_5)); }
	inline int32_t get_callbackType_5() const { return ___callbackType_5; }
	inline int32_t* get_address_of_callbackType_5() { return &___callbackType_5; }
	inline void set_callbackType_5(int32_t value)
	{
		___callbackType_5 = value;
	}
};


// Gpm.WebView.Internal.NativeRequest
struct NativeRequest_tA7949A5E4C676C421B8AD71D85B6246DE35E0037  : public RuntimeObject
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

// Gpm.WebView.Internal.WebViewImplementation
struct WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A  : public RuntimeObject
{
public:
	// Gpm.WebView.Internal.IWebView Gpm.WebView.Internal.WebViewImplementation::webview
	RuntimeObject* ___webview_1;

public:
	inline static int32_t get_offset_of_webview_1() { return static_cast<int32_t>(offsetof(WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A, ___webview_1)); }
	inline RuntimeObject* get_webview_1() const { return ___webview_1; }
	inline RuntimeObject** get_address_of_webview_1() { return &___webview_1; }
	inline void set_webview_1(RuntimeObject* value)
	{
		___webview_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___webview_1), (void*)value);
	}
};

struct WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_StaticFields
{
public:
	// Gpm.WebView.Internal.WebViewImplementation Gpm.WebView.Internal.WebViewImplementation::instance
	WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_StaticFields, ___instance_0)); }
	inline WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * get_instance_0() const { return ___instance_0; }
	inline WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_0), (void*)value);
	}
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


// Gpm.WebView.GpmWebViewRequest/ConfigurationSafeBrowsing
struct ConfigurationSafeBrowsing_t1E8DF97EEABF137067881FFF0A185D5B9921C6F9  : public RuntimeObject
{
public:
	// System.String Gpm.WebView.GpmWebViewRequest/ConfigurationSafeBrowsing::navigationBarColor
	String_t* ___navigationBarColor_0;
	// System.String Gpm.WebView.GpmWebViewRequest/ConfigurationSafeBrowsing::navigationTextColor
	String_t* ___navigationTextColor_1;

public:
	inline static int32_t get_offset_of_navigationBarColor_0() { return static_cast<int32_t>(offsetof(ConfigurationSafeBrowsing_t1E8DF97EEABF137067881FFF0A185D5B9921C6F9, ___navigationBarColor_0)); }
	inline String_t* get_navigationBarColor_0() const { return ___navigationBarColor_0; }
	inline String_t** get_address_of_navigationBarColor_0() { return &___navigationBarColor_0; }
	inline void set_navigationBarColor_0(String_t* value)
	{
		___navigationBarColor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___navigationBarColor_0), (void*)value);
	}

	inline static int32_t get_offset_of_navigationTextColor_1() { return static_cast<int32_t>(offsetof(ConfigurationSafeBrowsing_t1E8DF97EEABF137067881FFF0A185D5B9921C6F9, ___navigationTextColor_1)); }
	inline String_t* get_navigationTextColor_1() const { return ___navigationTextColor_1; }
	inline String_t** get_address_of_navigationTextColor_1() { return &___navigationTextColor_1; }
	inline void set_navigationTextColor_1(String_t* value)
	{
		___navigationTextColor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___navigationTextColor_1), (void*)value);
	}
};


// Gpm.WebView.GpmWebViewRequest/CustomSchemePostCommand
struct CustomSchemePostCommand_t25DC04BF3BCCC447F4AED01102F27DAC5B04561A  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.String> Gpm.WebView.GpmWebViewRequest/CustomSchemePostCommand::commandList
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___commandList_0;

public:
	inline static int32_t get_offset_of_commandList_0() { return static_cast<int32_t>(offsetof(CustomSchemePostCommand_t25DC04BF3BCCC447F4AED01102F27DAC5B04561A, ___commandList_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_commandList_0() const { return ___commandList_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_commandList_0() { return &___commandList_0; }
	inline void set_commandList_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___commandList_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___commandList_0), (void*)value);
	}
};


// Gpm.WebView.Internal.NativeRequest/Configuration
struct Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8  : public RuntimeObject
{
public:
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Configuration::style
	int32_t ___style_0;
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Configuration::orientation
	int32_t ___orientation_1;
	// System.Boolean Gpm.WebView.Internal.NativeRequest/Configuration::isClearCookie
	bool ___isClearCookie_2;
	// System.Boolean Gpm.WebView.Internal.NativeRequest/Configuration::isClearCache
	bool ___isClearCache_3;
	// System.String Gpm.WebView.Internal.NativeRequest/Configuration::backgroundColor
	String_t* ___backgroundColor_4;
	// System.Boolean Gpm.WebView.Internal.NativeRequest/Configuration::isNavigationBarVisible
	bool ___isNavigationBarVisible_5;
	// System.String Gpm.WebView.Internal.NativeRequest/Configuration::navigationBarColor
	String_t* ___navigationBarColor_6;
	// System.String Gpm.WebView.Internal.NativeRequest/Configuration::title
	String_t* ___title_7;
	// System.Boolean Gpm.WebView.Internal.NativeRequest/Configuration::isBackButtonVisible
	bool ___isBackButtonVisible_8;
	// System.Boolean Gpm.WebView.Internal.NativeRequest/Configuration::isForwardButtonVisible
	bool ___isForwardButtonVisible_9;
	// System.Boolean Gpm.WebView.Internal.NativeRequest/Configuration::isCloseButtonVisible
	bool ___isCloseButtonVisible_10;
	// System.Boolean Gpm.WebView.Internal.NativeRequest/Configuration::supportMultipleWindows
	bool ___supportMultipleWindows_11;
	// System.String Gpm.WebView.Internal.NativeRequest/Configuration::userAgentString
	String_t* ___userAgentString_12;
	// System.String Gpm.WebView.Internal.NativeRequest/Configuration::addJavascript
	String_t* ___addJavascript_13;
	// System.Boolean Gpm.WebView.Internal.NativeRequest/Configuration::hasPosition
	bool ___hasPosition_14;
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Configuration::positionX
	int32_t ___positionX_15;
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Configuration::positionY
	int32_t ___positionY_16;
	// System.Boolean Gpm.WebView.Internal.NativeRequest/Configuration::hasSize
	bool ___hasSize_17;
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Configuration::sizeWidth
	int32_t ___sizeWidth_18;
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Configuration::sizeHeight
	int32_t ___sizeHeight_19;
	// System.Boolean Gpm.WebView.Internal.NativeRequest/Configuration::hasMargins
	bool ___hasMargins_20;
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Configuration::marginsLeft
	int32_t ___marginsLeft_21;
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Configuration::marginsTop
	int32_t ___marginsTop_22;
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Configuration::marginsRight
	int32_t ___marginsRight_23;
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Configuration::marginsBottom
	int32_t ___marginsBottom_24;
	// System.Boolean Gpm.WebView.Internal.NativeRequest/Configuration::isBackButtonCloseCallbackUsed
	bool ___isBackButtonCloseCallbackUsed_25;
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Configuration::contentMode
	int32_t ___contentMode_26;
	// System.Boolean Gpm.WebView.Internal.NativeRequest/Configuration::isMaskViewVisible
	bool ___isMaskViewVisible_27;
	// System.Boolean Gpm.WebView.Internal.NativeRequest/Configuration::isAutoRotation
	bool ___isAutoRotation_28;
	// System.Collections.Generic.List`1<System.String> Gpm.WebView.Internal.NativeRequest/Configuration::schemeCommandList
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___schemeCommandList_29;

public:
	inline static int32_t get_offset_of_style_0() { return static_cast<int32_t>(offsetof(Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8, ___style_0)); }
	inline int32_t get_style_0() const { return ___style_0; }
	inline int32_t* get_address_of_style_0() { return &___style_0; }
	inline void set_style_0(int32_t value)
	{
		___style_0 = value;
	}

	inline static int32_t get_offset_of_orientation_1() { return static_cast<int32_t>(offsetof(Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8, ___orientation_1)); }
	inline int32_t get_orientation_1() const { return ___orientation_1; }
	inline int32_t* get_address_of_orientation_1() { return &___orientation_1; }
	inline void set_orientation_1(int32_t value)
	{
		___orientation_1 = value;
	}

	inline static int32_t get_offset_of_isClearCookie_2() { return static_cast<int32_t>(offsetof(Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8, ___isClearCookie_2)); }
	inline bool get_isClearCookie_2() const { return ___isClearCookie_2; }
	inline bool* get_address_of_isClearCookie_2() { return &___isClearCookie_2; }
	inline void set_isClearCookie_2(bool value)
	{
		___isClearCookie_2 = value;
	}

	inline static int32_t get_offset_of_isClearCache_3() { return static_cast<int32_t>(offsetof(Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8, ___isClearCache_3)); }
	inline bool get_isClearCache_3() const { return ___isClearCache_3; }
	inline bool* get_address_of_isClearCache_3() { return &___isClearCache_3; }
	inline void set_isClearCache_3(bool value)
	{
		___isClearCache_3 = value;
	}

	inline static int32_t get_offset_of_backgroundColor_4() { return static_cast<int32_t>(offsetof(Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8, ___backgroundColor_4)); }
	inline String_t* get_backgroundColor_4() const { return ___backgroundColor_4; }
	inline String_t** get_address_of_backgroundColor_4() { return &___backgroundColor_4; }
	inline void set_backgroundColor_4(String_t* value)
	{
		___backgroundColor_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___backgroundColor_4), (void*)value);
	}

	inline static int32_t get_offset_of_isNavigationBarVisible_5() { return static_cast<int32_t>(offsetof(Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8, ___isNavigationBarVisible_5)); }
	inline bool get_isNavigationBarVisible_5() const { return ___isNavigationBarVisible_5; }
	inline bool* get_address_of_isNavigationBarVisible_5() { return &___isNavigationBarVisible_5; }
	inline void set_isNavigationBarVisible_5(bool value)
	{
		___isNavigationBarVisible_5 = value;
	}

	inline static int32_t get_offset_of_navigationBarColor_6() { return static_cast<int32_t>(offsetof(Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8, ___navigationBarColor_6)); }
	inline String_t* get_navigationBarColor_6() const { return ___navigationBarColor_6; }
	inline String_t** get_address_of_navigationBarColor_6() { return &___navigationBarColor_6; }
	inline void set_navigationBarColor_6(String_t* value)
	{
		___navigationBarColor_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___navigationBarColor_6), (void*)value);
	}

	inline static int32_t get_offset_of_title_7() { return static_cast<int32_t>(offsetof(Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8, ___title_7)); }
	inline String_t* get_title_7() const { return ___title_7; }
	inline String_t** get_address_of_title_7() { return &___title_7; }
	inline void set_title_7(String_t* value)
	{
		___title_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___title_7), (void*)value);
	}

	inline static int32_t get_offset_of_isBackButtonVisible_8() { return static_cast<int32_t>(offsetof(Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8, ___isBackButtonVisible_8)); }
	inline bool get_isBackButtonVisible_8() const { return ___isBackButtonVisible_8; }
	inline bool* get_address_of_isBackButtonVisible_8() { return &___isBackButtonVisible_8; }
	inline void set_isBackButtonVisible_8(bool value)
	{
		___isBackButtonVisible_8 = value;
	}

	inline static int32_t get_offset_of_isForwardButtonVisible_9() { return static_cast<int32_t>(offsetof(Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8, ___isForwardButtonVisible_9)); }
	inline bool get_isForwardButtonVisible_9() const { return ___isForwardButtonVisible_9; }
	inline bool* get_address_of_isForwardButtonVisible_9() { return &___isForwardButtonVisible_9; }
	inline void set_isForwardButtonVisible_9(bool value)
	{
		___isForwardButtonVisible_9 = value;
	}

	inline static int32_t get_offset_of_isCloseButtonVisible_10() { return static_cast<int32_t>(offsetof(Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8, ___isCloseButtonVisible_10)); }
	inline bool get_isCloseButtonVisible_10() const { return ___isCloseButtonVisible_10; }
	inline bool* get_address_of_isCloseButtonVisible_10() { return &___isCloseButtonVisible_10; }
	inline void set_isCloseButtonVisible_10(bool value)
	{
		___isCloseButtonVisible_10 = value;
	}

	inline static int32_t get_offset_of_supportMultipleWindows_11() { return static_cast<int32_t>(offsetof(Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8, ___supportMultipleWindows_11)); }
	inline bool get_supportMultipleWindows_11() const { return ___supportMultipleWindows_11; }
	inline bool* get_address_of_supportMultipleWindows_11() { return &___supportMultipleWindows_11; }
	inline void set_supportMultipleWindows_11(bool value)
	{
		___supportMultipleWindows_11 = value;
	}

	inline static int32_t get_offset_of_userAgentString_12() { return static_cast<int32_t>(offsetof(Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8, ___userAgentString_12)); }
	inline String_t* get_userAgentString_12() const { return ___userAgentString_12; }
	inline String_t** get_address_of_userAgentString_12() { return &___userAgentString_12; }
	inline void set_userAgentString_12(String_t* value)
	{
		___userAgentString_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userAgentString_12), (void*)value);
	}

	inline static int32_t get_offset_of_addJavascript_13() { return static_cast<int32_t>(offsetof(Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8, ___addJavascript_13)); }
	inline String_t* get_addJavascript_13() const { return ___addJavascript_13; }
	inline String_t** get_address_of_addJavascript_13() { return &___addJavascript_13; }
	inline void set_addJavascript_13(String_t* value)
	{
		___addJavascript_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___addJavascript_13), (void*)value);
	}

	inline static int32_t get_offset_of_hasPosition_14() { return static_cast<int32_t>(offsetof(Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8, ___hasPosition_14)); }
	inline bool get_hasPosition_14() const { return ___hasPosition_14; }
	inline bool* get_address_of_hasPosition_14() { return &___hasPosition_14; }
	inline void set_hasPosition_14(bool value)
	{
		___hasPosition_14 = value;
	}

	inline static int32_t get_offset_of_positionX_15() { return static_cast<int32_t>(offsetof(Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8, ___positionX_15)); }
	inline int32_t get_positionX_15() const { return ___positionX_15; }
	inline int32_t* get_address_of_positionX_15() { return &___positionX_15; }
	inline void set_positionX_15(int32_t value)
	{
		___positionX_15 = value;
	}

	inline static int32_t get_offset_of_positionY_16() { return static_cast<int32_t>(offsetof(Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8, ___positionY_16)); }
	inline int32_t get_positionY_16() const { return ___positionY_16; }
	inline int32_t* get_address_of_positionY_16() { return &___positionY_16; }
	inline void set_positionY_16(int32_t value)
	{
		___positionY_16 = value;
	}

	inline static int32_t get_offset_of_hasSize_17() { return static_cast<int32_t>(offsetof(Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8, ___hasSize_17)); }
	inline bool get_hasSize_17() const { return ___hasSize_17; }
	inline bool* get_address_of_hasSize_17() { return &___hasSize_17; }
	inline void set_hasSize_17(bool value)
	{
		___hasSize_17 = value;
	}

	inline static int32_t get_offset_of_sizeWidth_18() { return static_cast<int32_t>(offsetof(Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8, ___sizeWidth_18)); }
	inline int32_t get_sizeWidth_18() const { return ___sizeWidth_18; }
	inline int32_t* get_address_of_sizeWidth_18() { return &___sizeWidth_18; }
	inline void set_sizeWidth_18(int32_t value)
	{
		___sizeWidth_18 = value;
	}

	inline static int32_t get_offset_of_sizeHeight_19() { return static_cast<int32_t>(offsetof(Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8, ___sizeHeight_19)); }
	inline int32_t get_sizeHeight_19() const { return ___sizeHeight_19; }
	inline int32_t* get_address_of_sizeHeight_19() { return &___sizeHeight_19; }
	inline void set_sizeHeight_19(int32_t value)
	{
		___sizeHeight_19 = value;
	}

	inline static int32_t get_offset_of_hasMargins_20() { return static_cast<int32_t>(offsetof(Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8, ___hasMargins_20)); }
	inline bool get_hasMargins_20() const { return ___hasMargins_20; }
	inline bool* get_address_of_hasMargins_20() { return &___hasMargins_20; }
	inline void set_hasMargins_20(bool value)
	{
		___hasMargins_20 = value;
	}

	inline static int32_t get_offset_of_marginsLeft_21() { return static_cast<int32_t>(offsetof(Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8, ___marginsLeft_21)); }
	inline int32_t get_marginsLeft_21() const { return ___marginsLeft_21; }
	inline int32_t* get_address_of_marginsLeft_21() { return &___marginsLeft_21; }
	inline void set_marginsLeft_21(int32_t value)
	{
		___marginsLeft_21 = value;
	}

	inline static int32_t get_offset_of_marginsTop_22() { return static_cast<int32_t>(offsetof(Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8, ___marginsTop_22)); }
	inline int32_t get_marginsTop_22() const { return ___marginsTop_22; }
	inline int32_t* get_address_of_marginsTop_22() { return &___marginsTop_22; }
	inline void set_marginsTop_22(int32_t value)
	{
		___marginsTop_22 = value;
	}

	inline static int32_t get_offset_of_marginsRight_23() { return static_cast<int32_t>(offsetof(Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8, ___marginsRight_23)); }
	inline int32_t get_marginsRight_23() const { return ___marginsRight_23; }
	inline int32_t* get_address_of_marginsRight_23() { return &___marginsRight_23; }
	inline void set_marginsRight_23(int32_t value)
	{
		___marginsRight_23 = value;
	}

	inline static int32_t get_offset_of_marginsBottom_24() { return static_cast<int32_t>(offsetof(Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8, ___marginsBottom_24)); }
	inline int32_t get_marginsBottom_24() const { return ___marginsBottom_24; }
	inline int32_t* get_address_of_marginsBottom_24() { return &___marginsBottom_24; }
	inline void set_marginsBottom_24(int32_t value)
	{
		___marginsBottom_24 = value;
	}

	inline static int32_t get_offset_of_isBackButtonCloseCallbackUsed_25() { return static_cast<int32_t>(offsetof(Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8, ___isBackButtonCloseCallbackUsed_25)); }
	inline bool get_isBackButtonCloseCallbackUsed_25() const { return ___isBackButtonCloseCallbackUsed_25; }
	inline bool* get_address_of_isBackButtonCloseCallbackUsed_25() { return &___isBackButtonCloseCallbackUsed_25; }
	inline void set_isBackButtonCloseCallbackUsed_25(bool value)
	{
		___isBackButtonCloseCallbackUsed_25 = value;
	}

	inline static int32_t get_offset_of_contentMode_26() { return static_cast<int32_t>(offsetof(Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8, ___contentMode_26)); }
	inline int32_t get_contentMode_26() const { return ___contentMode_26; }
	inline int32_t* get_address_of_contentMode_26() { return &___contentMode_26; }
	inline void set_contentMode_26(int32_t value)
	{
		___contentMode_26 = value;
	}

	inline static int32_t get_offset_of_isMaskViewVisible_27() { return static_cast<int32_t>(offsetof(Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8, ___isMaskViewVisible_27)); }
	inline bool get_isMaskViewVisible_27() const { return ___isMaskViewVisible_27; }
	inline bool* get_address_of_isMaskViewVisible_27() { return &___isMaskViewVisible_27; }
	inline void set_isMaskViewVisible_27(bool value)
	{
		___isMaskViewVisible_27 = value;
	}

	inline static int32_t get_offset_of_isAutoRotation_28() { return static_cast<int32_t>(offsetof(Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8, ___isAutoRotation_28)); }
	inline bool get_isAutoRotation_28() const { return ___isAutoRotation_28; }
	inline bool* get_address_of_isAutoRotation_28() { return &___isAutoRotation_28; }
	inline void set_isAutoRotation_28(bool value)
	{
		___isAutoRotation_28 = value;
	}

	inline static int32_t get_offset_of_schemeCommandList_29() { return static_cast<int32_t>(offsetof(Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8, ___schemeCommandList_29)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_schemeCommandList_29() const { return ___schemeCommandList_29; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_schemeCommandList_29() { return &___schemeCommandList_29; }
	inline void set_schemeCommandList_29(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___schemeCommandList_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___schemeCommandList_29), (void*)value);
	}
};


// Gpm.WebView.Internal.NativeRequest/ConfigurationSafeBrowsing
struct ConfigurationSafeBrowsing_t94FB8E4680C3B6D1E293B895BA7F753BBAB0527D  : public RuntimeObject
{
public:
	// System.String Gpm.WebView.Internal.NativeRequest/ConfigurationSafeBrowsing::navigationBarColor
	String_t* ___navigationBarColor_0;
	// System.String Gpm.WebView.Internal.NativeRequest/ConfigurationSafeBrowsing::navigationTextColor
	String_t* ___navigationTextColor_1;

public:
	inline static int32_t get_offset_of_navigationBarColor_0() { return static_cast<int32_t>(offsetof(ConfigurationSafeBrowsing_t94FB8E4680C3B6D1E293B895BA7F753BBAB0527D, ___navigationBarColor_0)); }
	inline String_t* get_navigationBarColor_0() const { return ___navigationBarColor_0; }
	inline String_t** get_address_of_navigationBarColor_0() { return &___navigationBarColor_0; }
	inline void set_navigationBarColor_0(String_t* value)
	{
		___navigationBarColor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___navigationBarColor_0), (void*)value);
	}

	inline static int32_t get_offset_of_navigationTextColor_1() { return static_cast<int32_t>(offsetof(ConfigurationSafeBrowsing_t94FB8E4680C3B6D1E293B895BA7F753BBAB0527D, ___navigationTextColor_1)); }
	inline String_t* get_navigationTextColor_1() const { return ___navigationTextColor_1; }
	inline String_t** get_address_of_navigationTextColor_1() { return &___navigationTextColor_1; }
	inline void set_navigationTextColor_1(String_t* value)
	{
		___navigationTextColor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___navigationTextColor_1), (void*)value);
	}
};


// Gpm.WebView.Internal.NativeRequest/ExecuteJavaScript
struct ExecuteJavaScript_t149D2FB7BCB60A39444FC3DA705EB898DE46DE23  : public RuntimeObject
{
public:
	// System.String Gpm.WebView.Internal.NativeRequest/ExecuteJavaScript::script
	String_t* ___script_0;

public:
	inline static int32_t get_offset_of_script_0() { return static_cast<int32_t>(offsetof(ExecuteJavaScript_t149D2FB7BCB60A39444FC3DA705EB898DE46DE23, ___script_0)); }
	inline String_t* get_script_0() const { return ___script_0; }
	inline String_t** get_address_of_script_0() { return &___script_0; }
	inline void set_script_0(String_t* value)
	{
		___script_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___script_0), (void*)value);
	}
};


// Gpm.WebView.Internal.NativeRequest/Margins
struct Margins_tD3B287C5998931DED6C19FD0EA7533D529ABC4D7  : public RuntimeObject
{
public:
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Margins::left
	int32_t ___left_0;
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Margins::top
	int32_t ___top_1;
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Margins::right
	int32_t ___right_2;
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Margins::bottom
	int32_t ___bottom_3;

public:
	inline static int32_t get_offset_of_left_0() { return static_cast<int32_t>(offsetof(Margins_tD3B287C5998931DED6C19FD0EA7533D529ABC4D7, ___left_0)); }
	inline int32_t get_left_0() const { return ___left_0; }
	inline int32_t* get_address_of_left_0() { return &___left_0; }
	inline void set_left_0(int32_t value)
	{
		___left_0 = value;
	}

	inline static int32_t get_offset_of_top_1() { return static_cast<int32_t>(offsetof(Margins_tD3B287C5998931DED6C19FD0EA7533D529ABC4D7, ___top_1)); }
	inline int32_t get_top_1() const { return ___top_1; }
	inline int32_t* get_address_of_top_1() { return &___top_1; }
	inline void set_top_1(int32_t value)
	{
		___top_1 = value;
	}

	inline static int32_t get_offset_of_right_2() { return static_cast<int32_t>(offsetof(Margins_tD3B287C5998931DED6C19FD0EA7533D529ABC4D7, ___right_2)); }
	inline int32_t get_right_2() const { return ___right_2; }
	inline int32_t* get_address_of_right_2() { return &___right_2; }
	inline void set_right_2(int32_t value)
	{
		___right_2 = value;
	}

	inline static int32_t get_offset_of_bottom_3() { return static_cast<int32_t>(offsetof(Margins_tD3B287C5998931DED6C19FD0EA7533D529ABC4D7, ___bottom_3)); }
	inline int32_t get_bottom_3() const { return ___bottom_3; }
	inline int32_t* get_address_of_bottom_3() { return &___bottom_3; }
	inline void set_bottom_3(int32_t value)
	{
		___bottom_3 = value;
	}
};


// Gpm.WebView.Internal.NativeRequest/Position
struct Position_t99CED3006BAD63E73FD1E85EE78BE4936CADBD70  : public RuntimeObject
{
public:
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Position::x
	int32_t ___x_0;
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Position::y
	int32_t ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Position_t99CED3006BAD63E73FD1E85EE78BE4936CADBD70, ___x_0)); }
	inline int32_t get_x_0() const { return ___x_0; }
	inline int32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Position_t99CED3006BAD63E73FD1E85EE78BE4936CADBD70, ___y_1)); }
	inline int32_t get_y_1() const { return ___y_1; }
	inline int32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(int32_t value)
	{
		___y_1 = value;
	}
};


// Gpm.WebView.Internal.NativeRequest/ShowSafeBrowsing
struct ShowSafeBrowsing_t711EFBB8AB7CCBC665A817A20F5347B285EF302F  : public RuntimeObject
{
public:
	// System.String Gpm.WebView.Internal.NativeRequest/ShowSafeBrowsing::url
	String_t* ___url_0;
	// Gpm.WebView.Internal.NativeRequest/ConfigurationSafeBrowsing Gpm.WebView.Internal.NativeRequest/ShowSafeBrowsing::configuration
	ConfigurationSafeBrowsing_t94FB8E4680C3B6D1E293B895BA7F753BBAB0527D * ___configuration_1;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(ShowSafeBrowsing_t711EFBB8AB7CCBC665A817A20F5347B285EF302F, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_0), (void*)value);
	}

	inline static int32_t get_offset_of_configuration_1() { return static_cast<int32_t>(offsetof(ShowSafeBrowsing_t711EFBB8AB7CCBC665A817A20F5347B285EF302F, ___configuration_1)); }
	inline ConfigurationSafeBrowsing_t94FB8E4680C3B6D1E293B895BA7F753BBAB0527D * get_configuration_1() const { return ___configuration_1; }
	inline ConfigurationSafeBrowsing_t94FB8E4680C3B6D1E293B895BA7F753BBAB0527D ** get_address_of_configuration_1() { return &___configuration_1; }
	inline void set_configuration_1(ConfigurationSafeBrowsing_t94FB8E4680C3B6D1E293B895BA7F753BBAB0527D * value)
	{
		___configuration_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___configuration_1), (void*)value);
	}
};


// Gpm.WebView.Internal.NativeRequest/ShowWebBrowser
struct ShowWebBrowser_tCB3CE687A4216C5E8F53038047E697F9DDEAD891  : public RuntimeObject
{
public:
	// System.String Gpm.WebView.Internal.NativeRequest/ShowWebBrowser::url
	String_t* ___url_0;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(ShowWebBrowser_tCB3CE687A4216C5E8F53038047E697F9DDEAD891, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_0), (void*)value);
	}
};


// Gpm.WebView.Internal.NativeRequest/ShowWebView
struct ShowWebView_t47B866BED20A6758D9DA52EDF8D22305A08ED1FA  : public RuntimeObject
{
public:
	// System.String Gpm.WebView.Internal.NativeRequest/ShowWebView::data
	String_t* ___data_0;
	// Gpm.WebView.Internal.NativeRequest/Configuration Gpm.WebView.Internal.NativeRequest/ShowWebView::configuration
	Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8 * ___configuration_1;
	// System.Collections.Generic.List`1<System.String> Gpm.WebView.Internal.NativeRequest/ShowWebView::schemeList
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___schemeList_2;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(ShowWebView_t47B866BED20A6758D9DA52EDF8D22305A08ED1FA, ___data_0)); }
	inline String_t* get_data_0() const { return ___data_0; }
	inline String_t** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(String_t* value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_0), (void*)value);
	}

	inline static int32_t get_offset_of_configuration_1() { return static_cast<int32_t>(offsetof(ShowWebView_t47B866BED20A6758D9DA52EDF8D22305A08ED1FA, ___configuration_1)); }
	inline Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8 * get_configuration_1() const { return ___configuration_1; }
	inline Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8 ** get_address_of_configuration_1() { return &___configuration_1; }
	inline void set_configuration_1(Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8 * value)
	{
		___configuration_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___configuration_1), (void*)value);
	}

	inline static int32_t get_offset_of_schemeList_2() { return static_cast<int32_t>(offsetof(ShowWebView_t47B866BED20A6758D9DA52EDF8D22305A08ED1FA, ___schemeList_2)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_schemeList_2() const { return ___schemeList_2; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_schemeList_2() { return &___schemeList_2; }
	inline void set_schemeList_2(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___schemeList_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___schemeList_2), (void*)value);
	}
};


// Gpm.WebView.Internal.NativeRequest/Size
struct Size_tD84EC7BBB992369C9A0CC7D80AD0268F3ED54D12  : public RuntimeObject
{
public:
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Size::width
	int32_t ___width_0;
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Size::height
	int32_t ___height_1;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(Size_tD84EC7BBB992369C9A0CC7D80AD0268F3ED54D12, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(Size_tD84EC7BBB992369C9A0CC7D80AD0268F3ED54D12, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}
};


// Gpm.WebView.Internal.NativeWebView/ApiScheme
struct ApiScheme_t92BA2F5115D5A6B4C11696E307F437C907D2DE7E  : public RuntimeObject
{
public:

public:
};


// Gpm.WebView.Internal.NativeWebView/CallbackScheme
struct CallbackScheme_t13937E6E965857F7C6C85D28287A8B1DFD7EEA84  : public RuntimeObject
{
public:

public:
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


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
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


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
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


// Gpm.WebView.GpmWebViewRequest/Margins
struct Margins_tE71166091954A97FE414FCDA43759AAC56D9688F 
{
public:
	// System.Boolean Gpm.WebView.GpmWebViewRequest/Margins::hasValue
	bool ___hasValue_0;
	// System.Int32 Gpm.WebView.GpmWebViewRequest/Margins::left
	int32_t ___left_1;
	// System.Int32 Gpm.WebView.GpmWebViewRequest/Margins::top
	int32_t ___top_2;
	// System.Int32 Gpm.WebView.GpmWebViewRequest/Margins::right
	int32_t ___right_3;
	// System.Int32 Gpm.WebView.GpmWebViewRequest/Margins::bottom
	int32_t ___bottom_4;

public:
	inline static int32_t get_offset_of_hasValue_0() { return static_cast<int32_t>(offsetof(Margins_tE71166091954A97FE414FCDA43759AAC56D9688F, ___hasValue_0)); }
	inline bool get_hasValue_0() const { return ___hasValue_0; }
	inline bool* get_address_of_hasValue_0() { return &___hasValue_0; }
	inline void set_hasValue_0(bool value)
	{
		___hasValue_0 = value;
	}

	inline static int32_t get_offset_of_left_1() { return static_cast<int32_t>(offsetof(Margins_tE71166091954A97FE414FCDA43759AAC56D9688F, ___left_1)); }
	inline int32_t get_left_1() const { return ___left_1; }
	inline int32_t* get_address_of_left_1() { return &___left_1; }
	inline void set_left_1(int32_t value)
	{
		___left_1 = value;
	}

	inline static int32_t get_offset_of_top_2() { return static_cast<int32_t>(offsetof(Margins_tE71166091954A97FE414FCDA43759AAC56D9688F, ___top_2)); }
	inline int32_t get_top_2() const { return ___top_2; }
	inline int32_t* get_address_of_top_2() { return &___top_2; }
	inline void set_top_2(int32_t value)
	{
		___top_2 = value;
	}

	inline static int32_t get_offset_of_right_3() { return static_cast<int32_t>(offsetof(Margins_tE71166091954A97FE414FCDA43759AAC56D9688F, ___right_3)); }
	inline int32_t get_right_3() const { return ___right_3; }
	inline int32_t* get_address_of_right_3() { return &___right_3; }
	inline void set_right_3(int32_t value)
	{
		___right_3 = value;
	}

	inline static int32_t get_offset_of_bottom_4() { return static_cast<int32_t>(offsetof(Margins_tE71166091954A97FE414FCDA43759AAC56D9688F, ___bottom_4)); }
	inline int32_t get_bottom_4() const { return ___bottom_4; }
	inline int32_t* get_address_of_bottom_4() { return &___bottom_4; }
	inline void set_bottom_4(int32_t value)
	{
		___bottom_4 = value;
	}
};

// Native definition for P/Invoke marshalling of Gpm.WebView.GpmWebViewRequest/Margins
struct Margins_tE71166091954A97FE414FCDA43759AAC56D9688F_marshaled_pinvoke
{
	int32_t ___hasValue_0;
	int32_t ___left_1;
	int32_t ___top_2;
	int32_t ___right_3;
	int32_t ___bottom_4;
};
// Native definition for COM marshalling of Gpm.WebView.GpmWebViewRequest/Margins
struct Margins_tE71166091954A97FE414FCDA43759AAC56D9688F_marshaled_com
{
	int32_t ___hasValue_0;
	int32_t ___left_1;
	int32_t ___top_2;
	int32_t ___right_3;
	int32_t ___bottom_4;
};

// Gpm.WebView.GpmWebViewRequest/Position
struct Position_tE389F0309F8DE9F2BB96E471C81D09AE285E0701 
{
public:
	// System.Boolean Gpm.WebView.GpmWebViewRequest/Position::hasValue
	bool ___hasValue_0;
	// System.Int32 Gpm.WebView.GpmWebViewRequest/Position::x
	int32_t ___x_1;
	// System.Int32 Gpm.WebView.GpmWebViewRequest/Position::y
	int32_t ___y_2;

public:
	inline static int32_t get_offset_of_hasValue_0() { return static_cast<int32_t>(offsetof(Position_tE389F0309F8DE9F2BB96E471C81D09AE285E0701, ___hasValue_0)); }
	inline bool get_hasValue_0() const { return ___hasValue_0; }
	inline bool* get_address_of_hasValue_0() { return &___hasValue_0; }
	inline void set_hasValue_0(bool value)
	{
		___hasValue_0 = value;
	}

	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Position_tE389F0309F8DE9F2BB96E471C81D09AE285E0701, ___x_1)); }
	inline int32_t get_x_1() const { return ___x_1; }
	inline int32_t* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(int32_t value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Position_tE389F0309F8DE9F2BB96E471C81D09AE285E0701, ___y_2)); }
	inline int32_t get_y_2() const { return ___y_2; }
	inline int32_t* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(int32_t value)
	{
		___y_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Gpm.WebView.GpmWebViewRequest/Position
struct Position_tE389F0309F8DE9F2BB96E471C81D09AE285E0701_marshaled_pinvoke
{
	int32_t ___hasValue_0;
	int32_t ___x_1;
	int32_t ___y_2;
};
// Native definition for COM marshalling of Gpm.WebView.GpmWebViewRequest/Position
struct Position_tE389F0309F8DE9F2BB96E471C81D09AE285E0701_marshaled_com
{
	int32_t ___hasValue_0;
	int32_t ___x_1;
	int32_t ___y_2;
};

// Gpm.WebView.GpmWebViewRequest/Size
struct Size_t92BB328622E7C6869FBF329D08E72EE0D18C8751 
{
public:
	// System.Boolean Gpm.WebView.GpmWebViewRequest/Size::hasValue
	bool ___hasValue_0;
	// System.Int32 Gpm.WebView.GpmWebViewRequest/Size::width
	int32_t ___width_1;
	// System.Int32 Gpm.WebView.GpmWebViewRequest/Size::height
	int32_t ___height_2;

public:
	inline static int32_t get_offset_of_hasValue_0() { return static_cast<int32_t>(offsetof(Size_t92BB328622E7C6869FBF329D08E72EE0D18C8751, ___hasValue_0)); }
	inline bool get_hasValue_0() const { return ___hasValue_0; }
	inline bool* get_address_of_hasValue_0() { return &___hasValue_0; }
	inline void set_hasValue_0(bool value)
	{
		___hasValue_0 = value;
	}

	inline static int32_t get_offset_of_width_1() { return static_cast<int32_t>(offsetof(Size_t92BB328622E7C6869FBF329D08E72EE0D18C8751, ___width_1)); }
	inline int32_t get_width_1() const { return ___width_1; }
	inline int32_t* get_address_of_width_1() { return &___width_1; }
	inline void set_width_1(int32_t value)
	{
		___width_1 = value;
	}

	inline static int32_t get_offset_of_height_2() { return static_cast<int32_t>(offsetof(Size_t92BB328622E7C6869FBF329D08E72EE0D18C8751, ___height_2)); }
	inline int32_t get_height_2() const { return ___height_2; }
	inline int32_t* get_address_of_height_2() { return &___height_2; }
	inline void set_height_2(int32_t value)
	{
		___height_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Gpm.WebView.GpmWebViewRequest/Size
struct Size_t92BB328622E7C6869FBF329D08E72EE0D18C8751_marshaled_pinvoke
{
	int32_t ___hasValue_0;
	int32_t ___width_1;
	int32_t ___height_2;
};
// Native definition for COM marshalling of Gpm.WebView.GpmWebViewRequest/Size
struct Size_t92BB328622E7C6869FBF329D08E72EE0D18C8751_marshaled_com
{
	int32_t ___hasValue_0;
	int32_t ___width_1;
	int32_t ___height_2;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
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

// UnityEngine.ScreenOrientation
struct ScreenOrientation_tDD9EF2729A0D580721770597532935B0A7ADE020 
{
public:
	// System.Int32 UnityEngine.ScreenOrientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScreenOrientation_tDD9EF2729A0D580721770597532935B0A7ADE020, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchScreenKeyboardType
struct TouchScreenKeyboardType_tBD90DFB07923EC19E5EA59FAF26292AC2799A932 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_tBD90DFB07923EC19E5EA59FAF26292AC2799A932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Gpm.WebView.GpmWebViewCallback/CallbackType
struct CallbackType_t6E0F72D8FA9985F30CE3B7DBD1FBA5BF7F43246D 
{
public:
	// System.Int32 Gpm.WebView.GpmWebViewCallback/CallbackType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CallbackType_t6E0F72D8FA9985F30CE3B7DBD1FBA5BF7F43246D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Gpm.WebView.GpmWebViewRequest/Configuration
struct Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425  : public RuntimeObject
{
public:
	// System.Int32 Gpm.WebView.GpmWebViewRequest/Configuration::style
	int32_t ___style_0;
	// System.Int32 Gpm.WebView.GpmWebViewRequest/Configuration::orientation
	int32_t ___orientation_1;
	// System.Boolean Gpm.WebView.GpmWebViewRequest/Configuration::isClearCookie
	bool ___isClearCookie_2;
	// System.Boolean Gpm.WebView.GpmWebViewRequest/Configuration::isClearCache
	bool ___isClearCache_3;
	// System.String Gpm.WebView.GpmWebViewRequest/Configuration::backgroundColor
	String_t* ___backgroundColor_4;
	// System.Boolean Gpm.WebView.GpmWebViewRequest/Configuration::isNavigationBarVisible
	bool ___isNavigationBarVisible_5;
	// System.String Gpm.WebView.GpmWebViewRequest/Configuration::navigationBarColor
	String_t* ___navigationBarColor_6;
	// System.String Gpm.WebView.GpmWebViewRequest/Configuration::title
	String_t* ___title_7;
	// System.Boolean Gpm.WebView.GpmWebViewRequest/Configuration::isBackButtonVisible
	bool ___isBackButtonVisible_8;
	// System.Boolean Gpm.WebView.GpmWebViewRequest/Configuration::isForwardButtonVisible
	bool ___isForwardButtonVisible_9;
	// System.Boolean Gpm.WebView.GpmWebViewRequest/Configuration::isCloseButtonVisible
	bool ___isCloseButtonVisible_10;
	// System.Boolean Gpm.WebView.GpmWebViewRequest/Configuration::supportMultipleWindows
	bool ___supportMultipleWindows_11;
	// System.String Gpm.WebView.GpmWebViewRequest/Configuration::userAgentString
	String_t* ___userAgentString_12;
	// System.String Gpm.WebView.GpmWebViewRequest/Configuration::addJavascript
	String_t* ___addJavascript_13;
	// Gpm.WebView.GpmWebViewRequest/CustomSchemePostCommand Gpm.WebView.GpmWebViewRequest/Configuration::customSchemePostCommand
	CustomSchemePostCommand_t25DC04BF3BCCC447F4AED01102F27DAC5B04561A * ___customSchemePostCommand_14;
	// Gpm.WebView.GpmWebViewRequest/Position Gpm.WebView.GpmWebViewRequest/Configuration::position
	Position_tE389F0309F8DE9F2BB96E471C81D09AE285E0701  ___position_15;
	// Gpm.WebView.GpmWebViewRequest/Size Gpm.WebView.GpmWebViewRequest/Configuration::size
	Size_t92BB328622E7C6869FBF329D08E72EE0D18C8751  ___size_16;
	// Gpm.WebView.GpmWebViewRequest/Margins Gpm.WebView.GpmWebViewRequest/Configuration::margins
	Margins_tE71166091954A97FE414FCDA43759AAC56D9688F  ___margins_17;
	// System.Boolean Gpm.WebView.GpmWebViewRequest/Configuration::isBackButtonCloseCallbackUsed
	bool ___isBackButtonCloseCallbackUsed_18;
	// System.Int32 Gpm.WebView.GpmWebViewRequest/Configuration::contentMode
	int32_t ___contentMode_19;
	// System.Boolean Gpm.WebView.GpmWebViewRequest/Configuration::isMaskViewVisible
	bool ___isMaskViewVisible_20;
	// System.Boolean Gpm.WebView.GpmWebViewRequest/Configuration::isAutoRotation
	bool ___isAutoRotation_21;

public:
	inline static int32_t get_offset_of_style_0() { return static_cast<int32_t>(offsetof(Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425, ___style_0)); }
	inline int32_t get_style_0() const { return ___style_0; }
	inline int32_t* get_address_of_style_0() { return &___style_0; }
	inline void set_style_0(int32_t value)
	{
		___style_0 = value;
	}

	inline static int32_t get_offset_of_orientation_1() { return static_cast<int32_t>(offsetof(Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425, ___orientation_1)); }
	inline int32_t get_orientation_1() const { return ___orientation_1; }
	inline int32_t* get_address_of_orientation_1() { return &___orientation_1; }
	inline void set_orientation_1(int32_t value)
	{
		___orientation_1 = value;
	}

	inline static int32_t get_offset_of_isClearCookie_2() { return static_cast<int32_t>(offsetof(Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425, ___isClearCookie_2)); }
	inline bool get_isClearCookie_2() const { return ___isClearCookie_2; }
	inline bool* get_address_of_isClearCookie_2() { return &___isClearCookie_2; }
	inline void set_isClearCookie_2(bool value)
	{
		___isClearCookie_2 = value;
	}

	inline static int32_t get_offset_of_isClearCache_3() { return static_cast<int32_t>(offsetof(Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425, ___isClearCache_3)); }
	inline bool get_isClearCache_3() const { return ___isClearCache_3; }
	inline bool* get_address_of_isClearCache_3() { return &___isClearCache_3; }
	inline void set_isClearCache_3(bool value)
	{
		___isClearCache_3 = value;
	}

	inline static int32_t get_offset_of_backgroundColor_4() { return static_cast<int32_t>(offsetof(Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425, ___backgroundColor_4)); }
	inline String_t* get_backgroundColor_4() const { return ___backgroundColor_4; }
	inline String_t** get_address_of_backgroundColor_4() { return &___backgroundColor_4; }
	inline void set_backgroundColor_4(String_t* value)
	{
		___backgroundColor_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___backgroundColor_4), (void*)value);
	}

	inline static int32_t get_offset_of_isNavigationBarVisible_5() { return static_cast<int32_t>(offsetof(Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425, ___isNavigationBarVisible_5)); }
	inline bool get_isNavigationBarVisible_5() const { return ___isNavigationBarVisible_5; }
	inline bool* get_address_of_isNavigationBarVisible_5() { return &___isNavigationBarVisible_5; }
	inline void set_isNavigationBarVisible_5(bool value)
	{
		___isNavigationBarVisible_5 = value;
	}

	inline static int32_t get_offset_of_navigationBarColor_6() { return static_cast<int32_t>(offsetof(Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425, ___navigationBarColor_6)); }
	inline String_t* get_navigationBarColor_6() const { return ___navigationBarColor_6; }
	inline String_t** get_address_of_navigationBarColor_6() { return &___navigationBarColor_6; }
	inline void set_navigationBarColor_6(String_t* value)
	{
		___navigationBarColor_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___navigationBarColor_6), (void*)value);
	}

	inline static int32_t get_offset_of_title_7() { return static_cast<int32_t>(offsetof(Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425, ___title_7)); }
	inline String_t* get_title_7() const { return ___title_7; }
	inline String_t** get_address_of_title_7() { return &___title_7; }
	inline void set_title_7(String_t* value)
	{
		___title_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___title_7), (void*)value);
	}

	inline static int32_t get_offset_of_isBackButtonVisible_8() { return static_cast<int32_t>(offsetof(Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425, ___isBackButtonVisible_8)); }
	inline bool get_isBackButtonVisible_8() const { return ___isBackButtonVisible_8; }
	inline bool* get_address_of_isBackButtonVisible_8() { return &___isBackButtonVisible_8; }
	inline void set_isBackButtonVisible_8(bool value)
	{
		___isBackButtonVisible_8 = value;
	}

	inline static int32_t get_offset_of_isForwardButtonVisible_9() { return static_cast<int32_t>(offsetof(Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425, ___isForwardButtonVisible_9)); }
	inline bool get_isForwardButtonVisible_9() const { return ___isForwardButtonVisible_9; }
	inline bool* get_address_of_isForwardButtonVisible_9() { return &___isForwardButtonVisible_9; }
	inline void set_isForwardButtonVisible_9(bool value)
	{
		___isForwardButtonVisible_9 = value;
	}

	inline static int32_t get_offset_of_isCloseButtonVisible_10() { return static_cast<int32_t>(offsetof(Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425, ___isCloseButtonVisible_10)); }
	inline bool get_isCloseButtonVisible_10() const { return ___isCloseButtonVisible_10; }
	inline bool* get_address_of_isCloseButtonVisible_10() { return &___isCloseButtonVisible_10; }
	inline void set_isCloseButtonVisible_10(bool value)
	{
		___isCloseButtonVisible_10 = value;
	}

	inline static int32_t get_offset_of_supportMultipleWindows_11() { return static_cast<int32_t>(offsetof(Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425, ___supportMultipleWindows_11)); }
	inline bool get_supportMultipleWindows_11() const { return ___supportMultipleWindows_11; }
	inline bool* get_address_of_supportMultipleWindows_11() { return &___supportMultipleWindows_11; }
	inline void set_supportMultipleWindows_11(bool value)
	{
		___supportMultipleWindows_11 = value;
	}

	inline static int32_t get_offset_of_userAgentString_12() { return static_cast<int32_t>(offsetof(Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425, ___userAgentString_12)); }
	inline String_t* get_userAgentString_12() const { return ___userAgentString_12; }
	inline String_t** get_address_of_userAgentString_12() { return &___userAgentString_12; }
	inline void set_userAgentString_12(String_t* value)
	{
		___userAgentString_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userAgentString_12), (void*)value);
	}

	inline static int32_t get_offset_of_addJavascript_13() { return static_cast<int32_t>(offsetof(Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425, ___addJavascript_13)); }
	inline String_t* get_addJavascript_13() const { return ___addJavascript_13; }
	inline String_t** get_address_of_addJavascript_13() { return &___addJavascript_13; }
	inline void set_addJavascript_13(String_t* value)
	{
		___addJavascript_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___addJavascript_13), (void*)value);
	}

	inline static int32_t get_offset_of_customSchemePostCommand_14() { return static_cast<int32_t>(offsetof(Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425, ___customSchemePostCommand_14)); }
	inline CustomSchemePostCommand_t25DC04BF3BCCC447F4AED01102F27DAC5B04561A * get_customSchemePostCommand_14() const { return ___customSchemePostCommand_14; }
	inline CustomSchemePostCommand_t25DC04BF3BCCC447F4AED01102F27DAC5B04561A ** get_address_of_customSchemePostCommand_14() { return &___customSchemePostCommand_14; }
	inline void set_customSchemePostCommand_14(CustomSchemePostCommand_t25DC04BF3BCCC447F4AED01102F27DAC5B04561A * value)
	{
		___customSchemePostCommand_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customSchemePostCommand_14), (void*)value);
	}

	inline static int32_t get_offset_of_position_15() { return static_cast<int32_t>(offsetof(Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425, ___position_15)); }
	inline Position_tE389F0309F8DE9F2BB96E471C81D09AE285E0701  get_position_15() const { return ___position_15; }
	inline Position_tE389F0309F8DE9F2BB96E471C81D09AE285E0701 * get_address_of_position_15() { return &___position_15; }
	inline void set_position_15(Position_tE389F0309F8DE9F2BB96E471C81D09AE285E0701  value)
	{
		___position_15 = value;
	}

	inline static int32_t get_offset_of_size_16() { return static_cast<int32_t>(offsetof(Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425, ___size_16)); }
	inline Size_t92BB328622E7C6869FBF329D08E72EE0D18C8751  get_size_16() const { return ___size_16; }
	inline Size_t92BB328622E7C6869FBF329D08E72EE0D18C8751 * get_address_of_size_16() { return &___size_16; }
	inline void set_size_16(Size_t92BB328622E7C6869FBF329D08E72EE0D18C8751  value)
	{
		___size_16 = value;
	}

	inline static int32_t get_offset_of_margins_17() { return static_cast<int32_t>(offsetof(Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425, ___margins_17)); }
	inline Margins_tE71166091954A97FE414FCDA43759AAC56D9688F  get_margins_17() const { return ___margins_17; }
	inline Margins_tE71166091954A97FE414FCDA43759AAC56D9688F * get_address_of_margins_17() { return &___margins_17; }
	inline void set_margins_17(Margins_tE71166091954A97FE414FCDA43759AAC56D9688F  value)
	{
		___margins_17 = value;
	}

	inline static int32_t get_offset_of_isBackButtonCloseCallbackUsed_18() { return static_cast<int32_t>(offsetof(Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425, ___isBackButtonCloseCallbackUsed_18)); }
	inline bool get_isBackButtonCloseCallbackUsed_18() const { return ___isBackButtonCloseCallbackUsed_18; }
	inline bool* get_address_of_isBackButtonCloseCallbackUsed_18() { return &___isBackButtonCloseCallbackUsed_18; }
	inline void set_isBackButtonCloseCallbackUsed_18(bool value)
	{
		___isBackButtonCloseCallbackUsed_18 = value;
	}

	inline static int32_t get_offset_of_contentMode_19() { return static_cast<int32_t>(offsetof(Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425, ___contentMode_19)); }
	inline int32_t get_contentMode_19() const { return ___contentMode_19; }
	inline int32_t* get_address_of_contentMode_19() { return &___contentMode_19; }
	inline void set_contentMode_19(int32_t value)
	{
		___contentMode_19 = value;
	}

	inline static int32_t get_offset_of_isMaskViewVisible_20() { return static_cast<int32_t>(offsetof(Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425, ___isMaskViewVisible_20)); }
	inline bool get_isMaskViewVisible_20() const { return ___isMaskViewVisible_20; }
	inline bool* get_address_of_isMaskViewVisible_20() { return &___isMaskViewVisible_20; }
	inline void set_isMaskViewVisible_20(bool value)
	{
		___isMaskViewVisible_20 = value;
	}

	inline static int32_t get_offset_of_isAutoRotation_21() { return static_cast<int32_t>(offsetof(Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425, ___isAutoRotation_21)); }
	inline bool get_isAutoRotation_21() const { return ___isAutoRotation_21; }
	inline bool* get_address_of_isAutoRotation_21() { return &___isAutoRotation_21; }
	inline void set_isAutoRotation_21(bool value)
	{
		___isAutoRotation_21 = value;
	}
};


// UnityEngine.UI.InputField/CharacterValidation
struct CharacterValidation_t03AFB752BBD6215579765978CE67D7159431FC41 
{
public:
	// System.Int32 UnityEngine.UI.InputField/CharacterValidation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CharacterValidation_t03AFB752BBD6215579765978CE67D7159431FC41, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/ContentType
struct ContentType_t15FD47A38F32CADD417E3A07C787F1B3997B9AC1 
{
public:
	// System.Int32 UnityEngine.UI.InputField/ContentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ContentType_t15FD47A38F32CADD417E3A07C787F1B3997B9AC1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/InputType
struct InputType_t43FE97C0C3EE1F7DB81E2F34420780D1DFBF03D2 
{
public:
	// System.Int32 UnityEngine.UI.InputField/InputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputType_t43FE97C0C3EE1F7DB81E2F34420780D1DFBF03D2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/LineType
struct LineType_t3249F1C248D9D12DE265C49F371F2C3618AFEFCE 
{
public:
	// System.Int32 UnityEngine.UI.InputField/LineType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LineType_t3249F1C248D9D12DE265C49F371F2C3618AFEFCE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Toggle/ToggleTransition
struct ToggleTransition_t4D1AA30F2BA24242EB9D1DD2E3DF839F0BAC5167 
{
public:
	// System.Int32 UnityEngine.UI.Toggle/ToggleTransition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ToggleTransition_t4D1AA30F2BA24242EB9D1DD2E3DF839F0BAC5167, ___value___2)); }
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

// Gpm.WebView.Internal.NativeWebView
struct NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB  : public RuntimeObject
{
public:
	// System.String Gpm.WebView.Internal.NativeWebView::CLASS_NAME
	String_t* ___CLASS_NAME_3;
	// System.Boolean Gpm.WebView.Internal.NativeWebView::isAutorotateToPortrait
	bool ___isAutorotateToPortrait_5;
	// System.Boolean Gpm.WebView.Internal.NativeWebView::isAutorotateToPortraitUpsideDown
	bool ___isAutorotateToPortraitUpsideDown_6;
	// System.Boolean Gpm.WebView.Internal.NativeWebView::isAutorotateToLandscapeLeft
	bool ___isAutorotateToLandscapeLeft_7;
	// System.Boolean Gpm.WebView.Internal.NativeWebView::isAutorotateToLandscapeRight
	bool ___isAutorotateToLandscapeRight_8;
	// UnityEngine.ScreenOrientation Gpm.WebView.Internal.NativeWebView::defaultOrientation
	int32_t ___defaultOrientation_9;

public:
	inline static int32_t get_offset_of_CLASS_NAME_3() { return static_cast<int32_t>(offsetof(NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB, ___CLASS_NAME_3)); }
	inline String_t* get_CLASS_NAME_3() const { return ___CLASS_NAME_3; }
	inline String_t** get_address_of_CLASS_NAME_3() { return &___CLASS_NAME_3; }
	inline void set_CLASS_NAME_3(String_t* value)
	{
		___CLASS_NAME_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CLASS_NAME_3), (void*)value);
	}

	inline static int32_t get_offset_of_isAutorotateToPortrait_5() { return static_cast<int32_t>(offsetof(NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB, ___isAutorotateToPortrait_5)); }
	inline bool get_isAutorotateToPortrait_5() const { return ___isAutorotateToPortrait_5; }
	inline bool* get_address_of_isAutorotateToPortrait_5() { return &___isAutorotateToPortrait_5; }
	inline void set_isAutorotateToPortrait_5(bool value)
	{
		___isAutorotateToPortrait_5 = value;
	}

	inline static int32_t get_offset_of_isAutorotateToPortraitUpsideDown_6() { return static_cast<int32_t>(offsetof(NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB, ___isAutorotateToPortraitUpsideDown_6)); }
	inline bool get_isAutorotateToPortraitUpsideDown_6() const { return ___isAutorotateToPortraitUpsideDown_6; }
	inline bool* get_address_of_isAutorotateToPortraitUpsideDown_6() { return &___isAutorotateToPortraitUpsideDown_6; }
	inline void set_isAutorotateToPortraitUpsideDown_6(bool value)
	{
		___isAutorotateToPortraitUpsideDown_6 = value;
	}

	inline static int32_t get_offset_of_isAutorotateToLandscapeLeft_7() { return static_cast<int32_t>(offsetof(NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB, ___isAutorotateToLandscapeLeft_7)); }
	inline bool get_isAutorotateToLandscapeLeft_7() const { return ___isAutorotateToLandscapeLeft_7; }
	inline bool* get_address_of_isAutorotateToLandscapeLeft_7() { return &___isAutorotateToLandscapeLeft_7; }
	inline void set_isAutorotateToLandscapeLeft_7(bool value)
	{
		___isAutorotateToLandscapeLeft_7 = value;
	}

	inline static int32_t get_offset_of_isAutorotateToLandscapeRight_8() { return static_cast<int32_t>(offsetof(NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB, ___isAutorotateToLandscapeRight_8)); }
	inline bool get_isAutorotateToLandscapeRight_8() const { return ___isAutorotateToLandscapeRight_8; }
	inline bool* get_address_of_isAutorotateToLandscapeRight_8() { return &___isAutorotateToLandscapeRight_8; }
	inline void set_isAutorotateToLandscapeRight_8(bool value)
	{
		___isAutorotateToLandscapeRight_8 = value;
	}

	inline static int32_t get_offset_of_defaultOrientation_9() { return static_cast<int32_t>(offsetof(NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB, ___defaultOrientation_9)); }
	inline int32_t get_defaultOrientation_9() const { return ___defaultOrientation_9; }
	inline int32_t* get_address_of_defaultOrientation_9() { return &___defaultOrientation_9; }
	inline void set_defaultOrientation_9(int32_t value)
	{
		___defaultOrientation_9 = value;
	}
};


// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// Gpm.WebView.Internal.AndroidWebView
struct AndroidWebView_tC7DD776D673E610D51EE31E1425FE3BC93E17506  : public NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB
{
public:

public:
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


// Gpm.WebView.Internal.IOSWebView
struct IOSWebView_tAA6DC2B33D6BA965C3B791BDD1DE99D53953F70C  : public NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB
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


// Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate
struct GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526  : public MulticastDelegate_t
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


// SampleWebView
struct SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.InputField SampleWebView::urlInput
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___urlInput_5;
	// UnityEngine.UI.InputField SampleWebView::titleInput
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___titleInput_6;
	// UnityEngine.UI.InputField SampleWebView::customSchemeInput
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___customSchemeInput_7;
	// UnityEngine.UI.InputField SampleWebView::backgroundColorInput
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___backgroundColorInput_8;
	// UnityEngine.UI.InputField SampleWebView::navigationColorInput
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___navigationColorInput_9;
	// UnityEngine.UI.Toggle SampleWebView::clearCookieToggle
	Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * ___clearCookieToggle_10;
	// UnityEngine.UI.Toggle SampleWebView::clearCacheToggle
	Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * ___clearCacheToggle_11;
	// UnityEngine.UI.Toggle SampleWebView::navigationBarVisibleToggle
	Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * ___navigationBarVisibleToggle_12;
	// UnityEngine.UI.Toggle SampleWebView::backButtonVisibleToggle
	Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * ___backButtonVisibleToggle_13;
	// UnityEngine.UI.Toggle SampleWebView::forwardButtonVisibleToggle
	Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * ___forwardButtonVisibleToggle_14;
	// UnityEngine.UI.Toggle SampleWebView::closeButtonVisibleToggle
	Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * ___closeButtonVisibleToggle_15;
	// UnityEngine.UI.Toggle SampleWebView::supportMultipleWindowToggle
	Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * ___supportMultipleWindowToggle_16;
	// UnityEngine.UI.Toggle SampleWebView::backButtonCloseCallbackUsedToggle
	Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * ___backButtonCloseCallbackUsedToggle_17;
	// UnityEngine.UI.Toggle SampleWebView::maskViewVisibleToggle
	Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * ___maskViewVisibleToggle_18;
	// UnityEngine.UI.Toggle SampleWebView::autoRotationToggle
	Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * ___autoRotationToggle_19;
	// UnityEngine.UI.Dropdown SampleWebView::styleDropdown
	Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * ___styleDropdown_20;
	// UnityEngine.UI.Dropdown SampleWebView::orientationDropdown
	Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * ___orientationDropdown_21;
	// UnityEngine.UI.Dropdown SampleWebView::contentModeDropdown
	Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * ___contentModeDropdown_22;
	// UnityEngine.UI.InputField SampleWebView::popupXInput
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___popupXInput_23;
	// UnityEngine.UI.InputField SampleWebView::popupYInput
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___popupYInput_24;
	// UnityEngine.UI.InputField SampleWebView::popupWidthInput
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___popupWidthInput_25;
	// UnityEngine.UI.InputField SampleWebView::popupHeightInput
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___popupHeightInput_26;
	// UnityEngine.UI.InputField SampleWebView::popupMarginsLeftInput
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___popupMarginsLeftInput_27;
	// UnityEngine.UI.InputField SampleWebView::popupMarginsTopInput
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___popupMarginsTopInput_28;
	// UnityEngine.UI.InputField SampleWebView::popupMarginsRightInput
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___popupMarginsRightInput_29;
	// UnityEngine.UI.InputField SampleWebView::popupMarginsBottomInput
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___popupMarginsBottomInput_30;
	// UnityEngine.UI.InputField SampleWebView::userAgentStringInput
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___userAgentStringInput_31;
	// UnityEngine.UI.InputField SampleWebView::javascriptInput
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___javascriptInput_32;
	// UnityEngine.UI.InputField SampleWebView::safeBrowsingNavigationBarColor
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___safeBrowsingNavigationBarColor_33;
	// UnityEngine.UI.InputField SampleWebView::safeBrowsingNavigationTextColor
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___safeBrowsingNavigationTextColor_34;
	// UnityEngine.UI.InputField SampleWebView::output
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___output_35;

public:
	inline static int32_t get_offset_of_urlInput_5() { return static_cast<int32_t>(offsetof(SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88, ___urlInput_5)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_urlInput_5() const { return ___urlInput_5; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_urlInput_5() { return &___urlInput_5; }
	inline void set_urlInput_5(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___urlInput_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___urlInput_5), (void*)value);
	}

	inline static int32_t get_offset_of_titleInput_6() { return static_cast<int32_t>(offsetof(SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88, ___titleInput_6)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_titleInput_6() const { return ___titleInput_6; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_titleInput_6() { return &___titleInput_6; }
	inline void set_titleInput_6(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___titleInput_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___titleInput_6), (void*)value);
	}

	inline static int32_t get_offset_of_customSchemeInput_7() { return static_cast<int32_t>(offsetof(SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88, ___customSchemeInput_7)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_customSchemeInput_7() const { return ___customSchemeInput_7; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_customSchemeInput_7() { return &___customSchemeInput_7; }
	inline void set_customSchemeInput_7(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___customSchemeInput_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customSchemeInput_7), (void*)value);
	}

	inline static int32_t get_offset_of_backgroundColorInput_8() { return static_cast<int32_t>(offsetof(SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88, ___backgroundColorInput_8)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_backgroundColorInput_8() const { return ___backgroundColorInput_8; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_backgroundColorInput_8() { return &___backgroundColorInput_8; }
	inline void set_backgroundColorInput_8(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___backgroundColorInput_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___backgroundColorInput_8), (void*)value);
	}

	inline static int32_t get_offset_of_navigationColorInput_9() { return static_cast<int32_t>(offsetof(SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88, ___navigationColorInput_9)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_navigationColorInput_9() const { return ___navigationColorInput_9; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_navigationColorInput_9() { return &___navigationColorInput_9; }
	inline void set_navigationColorInput_9(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___navigationColorInput_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___navigationColorInput_9), (void*)value);
	}

	inline static int32_t get_offset_of_clearCookieToggle_10() { return static_cast<int32_t>(offsetof(SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88, ___clearCookieToggle_10)); }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * get_clearCookieToggle_10() const { return ___clearCookieToggle_10; }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E ** get_address_of_clearCookieToggle_10() { return &___clearCookieToggle_10; }
	inline void set_clearCookieToggle_10(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * value)
	{
		___clearCookieToggle_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clearCookieToggle_10), (void*)value);
	}

	inline static int32_t get_offset_of_clearCacheToggle_11() { return static_cast<int32_t>(offsetof(SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88, ___clearCacheToggle_11)); }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * get_clearCacheToggle_11() const { return ___clearCacheToggle_11; }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E ** get_address_of_clearCacheToggle_11() { return &___clearCacheToggle_11; }
	inline void set_clearCacheToggle_11(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * value)
	{
		___clearCacheToggle_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clearCacheToggle_11), (void*)value);
	}

	inline static int32_t get_offset_of_navigationBarVisibleToggle_12() { return static_cast<int32_t>(offsetof(SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88, ___navigationBarVisibleToggle_12)); }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * get_navigationBarVisibleToggle_12() const { return ___navigationBarVisibleToggle_12; }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E ** get_address_of_navigationBarVisibleToggle_12() { return &___navigationBarVisibleToggle_12; }
	inline void set_navigationBarVisibleToggle_12(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * value)
	{
		___navigationBarVisibleToggle_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___navigationBarVisibleToggle_12), (void*)value);
	}

	inline static int32_t get_offset_of_backButtonVisibleToggle_13() { return static_cast<int32_t>(offsetof(SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88, ___backButtonVisibleToggle_13)); }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * get_backButtonVisibleToggle_13() const { return ___backButtonVisibleToggle_13; }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E ** get_address_of_backButtonVisibleToggle_13() { return &___backButtonVisibleToggle_13; }
	inline void set_backButtonVisibleToggle_13(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * value)
	{
		___backButtonVisibleToggle_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___backButtonVisibleToggle_13), (void*)value);
	}

	inline static int32_t get_offset_of_forwardButtonVisibleToggle_14() { return static_cast<int32_t>(offsetof(SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88, ___forwardButtonVisibleToggle_14)); }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * get_forwardButtonVisibleToggle_14() const { return ___forwardButtonVisibleToggle_14; }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E ** get_address_of_forwardButtonVisibleToggle_14() { return &___forwardButtonVisibleToggle_14; }
	inline void set_forwardButtonVisibleToggle_14(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * value)
	{
		___forwardButtonVisibleToggle_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___forwardButtonVisibleToggle_14), (void*)value);
	}

	inline static int32_t get_offset_of_closeButtonVisibleToggle_15() { return static_cast<int32_t>(offsetof(SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88, ___closeButtonVisibleToggle_15)); }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * get_closeButtonVisibleToggle_15() const { return ___closeButtonVisibleToggle_15; }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E ** get_address_of_closeButtonVisibleToggle_15() { return &___closeButtonVisibleToggle_15; }
	inline void set_closeButtonVisibleToggle_15(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * value)
	{
		___closeButtonVisibleToggle_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___closeButtonVisibleToggle_15), (void*)value);
	}

	inline static int32_t get_offset_of_supportMultipleWindowToggle_16() { return static_cast<int32_t>(offsetof(SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88, ___supportMultipleWindowToggle_16)); }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * get_supportMultipleWindowToggle_16() const { return ___supportMultipleWindowToggle_16; }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E ** get_address_of_supportMultipleWindowToggle_16() { return &___supportMultipleWindowToggle_16; }
	inline void set_supportMultipleWindowToggle_16(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * value)
	{
		___supportMultipleWindowToggle_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___supportMultipleWindowToggle_16), (void*)value);
	}

	inline static int32_t get_offset_of_backButtonCloseCallbackUsedToggle_17() { return static_cast<int32_t>(offsetof(SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88, ___backButtonCloseCallbackUsedToggle_17)); }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * get_backButtonCloseCallbackUsedToggle_17() const { return ___backButtonCloseCallbackUsedToggle_17; }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E ** get_address_of_backButtonCloseCallbackUsedToggle_17() { return &___backButtonCloseCallbackUsedToggle_17; }
	inline void set_backButtonCloseCallbackUsedToggle_17(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * value)
	{
		___backButtonCloseCallbackUsedToggle_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___backButtonCloseCallbackUsedToggle_17), (void*)value);
	}

	inline static int32_t get_offset_of_maskViewVisibleToggle_18() { return static_cast<int32_t>(offsetof(SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88, ___maskViewVisibleToggle_18)); }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * get_maskViewVisibleToggle_18() const { return ___maskViewVisibleToggle_18; }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E ** get_address_of_maskViewVisibleToggle_18() { return &___maskViewVisibleToggle_18; }
	inline void set_maskViewVisibleToggle_18(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * value)
	{
		___maskViewVisibleToggle_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___maskViewVisibleToggle_18), (void*)value);
	}

	inline static int32_t get_offset_of_autoRotationToggle_19() { return static_cast<int32_t>(offsetof(SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88, ___autoRotationToggle_19)); }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * get_autoRotationToggle_19() const { return ___autoRotationToggle_19; }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E ** get_address_of_autoRotationToggle_19() { return &___autoRotationToggle_19; }
	inline void set_autoRotationToggle_19(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * value)
	{
		___autoRotationToggle_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___autoRotationToggle_19), (void*)value);
	}

	inline static int32_t get_offset_of_styleDropdown_20() { return static_cast<int32_t>(offsetof(SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88, ___styleDropdown_20)); }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * get_styleDropdown_20() const { return ___styleDropdown_20; }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 ** get_address_of_styleDropdown_20() { return &___styleDropdown_20; }
	inline void set_styleDropdown_20(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * value)
	{
		___styleDropdown_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___styleDropdown_20), (void*)value);
	}

	inline static int32_t get_offset_of_orientationDropdown_21() { return static_cast<int32_t>(offsetof(SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88, ___orientationDropdown_21)); }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * get_orientationDropdown_21() const { return ___orientationDropdown_21; }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 ** get_address_of_orientationDropdown_21() { return &___orientationDropdown_21; }
	inline void set_orientationDropdown_21(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * value)
	{
		___orientationDropdown_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___orientationDropdown_21), (void*)value);
	}

	inline static int32_t get_offset_of_contentModeDropdown_22() { return static_cast<int32_t>(offsetof(SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88, ___contentModeDropdown_22)); }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * get_contentModeDropdown_22() const { return ___contentModeDropdown_22; }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 ** get_address_of_contentModeDropdown_22() { return &___contentModeDropdown_22; }
	inline void set_contentModeDropdown_22(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * value)
	{
		___contentModeDropdown_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___contentModeDropdown_22), (void*)value);
	}

	inline static int32_t get_offset_of_popupXInput_23() { return static_cast<int32_t>(offsetof(SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88, ___popupXInput_23)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_popupXInput_23() const { return ___popupXInput_23; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_popupXInput_23() { return &___popupXInput_23; }
	inline void set_popupXInput_23(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___popupXInput_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___popupXInput_23), (void*)value);
	}

	inline static int32_t get_offset_of_popupYInput_24() { return static_cast<int32_t>(offsetof(SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88, ___popupYInput_24)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_popupYInput_24() const { return ___popupYInput_24; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_popupYInput_24() { return &___popupYInput_24; }
	inline void set_popupYInput_24(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___popupYInput_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___popupYInput_24), (void*)value);
	}

	inline static int32_t get_offset_of_popupWidthInput_25() { return static_cast<int32_t>(offsetof(SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88, ___popupWidthInput_25)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_popupWidthInput_25() const { return ___popupWidthInput_25; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_popupWidthInput_25() { return &___popupWidthInput_25; }
	inline void set_popupWidthInput_25(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___popupWidthInput_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___popupWidthInput_25), (void*)value);
	}

	inline static int32_t get_offset_of_popupHeightInput_26() { return static_cast<int32_t>(offsetof(SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88, ___popupHeightInput_26)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_popupHeightInput_26() const { return ___popupHeightInput_26; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_popupHeightInput_26() { return &___popupHeightInput_26; }
	inline void set_popupHeightInput_26(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___popupHeightInput_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___popupHeightInput_26), (void*)value);
	}

	inline static int32_t get_offset_of_popupMarginsLeftInput_27() { return static_cast<int32_t>(offsetof(SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88, ___popupMarginsLeftInput_27)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_popupMarginsLeftInput_27() const { return ___popupMarginsLeftInput_27; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_popupMarginsLeftInput_27() { return &___popupMarginsLeftInput_27; }
	inline void set_popupMarginsLeftInput_27(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___popupMarginsLeftInput_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___popupMarginsLeftInput_27), (void*)value);
	}

	inline static int32_t get_offset_of_popupMarginsTopInput_28() { return static_cast<int32_t>(offsetof(SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88, ___popupMarginsTopInput_28)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_popupMarginsTopInput_28() const { return ___popupMarginsTopInput_28; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_popupMarginsTopInput_28() { return &___popupMarginsTopInput_28; }
	inline void set_popupMarginsTopInput_28(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___popupMarginsTopInput_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___popupMarginsTopInput_28), (void*)value);
	}

	inline static int32_t get_offset_of_popupMarginsRightInput_29() { return static_cast<int32_t>(offsetof(SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88, ___popupMarginsRightInput_29)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_popupMarginsRightInput_29() const { return ___popupMarginsRightInput_29; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_popupMarginsRightInput_29() { return &___popupMarginsRightInput_29; }
	inline void set_popupMarginsRightInput_29(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___popupMarginsRightInput_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___popupMarginsRightInput_29), (void*)value);
	}

	inline static int32_t get_offset_of_popupMarginsBottomInput_30() { return static_cast<int32_t>(offsetof(SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88, ___popupMarginsBottomInput_30)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_popupMarginsBottomInput_30() const { return ___popupMarginsBottomInput_30; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_popupMarginsBottomInput_30() { return &___popupMarginsBottomInput_30; }
	inline void set_popupMarginsBottomInput_30(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___popupMarginsBottomInput_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___popupMarginsBottomInput_30), (void*)value);
	}

	inline static int32_t get_offset_of_userAgentStringInput_31() { return static_cast<int32_t>(offsetof(SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88, ___userAgentStringInput_31)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_userAgentStringInput_31() const { return ___userAgentStringInput_31; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_userAgentStringInput_31() { return &___userAgentStringInput_31; }
	inline void set_userAgentStringInput_31(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___userAgentStringInput_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userAgentStringInput_31), (void*)value);
	}

	inline static int32_t get_offset_of_javascriptInput_32() { return static_cast<int32_t>(offsetof(SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88, ___javascriptInput_32)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_javascriptInput_32() const { return ___javascriptInput_32; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_javascriptInput_32() { return &___javascriptInput_32; }
	inline void set_javascriptInput_32(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___javascriptInput_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___javascriptInput_32), (void*)value);
	}

	inline static int32_t get_offset_of_safeBrowsingNavigationBarColor_33() { return static_cast<int32_t>(offsetof(SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88, ___safeBrowsingNavigationBarColor_33)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_safeBrowsingNavigationBarColor_33() const { return ___safeBrowsingNavigationBarColor_33; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_safeBrowsingNavigationBarColor_33() { return &___safeBrowsingNavigationBarColor_33; }
	inline void set_safeBrowsingNavigationBarColor_33(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___safeBrowsingNavigationBarColor_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeBrowsingNavigationBarColor_33), (void*)value);
	}

	inline static int32_t get_offset_of_safeBrowsingNavigationTextColor_34() { return static_cast<int32_t>(offsetof(SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88, ___safeBrowsingNavigationTextColor_34)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_safeBrowsingNavigationTextColor_34() const { return ___safeBrowsingNavigationTextColor_34; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_safeBrowsingNavigationTextColor_34() { return &___safeBrowsingNavigationTextColor_34; }
	inline void set_safeBrowsingNavigationTextColor_34(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___safeBrowsingNavigationTextColor_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeBrowsingNavigationTextColor_34), (void*)value);
	}

	inline static int32_t get_offset_of_output_35() { return static_cast<int32_t>(offsetof(SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88, ___output_35)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_output_35() const { return ___output_35; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_output_35() { return &___output_35; }
	inline void set_output_35(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___output_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___output_35), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Dropdown
struct Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_Template_20;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_CaptionText_21;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_CaptionImage_22;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_ItemText_23;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_ItemImage_24;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_25;
	// UnityEngine.UI.Dropdown/OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * ___m_Options_26;
	// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * ___m_OnValueChanged_27;
	// System.Single UnityEngine.UI.Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_28;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_Dropdown_29;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_Blocker_30;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 * ___m_Items_31;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D * ___m_AlphaTweenRunner_32;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_33;

public:
	inline static int32_t get_offset_of_m_Template_20() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Template_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_Template_20() const { return ___m_Template_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_Template_20() { return &___m_Template_20; }
	inline void set_m_Template_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_Template_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Template_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaptionText_21() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_CaptionText_21)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_CaptionText_21() const { return ___m_CaptionText_21; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_CaptionText_21() { return &___m_CaptionText_21; }
	inline void set_m_CaptionText_21(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_CaptionText_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CaptionText_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaptionImage_22() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_CaptionImage_22)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_CaptionImage_22() const { return ___m_CaptionImage_22; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_CaptionImage_22() { return &___m_CaptionImage_22; }
	inline void set_m_CaptionImage_22(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_CaptionImage_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CaptionImage_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ItemText_23() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_ItemText_23)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_ItemText_23() const { return ___m_ItemText_23; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_ItemText_23() { return &___m_ItemText_23; }
	inline void set_m_ItemText_23(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_ItemText_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemText_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ItemImage_24() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_ItemImage_24)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_ItemImage_24() const { return ___m_ItemImage_24; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_ItemImage_24() { return &___m_ItemImage_24; }
	inline void set_m_ItemImage_24(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_ItemImage_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemImage_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_Value_25() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Value_25)); }
	inline int32_t get_m_Value_25() const { return ___m_Value_25; }
	inline int32_t* get_address_of_m_Value_25() { return &___m_Value_25; }
	inline void set_m_Value_25(int32_t value)
	{
		___m_Value_25 = value;
	}

	inline static int32_t get_offset_of_m_Options_26() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Options_26)); }
	inline OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * get_m_Options_26() const { return ___m_Options_26; }
	inline OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 ** get_address_of_m_Options_26() { return &___m_Options_26; }
	inline void set_m_Options_26(OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * value)
	{
		___m_Options_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Options_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_OnValueChanged_27)); }
	inline DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_AlphaFadeSpeed_28() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_AlphaFadeSpeed_28)); }
	inline float get_m_AlphaFadeSpeed_28() const { return ___m_AlphaFadeSpeed_28; }
	inline float* get_address_of_m_AlphaFadeSpeed_28() { return &___m_AlphaFadeSpeed_28; }
	inline void set_m_AlphaFadeSpeed_28(float value)
	{
		___m_AlphaFadeSpeed_28 = value;
	}

	inline static int32_t get_offset_of_m_Dropdown_29() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Dropdown_29)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_Dropdown_29() const { return ___m_Dropdown_29; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_Dropdown_29() { return &___m_Dropdown_29; }
	inline void set_m_Dropdown_29(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_Dropdown_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Dropdown_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Blocker_30() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Blocker_30)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_Blocker_30() const { return ___m_Blocker_30; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_Blocker_30() { return &___m_Blocker_30; }
	inline void set_m_Blocker_30(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_Blocker_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Blocker_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_Items_31() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Items_31)); }
	inline List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 * get_m_Items_31() const { return ___m_Items_31; }
	inline List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 ** get_address_of_m_Items_31() { return &___m_Items_31; }
	inline void set_m_Items_31(List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 * value)
	{
		___m_Items_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Items_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_AlphaTweenRunner_32() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_AlphaTweenRunner_32)); }
	inline TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D * get_m_AlphaTweenRunner_32() const { return ___m_AlphaTweenRunner_32; }
	inline TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D ** get_address_of_m_AlphaTweenRunner_32() { return &___m_AlphaTweenRunner_32; }
	inline void set_m_AlphaTweenRunner_32(TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D * value)
	{
		___m_AlphaTweenRunner_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AlphaTweenRunner_32), (void*)value);
	}

	inline static int32_t get_offset_of_validTemplate_33() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___validTemplate_33)); }
	inline bool get_validTemplate_33() const { return ___validTemplate_33; }
	inline bool* get_address_of_validTemplate_33() { return &___validTemplate_33; }
	inline void set_validTemplate_33(bool value)
	{
		___validTemplate_33 = value;
	}
};

struct Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96_StaticFields
{
public:
	// UnityEngine.UI.Dropdown/OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * ___s_NoOptionData_34;

public:
	inline static int32_t get_offset_of_s_NoOptionData_34() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96_StaticFields, ___s_NoOptionData_34)); }
	inline OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * get_s_NoOptionData_34() const { return ___s_NoOptionData_34; }
	inline OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 ** get_address_of_s_NoOptionData_34() { return &___s_NoOptionData_34; }
	inline void set_s_NoOptionData_34(OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * value)
	{
		___s_NoOptionData_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_NoOptionData_34), (void*)value);
	}
};


// UnityEngine.UI.InputField
struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_TextComponent_22;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_Placeholder_23;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_24;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_25;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_26;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_27;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_28;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_29;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_30;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_31;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnEndEdit
	SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * ___m_OnEndEdit_32;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * ___m_OnValueChanged_33;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * ___m_OnValidateInput_34;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_CaretColor_35;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_36;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectionColor_37;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_38;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_39;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_40;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_41;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_42;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_43;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_44;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___caretRectTrans_45;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_CursorVerts_46;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_InputTextCache_47;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CachedInputRenderer_48;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_49;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_Mesh_50;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_51;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_52;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_53;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_54;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_57;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_BlinkCoroutine_58;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_59;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_60;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_61;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_DragCoroutine_62;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_63;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_64;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_65;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * ___m_WaitForSecondsRealtime_66;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_67;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___m_ProcessingEvent_69;

public:
	inline static int32_t get_offset_of_m_Keyboard_20() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Keyboard_20)); }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * get_m_Keyboard_20() const { return ___m_Keyboard_20; }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E ** get_address_of_m_Keyboard_20() { return &___m_Keyboard_20; }
	inline void set_m_Keyboard_20(TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * value)
	{
		___m_Keyboard_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Keyboard_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextComponent_22() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_TextComponent_22)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_TextComponent_22() const { return ___m_TextComponent_22; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_TextComponent_22() { return &___m_TextComponent_22; }
	inline void set_m_TextComponent_22(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_TextComponent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_Placeholder_23() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Placeholder_23)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_Placeholder_23() const { return ___m_Placeholder_23; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_Placeholder_23() { return &___m_Placeholder_23; }
	inline void set_m_Placeholder_23(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_Placeholder_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Placeholder_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContentType_24() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ContentType_24)); }
	inline int32_t get_m_ContentType_24() const { return ___m_ContentType_24; }
	inline int32_t* get_address_of_m_ContentType_24() { return &___m_ContentType_24; }
	inline void set_m_ContentType_24(int32_t value)
	{
		___m_ContentType_24 = value;
	}

	inline static int32_t get_offset_of_m_InputType_25() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_InputType_25)); }
	inline int32_t get_m_InputType_25() const { return ___m_InputType_25; }
	inline int32_t* get_address_of_m_InputType_25() { return &___m_InputType_25; }
	inline void set_m_InputType_25(int32_t value)
	{
		___m_InputType_25 = value;
	}

	inline static int32_t get_offset_of_m_AsteriskChar_26() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_AsteriskChar_26)); }
	inline Il2CppChar get_m_AsteriskChar_26() const { return ___m_AsteriskChar_26; }
	inline Il2CppChar* get_address_of_m_AsteriskChar_26() { return &___m_AsteriskChar_26; }
	inline void set_m_AsteriskChar_26(Il2CppChar value)
	{
		___m_AsteriskChar_26 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardType_27() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_KeyboardType_27)); }
	inline int32_t get_m_KeyboardType_27() const { return ___m_KeyboardType_27; }
	inline int32_t* get_address_of_m_KeyboardType_27() { return &___m_KeyboardType_27; }
	inline void set_m_KeyboardType_27(int32_t value)
	{
		___m_KeyboardType_27 = value;
	}

	inline static int32_t get_offset_of_m_LineType_28() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_LineType_28)); }
	inline int32_t get_m_LineType_28() const { return ___m_LineType_28; }
	inline int32_t* get_address_of_m_LineType_28() { return &___m_LineType_28; }
	inline void set_m_LineType_28(int32_t value)
	{
		___m_LineType_28 = value;
	}

	inline static int32_t get_offset_of_m_HideMobileInput_29() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_HideMobileInput_29)); }
	inline bool get_m_HideMobileInput_29() const { return ___m_HideMobileInput_29; }
	inline bool* get_address_of_m_HideMobileInput_29() { return &___m_HideMobileInput_29; }
	inline void set_m_HideMobileInput_29(bool value)
	{
		___m_HideMobileInput_29 = value;
	}

	inline static int32_t get_offset_of_m_CharacterValidation_30() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CharacterValidation_30)); }
	inline int32_t get_m_CharacterValidation_30() const { return ___m_CharacterValidation_30; }
	inline int32_t* get_address_of_m_CharacterValidation_30() { return &___m_CharacterValidation_30; }
	inline void set_m_CharacterValidation_30(int32_t value)
	{
		___m_CharacterValidation_30 = value;
	}

	inline static int32_t get_offset_of_m_CharacterLimit_31() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CharacterLimit_31)); }
	inline int32_t get_m_CharacterLimit_31() const { return ___m_CharacterLimit_31; }
	inline int32_t* get_address_of_m_CharacterLimit_31() { return &___m_CharacterLimit_31; }
	inline void set_m_CharacterLimit_31(int32_t value)
	{
		___m_CharacterLimit_31 = value;
	}

	inline static int32_t get_offset_of_m_OnEndEdit_32() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnEndEdit_32)); }
	inline SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * get_m_OnEndEdit_32() const { return ___m_OnEndEdit_32; }
	inline SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 ** get_address_of_m_OnEndEdit_32() { return &___m_OnEndEdit_32; }
	inline void set_m_OnEndEdit_32(SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * value)
	{
		___m_OnEndEdit_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEndEdit_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_33() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnValueChanged_33)); }
	inline OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * get_m_OnValueChanged_33() const { return ___m_OnValueChanged_33; }
	inline OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 ** get_address_of_m_OnValueChanged_33() { return &___m_OnValueChanged_33; }
	inline void set_m_OnValueChanged_33(OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * value)
	{
		___m_OnValueChanged_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValidateInput_34() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnValidateInput_34)); }
	inline OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * get_m_OnValidateInput_34() const { return ___m_OnValidateInput_34; }
	inline OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F ** get_address_of_m_OnValidateInput_34() { return &___m_OnValidateInput_34; }
	inline void set_m_OnValidateInput_34(OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * value)
	{
		___m_OnValidateInput_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValidateInput_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretColor_35() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretColor_35)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_CaretColor_35() const { return ___m_CaretColor_35; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_CaretColor_35() { return &___m_CaretColor_35; }
	inline void set_m_CaretColor_35(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_CaretColor_35 = value;
	}

	inline static int32_t get_offset_of_m_CustomCaretColor_36() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CustomCaretColor_36)); }
	inline bool get_m_CustomCaretColor_36() const { return ___m_CustomCaretColor_36; }
	inline bool* get_address_of_m_CustomCaretColor_36() { return &___m_CustomCaretColor_36; }
	inline void set_m_CustomCaretColor_36(bool value)
	{
		___m_CustomCaretColor_36 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_37() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_SelectionColor_37)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectionColor_37() const { return ___m_SelectionColor_37; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectionColor_37() { return &___m_SelectionColor_37; }
	inline void set_m_SelectionColor_37(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectionColor_37 = value;
	}

	inline static int32_t get_offset_of_m_Text_38() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Text_38)); }
	inline String_t* get_m_Text_38() const { return ___m_Text_38; }
	inline String_t** get_address_of_m_Text_38() { return &___m_Text_38; }
	inline void set_m_Text_38(String_t* value)
	{
		___m_Text_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretBlinkRate_39() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretBlinkRate_39)); }
	inline float get_m_CaretBlinkRate_39() const { return ___m_CaretBlinkRate_39; }
	inline float* get_address_of_m_CaretBlinkRate_39() { return &___m_CaretBlinkRate_39; }
	inline void set_m_CaretBlinkRate_39(float value)
	{
		___m_CaretBlinkRate_39 = value;
	}

	inline static int32_t get_offset_of_m_CaretWidth_40() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretWidth_40)); }
	inline int32_t get_m_CaretWidth_40() const { return ___m_CaretWidth_40; }
	inline int32_t* get_address_of_m_CaretWidth_40() { return &___m_CaretWidth_40; }
	inline void set_m_CaretWidth_40(int32_t value)
	{
		___m_CaretWidth_40 = value;
	}

	inline static int32_t get_offset_of_m_ReadOnly_41() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ReadOnly_41)); }
	inline bool get_m_ReadOnly_41() const { return ___m_ReadOnly_41; }
	inline bool* get_address_of_m_ReadOnly_41() { return &___m_ReadOnly_41; }
	inline void set_m_ReadOnly_41(bool value)
	{
		___m_ReadOnly_41 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateOnSelect_42() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ShouldActivateOnSelect_42)); }
	inline bool get_m_ShouldActivateOnSelect_42() const { return ___m_ShouldActivateOnSelect_42; }
	inline bool* get_address_of_m_ShouldActivateOnSelect_42() { return &___m_ShouldActivateOnSelect_42; }
	inline void set_m_ShouldActivateOnSelect_42(bool value)
	{
		___m_ShouldActivateOnSelect_42 = value;
	}

	inline static int32_t get_offset_of_m_CaretPosition_43() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretPosition_43)); }
	inline int32_t get_m_CaretPosition_43() const { return ___m_CaretPosition_43; }
	inline int32_t* get_address_of_m_CaretPosition_43() { return &___m_CaretPosition_43; }
	inline void set_m_CaretPosition_43(int32_t value)
	{
		___m_CaretPosition_43 = value;
	}

	inline static int32_t get_offset_of_m_CaretSelectPosition_44() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretSelectPosition_44)); }
	inline int32_t get_m_CaretSelectPosition_44() const { return ___m_CaretSelectPosition_44; }
	inline int32_t* get_address_of_m_CaretSelectPosition_44() { return &___m_CaretSelectPosition_44; }
	inline void set_m_CaretSelectPosition_44(int32_t value)
	{
		___m_CaretSelectPosition_44 = value;
	}

	inline static int32_t get_offset_of_caretRectTrans_45() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___caretRectTrans_45)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_caretRectTrans_45() const { return ___caretRectTrans_45; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_caretRectTrans_45() { return &___caretRectTrans_45; }
	inline void set_caretRectTrans_45(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___caretRectTrans_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caretRectTrans_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_CursorVerts_46() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CursorVerts_46)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_CursorVerts_46() const { return ___m_CursorVerts_46; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_CursorVerts_46() { return &___m_CursorVerts_46; }
	inline void set_m_CursorVerts_46(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_CursorVerts_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CursorVerts_46), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputTextCache_47() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_InputTextCache_47)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_InputTextCache_47() const { return ___m_InputTextCache_47; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_InputTextCache_47() { return &___m_InputTextCache_47; }
	inline void set_m_InputTextCache_47(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_InputTextCache_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputTextCache_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedInputRenderer_48() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CachedInputRenderer_48)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CachedInputRenderer_48() const { return ___m_CachedInputRenderer_48; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CachedInputRenderer_48() { return &___m_CachedInputRenderer_48; }
	inline void set_m_CachedInputRenderer_48(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CachedInputRenderer_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedInputRenderer_48), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreventFontCallback_49() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_PreventFontCallback_49)); }
	inline bool get_m_PreventFontCallback_49() const { return ___m_PreventFontCallback_49; }
	inline bool* get_address_of_m_PreventFontCallback_49() { return &___m_PreventFontCallback_49; }
	inline void set_m_PreventFontCallback_49(bool value)
	{
		___m_PreventFontCallback_49 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_50() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Mesh_50)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_Mesh_50() const { return ___m_Mesh_50; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_Mesh_50() { return &___m_Mesh_50; }
	inline void set_m_Mesh_50(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_Mesh_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Mesh_50), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllowInput_51() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_AllowInput_51)); }
	inline bool get_m_AllowInput_51() const { return ___m_AllowInput_51; }
	inline bool* get_address_of_m_AllowInput_51() { return &___m_AllowInput_51; }
	inline void set_m_AllowInput_51(bool value)
	{
		___m_AllowInput_51 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateNextUpdate_52() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ShouldActivateNextUpdate_52)); }
	inline bool get_m_ShouldActivateNextUpdate_52() const { return ___m_ShouldActivateNextUpdate_52; }
	inline bool* get_address_of_m_ShouldActivateNextUpdate_52() { return &___m_ShouldActivateNextUpdate_52; }
	inline void set_m_ShouldActivateNextUpdate_52(bool value)
	{
		___m_ShouldActivateNextUpdate_52 = value;
	}

	inline static int32_t get_offset_of_m_UpdateDrag_53() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_UpdateDrag_53)); }
	inline bool get_m_UpdateDrag_53() const { return ___m_UpdateDrag_53; }
	inline bool* get_address_of_m_UpdateDrag_53() { return &___m_UpdateDrag_53; }
	inline void set_m_UpdateDrag_53(bool value)
	{
		___m_UpdateDrag_53 = value;
	}

	inline static int32_t get_offset_of_m_DragPositionOutOfBounds_54() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DragPositionOutOfBounds_54)); }
	inline bool get_m_DragPositionOutOfBounds_54() const { return ___m_DragPositionOutOfBounds_54; }
	inline bool* get_address_of_m_DragPositionOutOfBounds_54() { return &___m_DragPositionOutOfBounds_54; }
	inline void set_m_DragPositionOutOfBounds_54(bool value)
	{
		___m_DragPositionOutOfBounds_54 = value;
	}

	inline static int32_t get_offset_of_m_CaretVisible_57() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretVisible_57)); }
	inline bool get_m_CaretVisible_57() const { return ___m_CaretVisible_57; }
	inline bool* get_address_of_m_CaretVisible_57() { return &___m_CaretVisible_57; }
	inline void set_m_CaretVisible_57(bool value)
	{
		___m_CaretVisible_57 = value;
	}

	inline static int32_t get_offset_of_m_BlinkCoroutine_58() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_BlinkCoroutine_58)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_BlinkCoroutine_58() const { return ___m_BlinkCoroutine_58; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_BlinkCoroutine_58() { return &___m_BlinkCoroutine_58; }
	inline void set_m_BlinkCoroutine_58(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_BlinkCoroutine_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BlinkCoroutine_58), (void*)value);
	}

	inline static int32_t get_offset_of_m_BlinkStartTime_59() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_BlinkStartTime_59)); }
	inline float get_m_BlinkStartTime_59() const { return ___m_BlinkStartTime_59; }
	inline float* get_address_of_m_BlinkStartTime_59() { return &___m_BlinkStartTime_59; }
	inline void set_m_BlinkStartTime_59(float value)
	{
		___m_BlinkStartTime_59 = value;
	}

	inline static int32_t get_offset_of_m_DrawStart_60() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DrawStart_60)); }
	inline int32_t get_m_DrawStart_60() const { return ___m_DrawStart_60; }
	inline int32_t* get_address_of_m_DrawStart_60() { return &___m_DrawStart_60; }
	inline void set_m_DrawStart_60(int32_t value)
	{
		___m_DrawStart_60 = value;
	}

	inline static int32_t get_offset_of_m_DrawEnd_61() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DrawEnd_61)); }
	inline int32_t get_m_DrawEnd_61() const { return ___m_DrawEnd_61; }
	inline int32_t* get_address_of_m_DrawEnd_61() { return &___m_DrawEnd_61; }
	inline void set_m_DrawEnd_61(int32_t value)
	{
		___m_DrawEnd_61 = value;
	}

	inline static int32_t get_offset_of_m_DragCoroutine_62() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DragCoroutine_62)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_DragCoroutine_62() const { return ___m_DragCoroutine_62; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_DragCoroutine_62() { return &___m_DragCoroutine_62; }
	inline void set_m_DragCoroutine_62(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_DragCoroutine_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DragCoroutine_62), (void*)value);
	}

	inline static int32_t get_offset_of_m_OriginalText_63() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OriginalText_63)); }
	inline String_t* get_m_OriginalText_63() const { return ___m_OriginalText_63; }
	inline String_t** get_address_of_m_OriginalText_63() { return &___m_OriginalText_63; }
	inline void set_m_OriginalText_63(String_t* value)
	{
		___m_OriginalText_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OriginalText_63), (void*)value);
	}

	inline static int32_t get_offset_of_m_WasCanceled_64() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_WasCanceled_64)); }
	inline bool get_m_WasCanceled_64() const { return ___m_WasCanceled_64; }
	inline bool* get_address_of_m_WasCanceled_64() { return &___m_WasCanceled_64; }
	inline void set_m_WasCanceled_64(bool value)
	{
		___m_WasCanceled_64 = value;
	}

	inline static int32_t get_offset_of_m_HasDoneFocusTransition_65() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_HasDoneFocusTransition_65)); }
	inline bool get_m_HasDoneFocusTransition_65() const { return ___m_HasDoneFocusTransition_65; }
	inline bool* get_address_of_m_HasDoneFocusTransition_65() { return &___m_HasDoneFocusTransition_65; }
	inline void set_m_HasDoneFocusTransition_65(bool value)
	{
		___m_HasDoneFocusTransition_65 = value;
	}

	inline static int32_t get_offset_of_m_WaitForSecondsRealtime_66() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_WaitForSecondsRealtime_66)); }
	inline WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * get_m_WaitForSecondsRealtime_66() const { return ___m_WaitForSecondsRealtime_66; }
	inline WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 ** get_address_of_m_WaitForSecondsRealtime_66() { return &___m_WaitForSecondsRealtime_66; }
	inline void set_m_WaitForSecondsRealtime_66(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * value)
	{
		___m_WaitForSecondsRealtime_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WaitForSecondsRealtime_66), (void*)value);
	}

	inline static int32_t get_offset_of_m_TouchKeyboardAllowsInPlaceEditing_67() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_TouchKeyboardAllowsInPlaceEditing_67)); }
	inline bool get_m_TouchKeyboardAllowsInPlaceEditing_67() const { return ___m_TouchKeyboardAllowsInPlaceEditing_67; }
	inline bool* get_address_of_m_TouchKeyboardAllowsInPlaceEditing_67() { return &___m_TouchKeyboardAllowsInPlaceEditing_67; }
	inline void set_m_TouchKeyboardAllowsInPlaceEditing_67(bool value)
	{
		___m_TouchKeyboardAllowsInPlaceEditing_67 = value;
	}

	inline static int32_t get_offset_of_m_ProcessingEvent_69() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ProcessingEvent_69)); }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * get_m_ProcessingEvent_69() const { return ___m_ProcessingEvent_69; }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** get_address_of_m_ProcessingEvent_69() { return &___m_ProcessingEvent_69; }
	inline void set_m_ProcessingEvent_69(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * value)
	{
		___m_ProcessingEvent_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ProcessingEvent_69), (void*)value);
	}
};

struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_StaticFields
{
public:
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___kSeparators_21;

public:
	inline static int32_t get_offset_of_kSeparators_21() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_StaticFields, ___kSeparators_21)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_kSeparators_21() const { return ___kSeparators_21; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_kSeparators_21() { return &___kSeparators_21; }
	inline void set_kSeparators_21(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___kSeparators_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kSeparators_21), (void*)value);
	}
};


// UnityEngine.UI.Toggle
struct Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;

public:
	inline static int32_t get_offset_of_toggleTransition_20() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___toggleTransition_20)); }
	inline int32_t get_toggleTransition_20() const { return ___toggleTransition_20; }
	inline int32_t* get_address_of_toggleTransition_20() { return &___toggleTransition_20; }
	inline void set_toggleTransition_20(int32_t value)
	{
		___toggleTransition_20 = value;
	}

	inline static int32_t get_offset_of_graphic_21() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___graphic_21)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_graphic_21() const { return ___graphic_21; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_graphic_21() { return &___graphic_21; }
	inline void set_graphic_21(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___graphic_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___graphic_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Group_22() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___m_Group_22)); }
	inline ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * get_m_Group_22() const { return ___m_Group_22; }
	inline ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 ** get_address_of_m_Group_22() { return &___m_Group_22; }
	inline void set_m_Group_22(ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * value)
	{
		___m_Group_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Group_22), (void*)value);
	}

	inline static int32_t get_offset_of_onValueChanged_23() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___onValueChanged_23)); }
	inline ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * get_onValueChanged_23() const { return ___onValueChanged_23; }
	inline ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 ** get_address_of_onValueChanged_23() { return &___onValueChanged_23; }
	inline void set_onValueChanged_23(ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * value)
	{
		___onValueChanged_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onValueChanged_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsOn_24() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___m_IsOn_24)); }
	inline bool get_m_IsOn_24() const { return ___m_IsOn_24; }
	inline bool* get_address_of_m_IsOn_24() { return &___m_IsOn_24; }
	inline void set_m_IsOn_24(bool value)
	{
		___m_IsOn_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
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


// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mE6DB9458466D0F98B67E2C6CAEFABBF9576AC4D7_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 Gpm.Common.ThirdParty.LitJson.JsonMapper::ToObject<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_ToObject_TisRuntimeObject_m9C5589FA45C32B847BDA6383E54D807DD34B867D_gshared (String_t* ___json0, const RuntimeMethod* method);
// T Gpm.WebView.Internal.NativeCallbackHandler::GetCallback<System.Object>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * NativeCallbackHandler_GetCallback_TisRuntimeObject_mCEC866CFB7EC1EECCF0A809051F512D10D8401B1_gshared (int32_t ___handle0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// System.Void Gpm.WebView.Internal.NativeWebView::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_Initialize_m89EBEE6D65057CAE6FEAB02F988CAFB447C323FB (NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB * __this, const RuntimeMethod* method);
// System.Void Gpm.WebView.Internal.NativeWebView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView__ctor_mEF02C4B1515ED262D2B8CB7C2DD0F6626BD8FD6D (NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// Gpm.WebView.Internal.WebViewImplementation Gpm.WebView.Internal.WebViewImplementation::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * WebViewImplementation_get_Instance_m15928AE1C49475334670988A6D73B5DBD1D9CC84_inline (const RuntimeMethod* method);
// System.Void Gpm.WebView.Internal.WebViewImplementation::ShowUrl(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_ShowUrl_mB307C87DF45A37188203BFDBC49F85904068C1D8 (WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * __this, String_t* ___url0, Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * ___configuration1, GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * ___callback2, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___schemeList3, const RuntimeMethod* method);
// System.Void Gpm.WebView.Internal.WebViewImplementation::ShowHtmlFile(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_ShowHtmlFile_m9BB5487EDE02A0F86581616CC884E5BD52BD3020 (WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * __this, String_t* ___filePath0, Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * ___configuration1, GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * ___callback2, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___schemeList3, const RuntimeMethod* method);
// System.Void Gpm.WebView.Internal.WebViewImplementation::ShowHtmlString(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_ShowHtmlString_m501616B1ED0F14042FECA25BB9DFDC0DE9E00C91 (WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * __this, String_t* ___htmlString0, Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * ___configuration1, GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * ___callback2, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___schemeList3, const RuntimeMethod* method);
// System.Void Gpm.WebView.Internal.WebViewImplementation::ExecuteJavaScript(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_ExecuteJavaScript_m0EB9DBA1F9D960BC9D2264D70FFC6299C700BD21 (WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * __this, String_t* ___script0, const RuntimeMethod* method);
// System.Void Gpm.WebView.Internal.WebViewImplementation::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_Close_m2718043CB497129FDEDE8037AEB9FC5619DD19A5 (WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * __this, const RuntimeMethod* method);
// System.Boolean Gpm.WebView.Internal.WebViewImplementation::IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebViewImplementation_IsActive_m5610B18C1B85C8FC817C80D0ACE2029D2389BA24 (WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * __this, const RuntimeMethod* method);
// System.Boolean Gpm.WebView.Internal.WebViewImplementation::CanGoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebViewImplementation_CanGoBack_m1E4370D9E071B4620ED85D95723ABBC9E04231A8 (WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * __this, const RuntimeMethod* method);
// System.Boolean Gpm.WebView.Internal.WebViewImplementation::CanGoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebViewImplementation_CanGoForward_m6A97E9144295A04002DBD85001B80A6354A153D9 (WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * __this, const RuntimeMethod* method);
// System.Void Gpm.WebView.Internal.WebViewImplementation::GoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_GoBack_mA3E51D4751ACF48E3EED6D48F34B32AF9F9F2906 (WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * __this, const RuntimeMethod* method);
// System.Void Gpm.WebView.Internal.WebViewImplementation::GoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_GoForward_m2268748CFE86B8A463A627B106CDBAAF39A46C2E (WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * __this, const RuntimeMethod* method);
// System.Void Gpm.WebView.Internal.WebViewImplementation::SetPosition(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_SetPosition_m89D33D289444D0FF4B47307CD8BB33BCC165DFB8 (WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method);
// System.Void Gpm.WebView.Internal.WebViewImplementation::SetSize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_SetSize_m0D2E90E7AEC9EE4FA2F6F5FD77E4B6A513A038B3 (WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Void Gpm.WebView.Internal.WebViewImplementation::SetMargins(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_SetMargins_mB6F4F3D57E7F3C3629B84E7327A246699FAFDC9E (WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * __this, int32_t ___left0, int32_t ___top1, int32_t ___right2, int32_t ___bottom3, const RuntimeMethod* method);
// System.Int32 Gpm.WebView.Internal.WebViewImplementation::GetX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebViewImplementation_GetX_m760AD0D29A24D8CBB65F512C01B712A3E9A597FF (WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * __this, const RuntimeMethod* method);
// System.Int32 Gpm.WebView.Internal.WebViewImplementation::GetY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebViewImplementation_GetY_m9DF86FEC263D0C5AED35604011FD01E3002E8F91 (WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * __this, const RuntimeMethod* method);
// System.Int32 Gpm.WebView.Internal.WebViewImplementation::GetWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebViewImplementation_GetWidth_m1A4AD15DDD9E897B31C96213E8F120F7B44FFB04 (WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * __this, const RuntimeMethod* method);
// System.Int32 Gpm.WebView.Internal.WebViewImplementation::GetHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebViewImplementation_GetHeight_mAA952B174921ACE85B3FB047743164568E95B8BA (WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * __this, const RuntimeMethod* method);
// System.Void Gpm.WebView.Internal.WebViewImplementation::ShowWebBrowser(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_ShowWebBrowser_m5703D26093DFA7184ABC0AA8A7A654A840D2A354 (WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * __this, String_t* ___url0, const RuntimeMethod* method);
// System.String Gpm.Common.ThirdParty.LitJson.JsonMapper::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonMapper_ToJson_mDF7B2A648653470AB77D8CA567AD09F7D1F70B63 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void Gpm.WebView.Internal.WebViewImplementation::ShowSafeBrowsing(System.String,Gpm.WebView.GpmWebViewRequest/ConfigurationSafeBrowsing,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_ShowSafeBrowsing_m96E23FF80A985DB1DAB063636007F669BE085F4F (WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * __this, String_t* ___url0, ConfigurationSafeBrowsing_t1E8DF97EEABF137067881FFF0A185D5B9921C6F9 * ___configuration1, GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * ___callback2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
inline void Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682 (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *, int32_t, RuntimeObject *, const RuntimeMethod*))Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mE6DB9458466D0F98B67E2C6CAEFABBF9576AC4D7 (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mE6DB9458466D0F98B67E2C6CAEFABBF9576AC4D7_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(!0)
inline bool Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4 (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
inline void Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638 (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Void Gpm.WebView.Internal.NativeMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMessage__ctor_mE0EBF745BAF4E49DAB1099ED23D31358B282F9B7 (NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * __this, const RuntimeMethod* method);
// Gpm.Communicator.GpmCommunicatorVO/Message Gpm.WebView.Internal.NativeWebView::CallSync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * NativeWebView_CallSync_m46D6737E1F2822EF186D7596CD89AEAA8B76C1BE (NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB * __this, String_t* ___data0, String_t* ___extra1, const RuntimeMethod* method);
// System.Boolean System.Convert::ToBoolean(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Convert_ToBoolean_m9BE4DAAEA91C52F17A8A7101DABB32253925826B (String_t* ___value0, const RuntimeMethod* method);
// System.Void Gpm.Communicator.GpmCommunicatorVO/Configuration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration__ctor_m57CB11296A7A6A52C5D63ABB41F68D9D98723DBC (Configuration_tAF8DF53753B7EC302B1FD14BEBAA6E9CBA272079 * __this, const RuntimeMethod* method);
// System.Void Gpm.Communicator.GpmCommunicator::InitializeClass(Gpm.Communicator.GpmCommunicatorVO/Configuration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmCommunicator_InitializeClass_m71183C8079C53E27DD013F66CFE8C86C29D74E6D (Configuration_tAF8DF53753B7EC302B1FD14BEBAA6E9CBA272079 * ___configuration0, const RuntimeMethod* method);
// System.Void Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorCallback__ctor_m6ABB3D487F5191C8F62A56AF4FE9F4BF635FE3DD (CommunicatorCallback_t00B1202EFFD17164FFEFE3AD8C02468ED4C82391 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Gpm.Communicator.GpmCommunicator::AddReceiver(System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmCommunicator_AddReceiver_m102FA10ECB9CCC3F66304E654021C7012C7EBFAF (String_t* ___domain0, CommunicatorCallback_t00B1202EFFD17164FFEFE3AD8C02468ED4C82391 * ___callback1, const RuntimeMethod* method);
// System.Int32 Gpm.WebView.Internal.NativeCallbackHandler::RegisterCallback(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeCallbackHandler_RegisterCallback_mC16F00CF14F9BABA00ABC94EE8C46D8044565AB8 (RuntimeObject * ___callback0, const RuntimeMethod* method);
// Gpm.WebView.Internal.NativeRequest/ShowWebView Gpm.WebView.Internal.NativeWebView::MakeShowWebView(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShowWebView_t47B866BED20A6758D9DA52EDF8D22305A08ED1FA * NativeWebView_MakeShowWebView_mDA41670F1CD6976FEEB0195564C700482C302B98 (NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB * __this, String_t* ___data0, Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * ___configuration1, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___schemeList2, const RuntimeMethod* method);
// System.Void Gpm.WebView.Internal.NativeWebView::CallAsync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_CallAsync_m970B8D6828E81CF30DE2829DE364D5CF05A68845 (NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB * __this, String_t* ___data0, String_t* ___extra1, const RuntimeMethod* method);
// System.Void Gpm.WebView.Internal.NativeRequest/ShowSafeBrowsing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowSafeBrowsing__ctor_m0BD616D660C45923996AD1FFE0F05EBD9A369408 (ShowSafeBrowsing_t711EFBB8AB7CCBC665A817A20F5347B285EF302F * __this, const RuntimeMethod* method);
// System.Void Gpm.WebView.Internal.NativeRequest/ConfigurationSafeBrowsing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationSafeBrowsing__ctor_mBEF49962D8F9BCD70F519649F5ABE8EA9EB229B9 (ConfigurationSafeBrowsing_t94FB8E4680C3B6D1E293B895BA7F753BBAB0527D * __this, const RuntimeMethod* method);
// System.Void Gpm.WebView.Internal.NativeRequest/ExecuteJavaScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecuteJavaScript__ctor_m6020928E8422E5DF96C26BCFEAB510B78D6D682F (ExecuteJavaScript_t149D2FB7BCB60A39444FC3DA705EB898DE46DE23 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void Gpm.WebView.Internal.NativeRequest/ShowWebView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowWebView__ctor_mB9ED0E1E4A992DDC2B9853CD9457AAB3F49CAE7B (ShowWebView_t47B866BED20A6758D9DA52EDF8D22305A08ED1FA * __this, const RuntimeMethod* method);
// System.Void Gpm.WebView.Internal.NativeRequest/Configuration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration__ctor_mA46EFD43B8603FF3B0C3630B4B3A257CED09820D (Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8 * __this, const RuntimeMethod* method);
// System.Void Gpm.WebView.Internal.NativeWebView::CheckAutoRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_CheckAutoRotation_m68EA8FF743246FFC3E84C110460EF89118EB6099 (NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB * __this, const RuntimeMethod* method);
// System.Void Gpm.Communicator.GpmCommunicatorVO/Message::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message__ctor_m2F297093425B23BCD6B38A094E078D63DD288F65 (Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * __this, const RuntimeMethod* method);
// System.Void Gpm.Communicator.GpmCommunicator::CallAsync(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmCommunicator_CallAsync_m0324145DE836CF29B71524C546F751ED0DA9D0E0 (Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * ___message0, const RuntimeMethod* method);
// Gpm.Communicator.GpmCommunicatorVO/Message Gpm.Communicator.GpmCommunicator::CallSync(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * GpmCommunicator_CallSync_m1DEE9E29AE0FF3F030F54EE10E518FA4CD23CDD6 (Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * ___message0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !!0 Gpm.Common.ThirdParty.LitJson.JsonMapper::ToObject<Gpm.WebView.Internal.NativeMessage>(System.String)
inline NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * JsonMapper_ToObject_TisNativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_mAF5A886193F504741023DD1FB533B2518B340C59 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * (*) (String_t*, const RuntimeMethod*))JsonMapper_ToObject_TisRuntimeObject_m9C5589FA45C32B847BDA6383E54D807DD34B867D_gshared)(___json0, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Gpm.WebView.Internal.NativeWebView::OnWebViewCallback(Gpm.WebView.Internal.NativeMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_OnWebViewCallback_m7D796BF7F35D37C1983681B014CFFDAAD2D3BD34 (NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB * __this, NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * ___nativeMessage0, const RuntimeMethod* method);
// T Gpm.WebView.Internal.NativeCallbackHandler::GetCallback<Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate>(System.Int32)
inline GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * NativeCallbackHandler_GetCallback_TisGpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526_m7C73C3CA6D5F45525B51618971223B7A0A124F72 (int32_t ___handle0, const RuntimeMethod* method)
{
	return ((  GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * (*) (int32_t, const RuntimeMethod*))NativeCallbackHandler_GetCallback_TisRuntimeObject_mCEC866CFB7EC1EECCF0A809051F512D10D8401B1_gshared)(___handle0, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// !!0 Gpm.Common.ThirdParty.LitJson.JsonMapper::ToObject<Gpm.WebView.GpmWebViewError>(System.String)
inline GpmWebViewError_tBDC438A993BE136762458A7B80E9FC35C32F8C21 * JsonMapper_ToObject_TisGpmWebViewError_tBDC438A993BE136762458A7B80E9FC35C32F8C21_mE7D68030B931626E14554AE2B4E54530894571C1 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  GpmWebViewError_tBDC438A993BE136762458A7B80E9FC35C32F8C21 * (*) (String_t*, const RuntimeMethod*))JsonMapper_ToObject_TisRuntimeObject_m9C5589FA45C32B847BDA6383E54D807DD34B867D_gshared)(___json0, method);
}
// System.Void Gpm.WebView.Internal.NativeCallbackHandler::UnregisterCallback(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCallbackHandler_UnregisterCallback_m5A88F676B0F5A74F40AE711FA2469E2BF4889C85 (int32_t ___handle0, const RuntimeMethod* method);
// System.Void Gpm.WebView.Internal.NativeWebView::RestoreOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_RestoreOrientation_mAFBED114D5A6CA8A551577E576BB4C597F4B3A34 (NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB * __this, const RuntimeMethod* method);
// System.Void Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate::Invoke(Gpm.WebView.GpmWebViewCallback/CallbackType,System.String,Gpm.WebView.GpmWebViewError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebViewDelegate_Invoke_m6A2C3F1D6A617E1CD749B7436B1F2A17D5400928 (GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * __this, int32_t ___type0, String_t* ___data1, GpmWebViewError_tBDC438A993BE136762458A7B80E9FC35C32F8C21 * ___error2, const RuntimeMethod* method);
// System.Void Gpm.WebView.Internal.NativeRequest/Position::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Position__ctor_mEF441CE1DA7A405B444BDCF364280B9CAE677EF0 (Position_t99CED3006BAD63E73FD1E85EE78BE4936CADBD70 * __this, const RuntimeMethod* method);
// System.Void Gpm.WebView.Internal.NativeRequest/Size::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Size__ctor_mE82F69DE3E0E133870FCFB38FCFCA0E3165D8996 (Size_tD84EC7BBB992369C9A0CC7D80AD0268F3ED54D12 * __this, const RuntimeMethod* method);
// System.Void Gpm.WebView.Internal.NativeRequest/Margins::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Margins__ctor_mBD7A5088EF666E07B0CE4EABA6C67DAF2B974303 (Margins_tD3B287C5998931DED6C19FD0EA7533D529ABC4D7 * __this, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mA1C10AB2A7C95E9DCAC473D1D88C74D60FA240ED (String_t* ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Screen::get_autorotateToPortrait()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Screen_get_autorotateToPortrait_m701B4ECBF07472A35470C71610270653E4B08138 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Screen::get_autorotateToPortraitUpsideDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Screen_get_autorotateToPortraitUpsideDown_m01523BFE802F07642427E4C87DD03257081209FB (const RuntimeMethod* method);
// System.Boolean UnityEngine.Screen::get_autorotateToLandscapeLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Screen_get_autorotateToLandscapeLeft_m1AD3A663DFBDD69E01E630B4945FDC2DC93009BA (const RuntimeMethod* method);
// System.Boolean UnityEngine.Screen::get_autorotateToLandscapeRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Screen_get_autorotateToLandscapeRight_mD0987D56ABE583B238DEA0ABD3D77BD2DE0E9806 (const RuntimeMethod* method);
// UnityEngine.ScreenOrientation UnityEngine.Screen::get_orientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_orientation_m1C42BB2AF3CA157B8015FA7AB36F8BB1329660E7 (const RuntimeMethod* method);
// System.Void UnityEngine.Screen::set_autorotateToPortrait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_autorotateToPortrait_m4463ABAE29F26E957CF488565AEF4EF655B6E048 (bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Screen::set_autorotateToPortraitUpsideDown(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_autorotateToPortraitUpsideDown_m55CA3FBCA4E8F835AC084D1B0FAE19D72A924906 (bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Screen::set_autorotateToLandscapeLeft(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_autorotateToLandscapeLeft_mA58796BBE0540504E54B1E0A06C06786456C4D5B (bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Screen::set_autorotateToLandscapeRight(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_autorotateToLandscapeRight_m7934E7BCD90CEE16D1C4A10E739DF1B021F2E255 (bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Screen::set_orientation(UnityEngine.ScreenOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_orientation_mBEF7687B3C2B4726AE40F2BBB3568B1B131B6D1B (int32_t ___value0, const RuntimeMethod* method);
// System.Void Gpm.WebView.Internal.NativeRequest/ShowWebBrowser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowWebBrowser__ctor_mC8D6BDEA6FBB0EB6A6365E1A48CF3C22E2D8B647 (ShowWebBrowser_tCB3CE687A4216C5E8F53038047E697F9DDEAD891 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, const RuntimeMethod* method);
// Gpm.WebView.GpmWebViewRequest/Configuration SampleWebView::GetConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * SampleWebView_GetConfiguration_m90180677809C4C62131B564A56FF6D6855815E59 (SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88 * __this, const RuntimeMethod* method);
// System.Void Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebViewDelegate__ctor_m5AD431E00195331A1BB8DD00CBAFEFCAAE6F8C08 (GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.String> SampleWebView::GetCustomSchemeList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * SampleWebView_GetCustomSchemeList_m7CE80C9508ACBE4C285639044A624DD8DA85BF37 (SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88 * __this, const RuntimeMethod* method);
// System.Void Gpm.WebView.GpmWebView::ShowUrl(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_ShowUrl_mC39A3D56D034FB3EB0998C79DF1E27C8A411D344 (String_t* ___url0, Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * ___configuration1, GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * ___callback2, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___schemeList3, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Gpm.WebView.GpmWebView::ShowHtmlString(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_ShowHtmlString_mD29179721F7F23D8A34AB597438B7330D49D5767 (String_t* ___htmlString0, Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * ___configuration1, GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * ___callback2, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___schemeList3, const RuntimeMethod* method);
// System.Void Gpm.WebView.GpmWebViewRequest/ConfigurationSafeBrowsing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationSafeBrowsing__ctor_m936CD80EDDA42ECCB20CA93F066572032A7FCECD (ConfigurationSafeBrowsing_t1E8DF97EEABF137067881FFF0A185D5B9921C6F9 * __this, const RuntimeMethod* method);
// System.Void Gpm.WebView.GpmWebViewSafeBrowsing::ShowSafeBrowsing(System.String,Gpm.WebView.GpmWebViewRequest/ConfigurationSafeBrowsing,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebViewSafeBrowsing_ShowSafeBrowsing_mB6590D03196BE7D549B368AB3B34B78ED2562E49 (String_t* ___url0, ConfigurationSafeBrowsing_t1E8DF97EEABF137067881FFF0A185D5B9921C6F9 * ___configuration1, GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * ___callback2, const RuntimeMethod* method);
// System.Void Gpm.WebView.GpmWebView::ShowWebBrowser(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_ShowWebBrowser_m9940C517AB3989C50E5AB0E34ED36C111DF01999 (String_t* ___url0, const RuntimeMethod* method);
// System.Void Gpm.WebView.GpmWebViewRequest/CustomSchemePostCommand::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomSchemePostCommand__ctor_mD72A838B78E510B5A06CECC23E4753BFE3EA08B9 (CustomSchemePostCommand_t25DC04BF3BCCC447F4AED01102F27DAC5B04561A * __this, const RuntimeMethod* method);
// System.Void Gpm.WebView.GpmWebViewRequest/CustomSchemePostCommand::Close(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomSchemePostCommand_Close_mF39C116A9B1F44A9F78663B3B888814C3B8D16A6 (CustomSchemePostCommand_t25DC04BF3BCCC447F4AED01102F27DAC5B04561A * __this, String_t* ___customScheme0, const RuntimeMethod* method);
// System.Void Gpm.WebView.GpmWebViewRequest/Configuration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration__ctor_mAA46949E164E88806E8653429FDC7B11A43F4A7C (Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.UI.Dropdown::get_value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Dropdown_get_value_mFBF47E0C72050C5CB96B8B6D33F41BA2D1368F26_inline (Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline (Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * __this, const RuntimeMethod* method);
// Gpm.WebView.GpmWebViewRequest/Position SampleWebView::GetConfigurationPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Position_tE389F0309F8DE9F2BB96E471C81D09AE285E0701  SampleWebView_GetConfigurationPosition_m78779699DAC3CB0528D4BDED34CE8AF86D36213A (SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88 * __this, const RuntimeMethod* method);
// Gpm.WebView.GpmWebViewRequest/Size SampleWebView::GetConfigurationSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Size_t92BB328622E7C6869FBF329D08E72EE0D18C8751  SampleWebView_GetConfigurationSize_mA6268B40CFBCCFE6645AC965B2294EDEBA002169 (SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88 * __this, const RuntimeMethod* method);
// Gpm.WebView.GpmWebViewRequest/Margins SampleWebView::GetConfigurationMargins()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Margins_tE71166091954A97FE414FCDA43759AAC56D9688F  SampleWebView_GetConfigurationMargins_m36B00E0892EC9FAA5B72B8FA44186AC90D572431 (SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88 * __this, const RuntimeMethod* method);
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared)(__this, ___collection0, method);
}
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_m3FD4ED373B54BC92F95360449859CD95D45D73C6 (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Boolean Gpm.WebView.GpmWebView::CanGoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GpmWebView_CanGoBack_m500296FEC8B7F57FCD4F644754187A51B4F7B195 (const RuntimeMethod* method);
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C (bool* __this, const RuntimeMethod* method);
// System.Void Gpm.WebView.GpmWebView::GoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_GoBack_mBE73F5AC98CAE8FF6313C7775E22A0F875A46768 (const RuntimeMethod* method);
// System.Boolean Gpm.WebView.GpmWebView::CanGoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GpmWebView_CanGoForward_m0E9C550777B96862C9DAF1F92D6F943C54A506B3 (const RuntimeMethod* method);
// System.Void Gpm.WebView.GpmWebView::GoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_GoForward_mFAC3A8B76054DF7E3FEAC44C078F24C81AB3C3C4 (const RuntimeMethod* method);
// System.Int32 Gpm.WebView.GpmWebView::GetX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GpmWebView_GetX_m3D11093012E247D1A1BC9E1BE4537EF421B943D4 (const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Int32 Gpm.WebView.GpmWebView::GetY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GpmWebView_GetY_m21150A3335FF75A2EE2427C7639BF467D047BE18 (const RuntimeMethod* method);
// System.Int32 Gpm.WebView.GpmWebView::GetWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GpmWebView_GetWidth_mC0E391B4065FF25574C9307D04C62CFB3FE58B2A (const RuntimeMethod* method);
// System.Int32 Gpm.WebView.GpmWebView::GetHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GpmWebView_GetHeight_m36877E28F6D644C29DBC37F4690D01691881F87C (const RuntimeMethod* method);
// System.Void Gpm.WebView.GpmWebView::ExecuteJavaScript(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_ExecuteJavaScript_m8BC9C5B795248DAA3D077B4AAB6A34719681D0D6 (String_t* ___script0, const RuntimeMethod* method);
// System.Boolean Gpm.WebView.GpmWebView::IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GpmWebView_IsActive_m6F1FA426106B9E73372A7C84501835F7A4F47307 (const RuntimeMethod* method);
// System.Void Gpm.WebView.GpmWebView::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_Close_m0CB710448FC3B86A1703790B6AC7B91BA8ED199D (const RuntimeMethod* method);
// System.Void Gpm.WebView.GpmWebView::SetPosition(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_SetPosition_m0C6390640C8B1F4F868673A9588753413627B82D (int32_t ___x0, int32_t ___y1, const RuntimeMethod* method);
// System.Void Gpm.WebView.GpmWebView::SetSize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_SetSize_m8FE047C088844B2FDA664CB71AE2BD1807DFF885 (int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Void Gpm.WebView.GpmWebView::SetMargins(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_SetMargins_m9A5ABED63BB55664C602CE3360795FEDDC4A2233 (int32_t ___left0, int32_t ___top1, int32_t ___right2, int32_t ___bottom3, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void Gpm.WebView.Internal.IOSWebView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebView__ctor_mCFB9C81F42352A56E14EE4F9CE24384D839D67E6 (IOSWebView_tAA6DC2B33D6BA965C3B791BDD1DE99D53953F70C * __this, const RuntimeMethod* method);
// System.Void Gpm.WebView.Internal.WebViewImplementation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation__ctor_m11BFE4FC74BE6803D00571F7DC60709FC78FE184 (WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * __this, const RuntimeMethod* method);
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m8846EB11F0A221BDE237DE041D17764B36065404 (String_t* ___separator0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
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
// System.Void Gpm.WebView.Internal.AndroidWebView::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidWebView_Initialize_mBA94A5FCCD94F82C80133334E74CB1E39C1BC140 (AndroidWebView_tC7DD776D673E610D51EE31E1425FE3BC93E17506 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBC6A109B31082B93DBCD3AEF08F4F4B18A8D860);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CLASS_NAME = ANDROID_CLASS_NAME;
		((NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB *)__this)->set_CLASS_NAME_3(_stringLiteralEBC6A109B31082B93DBCD3AEF08F4F4B18A8D860);
		// base.Initialize();
		NativeWebView_Initialize_m89EBEE6D65057CAE6FEAB02F988CAFB447C323FB(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.AndroidWebView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidWebView__ctor_m933642989EBB9260DFFA63988627BD9DC18C7F25 (AndroidWebView_tC7DD776D673E610D51EE31E1425FE3BC93E17506 * __this, const RuntimeMethod* method)
{
	{
		NativeWebView__ctor_mEF02C4B1515ED262D2B8CB7C2DD0F6626BD8FD6D(__this, /*hidden argument*/NULL);
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
// System.Boolean Gpm.WebView.Internal.DefaultWebView::get_CanGoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultWebView_get_CanGoBack_m27E570ECAA400C57BDB121A7C189216DDC1B3F72 (DefaultWebView_tB60903E2C70F939B933C18B1DDD579DB0B026A07 * __this, const RuntimeMethod* method)
{
	{
		// public bool CanGoBack => false;
		return (bool)0;
	}
}
// System.Boolean Gpm.WebView.Internal.DefaultWebView::get_CanGoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultWebView_get_CanGoForward_m4EA8E05F485E8CC56AA78B2A12D5C99A72EC33A3 (DefaultWebView_tB60903E2C70F939B933C18B1DDD579DB0B026A07 * __this, const RuntimeMethod* method)
{
	{
		// public bool CanGoForward => false;
		return (bool)0;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::ShowUrl(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView_ShowUrl_m9D3C76D0411D56EFBEBBAA3CDB80E710C4160C2F (DefaultWebView_tB60903E2C70F939B933C18B1DDD579DB0B026A07 * __this, String_t* ___url0, Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * ___configuration1, GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * ___callback2, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___schemeList3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::ShowHtmlFile(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView_ShowHtmlFile_m9ADF9B643F080EAB82BF4C413BC8950A8250C932 (DefaultWebView_tB60903E2C70F939B933C18B1DDD579DB0B026A07 * __this, String_t* ___fileName0, Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * ___configuration1, GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * ___callback2, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___schemeList3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::ShowHtmlString(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView_ShowHtmlString_mDD0E8ADB7267E5FC442B68515DE3D6D73D33BF85 (DefaultWebView_tB60903E2C70F939B933C18B1DDD579DB0B026A07 * __this, String_t* ___source0, Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * ___configuration1, GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * ___callback2, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___schemeList3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::ShowSafeBrowsing(System.String,Gpm.WebView.GpmWebViewRequest/ConfigurationSafeBrowsing,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView_ShowSafeBrowsing_m9F7B327200A0BA6808A498075E348AC3139EE664 (DefaultWebView_tB60903E2C70F939B933C18B1DDD579DB0B026A07 * __this, String_t* ___url0, ConfigurationSafeBrowsing_t1E8DF97EEABF137067881FFF0A185D5B9921C6F9 * ___configuration1, GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * ___callback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView_Close_mDBD632A412CCE3445A06F976D4B07B596A3B912D (DefaultWebView_tB60903E2C70F939B933C18B1DDD579DB0B026A07 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Gpm.WebView.Internal.DefaultWebView::IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultWebView_IsActive_mD9D53A53C6DA4ED6DD73F7D0E3A0EE6B7442E7C8 (DefaultWebView_tB60903E2C70F939B933C18B1DDD579DB0B026A07 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::ExecuteJavaScript(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView_ExecuteJavaScript_m86F75773F440AC9F68F29A1C8D6578C7785EF6D1 (DefaultWebView_tB60903E2C70F939B933C18B1DDD579DB0B026A07 * __this, String_t* ___script0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::SetFileDownloadPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView_SetFileDownloadPath_m3AEF7C8F5EB10D4F167C25BB838D9189B6917437 (DefaultWebView_tB60903E2C70F939B933C18B1DDD579DB0B026A07 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::GoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView_GoBack_mC9CFD01407C0BC1871F86130A35BA05D09671131 (DefaultWebView_tB60903E2C70F939B933C18B1DDD579DB0B026A07 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::GoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView_GoForward_m75437ACB2D2922871027F0954D617C5EDF6129EE (DefaultWebView_tB60903E2C70F939B933C18B1DDD579DB0B026A07 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::SetPosition(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView_SetPosition_m709AC0C06CCDBFEF785D870127CFF6F7ADDBD969 (DefaultWebView_tB60903E2C70F939B933C18B1DDD579DB0B026A07 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::SetSize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView_SetSize_m15BA2D5DE511CB526BE787548E9CFD27D0F4F64E (DefaultWebView_tB60903E2C70F939B933C18B1DDD579DB0B026A07 * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::SetMargins(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView_SetMargins_mBABA685C60E4A45E42694F4AE89F79EC131BFD0A (DefaultWebView_tB60903E2C70F939B933C18B1DDD579DB0B026A07 * __this, int32_t ___left0, int32_t ___top1, int32_t ___right2, int32_t ___bottom3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 Gpm.WebView.Internal.DefaultWebView::GetX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultWebView_GetX_m970DE8CDEC7AF436DD49CF9AF06D4A36F6360000 (DefaultWebView_tB60903E2C70F939B933C18B1DDD579DB0B026A07 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, /*hidden argument*/NULL);
		// return 0;
		return 0;
	}
}
// System.Int32 Gpm.WebView.Internal.DefaultWebView::GetY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultWebView_GetY_mF74C129D20F366D469C0D3B39E139F747B6BF848 (DefaultWebView_tB60903E2C70F939B933C18B1DDD579DB0B026A07 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, /*hidden argument*/NULL);
		// return 0;
		return 0;
	}
}
// System.Int32 Gpm.WebView.Internal.DefaultWebView::GetWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultWebView_GetWidth_m97343F383450DB94068101EEF75AB4B809C024E5 (DefaultWebView_tB60903E2C70F939B933C18B1DDD579DB0B026A07 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, /*hidden argument*/NULL);
		// return 0;
		return 0;
	}
}
// System.Int32 Gpm.WebView.Internal.DefaultWebView::GetHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultWebView_GetHeight_m42734ED40D0B69EB439205D1E7DE5F43DC4719B5 (DefaultWebView_tB60903E2C70F939B933C18B1DDD579DB0B026A07 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, /*hidden argument*/NULL);
		// return 0;
		return 0;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::ShowWebBrowser(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView_ShowWebBrowser_m294E972367EB83CC43905D42BE954E2E93F49D4A (DefaultWebView_tB60903E2C70F939B933C18B1DDD579DB0B026A07 * __this, String_t* ___url0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView__ctor_m7C7AC1523E4DEA7A164BFAD39BD447184402630C (DefaultWebView_tB60903E2C70F939B933C18B1DDD579DB0B026A07 * __this, const RuntimeMethod* method)
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
// System.Void Gpm.WebView.GpmWebView::ShowUrl(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_ShowUrl_mC39A3D56D034FB3EB0998C79DF1E27C8A411D344 (String_t* ___url0, Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * ___configuration1, GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * ___callback2, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___schemeList3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebViewImplementation.Instance.ShowUrl(url, configuration, callback, schemeList);
		IL2CPP_RUNTIME_CLASS_INIT(WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * L_0;
		L_0 = WebViewImplementation_get_Instance_m15928AE1C49475334670988A6D73B5DBD1D9CC84_inline(/*hidden argument*/NULL);
		String_t* L_1 = ___url0;
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_2 = ___configuration1;
		GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * L_3 = ___callback2;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_4 = ___schemeList3;
		NullCheck(L_0);
		WebViewImplementation_ShowUrl_mB307C87DF45A37188203BFDBC49F85904068C1D8(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.GpmWebView::ShowHtmlFile(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_ShowHtmlFile_m204A0A296A2D762D95867DE6156CE74519F7E6BC (String_t* ___filePath0, Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * ___configuration1, GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * ___callback2, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___schemeList3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebViewImplementation.Instance.ShowHtmlFile(filePath, configuration, callback, schemeList);
		IL2CPP_RUNTIME_CLASS_INIT(WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * L_0;
		L_0 = WebViewImplementation_get_Instance_m15928AE1C49475334670988A6D73B5DBD1D9CC84_inline(/*hidden argument*/NULL);
		String_t* L_1 = ___filePath0;
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_2 = ___configuration1;
		GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * L_3 = ___callback2;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_4 = ___schemeList3;
		NullCheck(L_0);
		WebViewImplementation_ShowHtmlFile_m9BB5487EDE02A0F86581616CC884E5BD52BD3020(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.GpmWebView::ShowHtmlString(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_ShowHtmlString_mD29179721F7F23D8A34AB597438B7330D49D5767 (String_t* ___htmlString0, Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * ___configuration1, GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * ___callback2, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___schemeList3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebViewImplementation.Instance.ShowHtmlString(htmlString, configuration, callback, schemeList);
		IL2CPP_RUNTIME_CLASS_INIT(WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * L_0;
		L_0 = WebViewImplementation_get_Instance_m15928AE1C49475334670988A6D73B5DBD1D9CC84_inline(/*hidden argument*/NULL);
		String_t* L_1 = ___htmlString0;
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_2 = ___configuration1;
		GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * L_3 = ___callback2;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_4 = ___schemeList3;
		NullCheck(L_0);
		WebViewImplementation_ShowHtmlString_m501616B1ED0F14042FECA25BB9DFDC0DE9E00C91(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.GpmWebView::ExecuteJavaScript(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_ExecuteJavaScript_m8BC9C5B795248DAA3D077B4AAB6A34719681D0D6 (String_t* ___script0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebViewImplementation.Instance.ExecuteJavaScript(script);
		IL2CPP_RUNTIME_CLASS_INIT(WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * L_0;
		L_0 = WebViewImplementation_get_Instance_m15928AE1C49475334670988A6D73B5DBD1D9CC84_inline(/*hidden argument*/NULL);
		String_t* L_1 = ___script0;
		NullCheck(L_0);
		WebViewImplementation_ExecuteJavaScript_m0EB9DBA1F9D960BC9D2264D70FFC6299C700BD21(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.GpmWebView::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_Close_m0CB710448FC3B86A1703790B6AC7B91BA8ED199D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebViewImplementation.Instance.Close();
		IL2CPP_RUNTIME_CLASS_INIT(WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * L_0;
		L_0 = WebViewImplementation_get_Instance_m15928AE1C49475334670988A6D73B5DBD1D9CC84_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		WebViewImplementation_Close_m2718043CB497129FDEDE8037AEB9FC5619DD19A5(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Gpm.WebView.GpmWebView::IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GpmWebView_IsActive_m6F1FA426106B9E73372A7C84501835F7A4F47307 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return WebViewImplementation.Instance.IsActive();
		IL2CPP_RUNTIME_CLASS_INIT(WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * L_0;
		L_0 = WebViewImplementation_get_Instance_m15928AE1C49475334670988A6D73B5DBD1D9CC84_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = WebViewImplementation_IsActive_m5610B18C1B85C8FC817C80D0ACE2029D2389BA24(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Gpm.WebView.GpmWebView::CanGoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GpmWebView_CanGoBack_m500296FEC8B7F57FCD4F644754187A51B4F7B195 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return WebViewImplementation.Instance.CanGoBack();
		IL2CPP_RUNTIME_CLASS_INIT(WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * L_0;
		L_0 = WebViewImplementation_get_Instance_m15928AE1C49475334670988A6D73B5DBD1D9CC84_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = WebViewImplementation_CanGoBack_m1E4370D9E071B4620ED85D95723ABBC9E04231A8(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Gpm.WebView.GpmWebView::CanGoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GpmWebView_CanGoForward_m0E9C550777B96862C9DAF1F92D6F943C54A506B3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return WebViewImplementation.Instance.CanGoForward();
		IL2CPP_RUNTIME_CLASS_INIT(WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * L_0;
		L_0 = WebViewImplementation_get_Instance_m15928AE1C49475334670988A6D73B5DBD1D9CC84_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = WebViewImplementation_CanGoForward_m6A97E9144295A04002DBD85001B80A6354A153D9(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Gpm.WebView.GpmWebView::GoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_GoBack_mBE73F5AC98CAE8FF6313C7775E22A0F875A46768 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebViewImplementation.Instance.GoBack();
		IL2CPP_RUNTIME_CLASS_INIT(WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * L_0;
		L_0 = WebViewImplementation_get_Instance_m15928AE1C49475334670988A6D73B5DBD1D9CC84_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		WebViewImplementation_GoBack_mA3E51D4751ACF48E3EED6D48F34B32AF9F9F2906(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.GpmWebView::GoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_GoForward_mFAC3A8B76054DF7E3FEAC44C078F24C81AB3C3C4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebViewImplementation.Instance.GoForward();
		IL2CPP_RUNTIME_CLASS_INIT(WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * L_0;
		L_0 = WebViewImplementation_get_Instance_m15928AE1C49475334670988A6D73B5DBD1D9CC84_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		WebViewImplementation_GoForward_m2268748CFE86B8A463A627B106CDBAAF39A46C2E(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.GpmWebView::SetPosition(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_SetPosition_m0C6390640C8B1F4F868673A9588753413627B82D (int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebViewImplementation.Instance.SetPosition(x, y);
		IL2CPP_RUNTIME_CLASS_INIT(WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * L_0;
		L_0 = WebViewImplementation_get_Instance_m15928AE1C49475334670988A6D73B5DBD1D9CC84_inline(/*hidden argument*/NULL);
		int32_t L_1 = ___x0;
		int32_t L_2 = ___y1;
		NullCheck(L_0);
		WebViewImplementation_SetPosition_m89D33D289444D0FF4B47307CD8BB33BCC165DFB8(L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.GpmWebView::SetSize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_SetSize_m8FE047C088844B2FDA664CB71AE2BD1807DFF885 (int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebViewImplementation.Instance.SetSize(width, height);
		IL2CPP_RUNTIME_CLASS_INIT(WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * L_0;
		L_0 = WebViewImplementation_get_Instance_m15928AE1C49475334670988A6D73B5DBD1D9CC84_inline(/*hidden argument*/NULL);
		int32_t L_1 = ___width0;
		int32_t L_2 = ___height1;
		NullCheck(L_0);
		WebViewImplementation_SetSize_m0D2E90E7AEC9EE4FA2F6F5FD77E4B6A513A038B3(L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.GpmWebView::SetMargins(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_SetMargins_m9A5ABED63BB55664C602CE3360795FEDDC4A2233 (int32_t ___left0, int32_t ___top1, int32_t ___right2, int32_t ___bottom3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebViewImplementation.Instance.SetMargins(left, top, right, bottom);
		IL2CPP_RUNTIME_CLASS_INIT(WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * L_0;
		L_0 = WebViewImplementation_get_Instance_m15928AE1C49475334670988A6D73B5DBD1D9CC84_inline(/*hidden argument*/NULL);
		int32_t L_1 = ___left0;
		int32_t L_2 = ___top1;
		int32_t L_3 = ___right2;
		int32_t L_4 = ___bottom3;
		NullCheck(L_0);
		WebViewImplementation_SetMargins_mB6F4F3D57E7F3C3629B84E7327A246699FAFDC9E(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 Gpm.WebView.GpmWebView::GetX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GpmWebView_GetX_m3D11093012E247D1A1BC9E1BE4537EF421B943D4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return WebViewImplementation.Instance.GetX();
		IL2CPP_RUNTIME_CLASS_INIT(WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * L_0;
		L_0 = WebViewImplementation_get_Instance_m15928AE1C49475334670988A6D73B5DBD1D9CC84_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = WebViewImplementation_GetX_m760AD0D29A24D8CBB65F512C01B712A3E9A597FF(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Gpm.WebView.GpmWebView::GetY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GpmWebView_GetY_m21150A3335FF75A2EE2427C7639BF467D047BE18 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return WebViewImplementation.Instance.GetY();
		IL2CPP_RUNTIME_CLASS_INIT(WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * L_0;
		L_0 = WebViewImplementation_get_Instance_m15928AE1C49475334670988A6D73B5DBD1D9CC84_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = WebViewImplementation_GetY_m9DF86FEC263D0C5AED35604011FD01E3002E8F91(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Gpm.WebView.GpmWebView::GetWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GpmWebView_GetWidth_mC0E391B4065FF25574C9307D04C62CFB3FE58B2A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return WebViewImplementation.Instance.GetWidth();
		IL2CPP_RUNTIME_CLASS_INIT(WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * L_0;
		L_0 = WebViewImplementation_get_Instance_m15928AE1C49475334670988A6D73B5DBD1D9CC84_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = WebViewImplementation_GetWidth_m1A4AD15DDD9E897B31C96213E8F120F7B44FFB04(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Gpm.WebView.GpmWebView::GetHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GpmWebView_GetHeight_m36877E28F6D644C29DBC37F4690D01691881F87C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return WebViewImplementation.Instance.GetHeight();
		IL2CPP_RUNTIME_CLASS_INIT(WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * L_0;
		L_0 = WebViewImplementation_get_Instance_m15928AE1C49475334670988A6D73B5DBD1D9CC84_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = WebViewImplementation_GetHeight_mAA952B174921ACE85B3FB047743164568E95B8BA(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Gpm.WebView.GpmWebView::ShowWebBrowser(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_ShowWebBrowser_m9940C517AB3989C50E5AB0E34ED36C111DF01999 (String_t* ___url0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebViewImplementation.Instance.ShowWebBrowser(url);
		IL2CPP_RUNTIME_CLASS_INIT(WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * L_0;
		L_0 = WebViewImplementation_get_Instance_m15928AE1C49475334670988A6D73B5DBD1D9CC84_inline(/*hidden argument*/NULL);
		String_t* L_1 = ___url0;
		NullCheck(L_0);
		WebViewImplementation_ShowWebBrowser_m5703D26093DFA7184ABC0AA8A7A654A840D2A354(L_0, L_1, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Gpm.WebView.GpmWebViewError::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GpmWebViewError_ToString_m0F17AD2DA07DF39D1F67DDE91704133004690A90 (GpmWebViewError_tBDC438A993BE136762458A7B80E9FC35C32F8C21 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return JsonMapper.ToJson(this);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = JsonMapper_ToJson_mDF7B2A648653470AB77D8CA567AD09F7D1F70B63(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Gpm.WebView.GpmWebViewError::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebViewError__ctor_m862F3472A79801813553474A42A2793F80A9CAD5 (GpmWebViewError_tBDC438A993BE136762458A7B80E9FC35C32F8C21 * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Gpm.WebView.GpmWebViewSafeBrowsing::ShowSafeBrowsing(System.String,Gpm.WebView.GpmWebViewRequest/ConfigurationSafeBrowsing,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebViewSafeBrowsing_ShowSafeBrowsing_mB6590D03196BE7D549B368AB3B34B78ED2562E49 (String_t* ___url0, ConfigurationSafeBrowsing_t1E8DF97EEABF137067881FFF0A185D5B9921C6F9 * ___configuration1, GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * ___callback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebViewImplementation.Instance.ShowSafeBrowsing(url, configuration, callback);
		IL2CPP_RUNTIME_CLASS_INIT(WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * L_0;
		L_0 = WebViewImplementation_get_Instance_m15928AE1C49475334670988A6D73B5DBD1D9CC84_inline(/*hidden argument*/NULL);
		String_t* L_1 = ___url0;
		ConfigurationSafeBrowsing_t1E8DF97EEABF137067881FFF0A185D5B9921C6F9 * L_2 = ___configuration1;
		GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * L_3 = ___callback2;
		NullCheck(L_0);
		WebViewImplementation_ShowSafeBrowsing_m96E23FF80A985DB1DAB063636007F669BE085F4F(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Gpm.WebView.Internal.IOSWebView::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebView_Initialize_mEA1EB7D871BF8F9121817A961ED7ECFD9EE385B0 (IOSWebView_tAA6DC2B33D6BA965C3B791BDD1DE99D53953F70C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F6FEC0B16C8B98098A911F6CB65DC2E44F58856);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CLASS_NAME = IOS_CLASS_NAME;
		((NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB *)__this)->set_CLASS_NAME_3(_stringLiteral9F6FEC0B16C8B98098A911F6CB65DC2E44F58856);
		// base.Initialize();
		NativeWebView_Initialize_m89EBEE6D65057CAE6FEAB02F988CAFB447C323FB(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.IOSWebView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebView__ctor_mCFB9C81F42352A56E14EE4F9CE24384D839D67E6 (IOSWebView_tAA6DC2B33D6BA965C3B791BDD1DE99D53953F70C * __this, const RuntimeMethod* method)
{
	{
		NativeWebView__ctor_mEF02C4B1515ED262D2B8CB7C2DD0F6626BD8FD6D(__this, /*hidden argument*/NULL);
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
// System.Int32 Gpm.WebView.Internal.NativeCallbackHandler::RegisterCallback(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeCallbackHandler_RegisterCallback_mC16F00CF14F9BABA00ABC94EE8C46D8044565AB8 (RuntimeObject * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCallbackHandler_t0A61748AAD4518D616E864B7C6C1D8E26AC78017_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (callback == null)
		RuntimeObject * L_0 = ___callback0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0005:
	{
		// callbackDic.Add(handle, callback);
		IL2CPP_RUNTIME_CLASS_INIT(NativeCallbackHandler_t0A61748AAD4518D616E864B7C6C1D8E26AC78017_il2cpp_TypeInfo_var);
		Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * L_1 = ((NativeCallbackHandler_t0A61748AAD4518D616E864B7C6C1D8E26AC78017_StaticFields*)il2cpp_codegen_static_fields_for(NativeCallbackHandler_t0A61748AAD4518D616E864B7C6C1D8E26AC78017_il2cpp_TypeInfo_var))->get_callbackDic_1();
		int32_t L_2 = ((NativeCallbackHandler_t0A61748AAD4518D616E864B7C6C1D8E26AC78017_StaticFields*)il2cpp_codegen_static_fields_for(NativeCallbackHandler_t0A61748AAD4518D616E864B7C6C1D8E26AC78017_il2cpp_TypeInfo_var))->get_handle_0();
		RuntimeObject * L_3 = ___callback0;
		NullCheck(L_1);
		Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682(L_1, L_2, L_3, /*hidden argument*/Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_RuntimeMethod_var);
		// return handle++;
		int32_t L_4 = ((NativeCallbackHandler_t0A61748AAD4518D616E864B7C6C1D8E26AC78017_StaticFields*)il2cpp_codegen_static_fields_for(NativeCallbackHandler_t0A61748AAD4518D616E864B7C6C1D8E26AC78017_il2cpp_TypeInfo_var))->get_handle_0();
		int32_t L_5 = L_4;
		((NativeCallbackHandler_t0A61748AAD4518D616E864B7C6C1D8E26AC78017_StaticFields*)il2cpp_codegen_static_fields_for(NativeCallbackHandler_t0A61748AAD4518D616E864B7C6C1D8E26AC78017_il2cpp_TypeInfo_var))->set_handle_0(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		return L_5;
	}
}
// System.Void Gpm.WebView.Internal.NativeCallbackHandler::UnregisterCallback(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCallbackHandler_UnregisterCallback_m5A88F676B0F5A74F40AE711FA2469E2BF4889C85 (int32_t ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mE6DB9458466D0F98B67E2C6CAEFABBF9576AC4D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCallbackHandler_t0A61748AAD4518D616E864B7C6C1D8E26AC78017_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (callbackDic.ContainsKey(handle) == true)
		IL2CPP_RUNTIME_CLASS_INIT(NativeCallbackHandler_t0A61748AAD4518D616E864B7C6C1D8E26AC78017_il2cpp_TypeInfo_var);
		Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * L_0 = ((NativeCallbackHandler_t0A61748AAD4518D616E864B7C6C1D8E26AC78017_StaticFields*)il2cpp_codegen_static_fields_for(NativeCallbackHandler_t0A61748AAD4518D616E864B7C6C1D8E26AC78017_il2cpp_TypeInfo_var))->get_callbackDic_1();
		int32_t L_1 = ___handle0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mE6DB9458466D0F98B67E2C6CAEFABBF9576AC4D7(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mE6DB9458466D0F98B67E2C6CAEFABBF9576AC4D7_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// callbackDic.Remove(handle);
		IL2CPP_RUNTIME_CLASS_INIT(NativeCallbackHandler_t0A61748AAD4518D616E864B7C6C1D8E26AC78017_il2cpp_TypeInfo_var);
		Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * L_3 = ((NativeCallbackHandler_t0A61748AAD4518D616E864B7C6C1D8E26AC78017_StaticFields*)il2cpp_codegen_static_fields_for(NativeCallbackHandler_t0A61748AAD4518D616E864B7C6C1D8E26AC78017_il2cpp_TypeInfo_var))->get_callbackDic_1();
		int32_t L_4 = ___handle0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_RuntimeMethod_var);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeCallbackHandler::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCallbackHandler__cctor_m6F3C208DE2C31F7BEE2563B38F24D9465670D1B5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCallbackHandler_t0A61748AAD4518D616E864B7C6C1D8E26AC78017_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static int handle = 0;
		((NativeCallbackHandler_t0A61748AAD4518D616E864B7C6C1D8E26AC78017_StaticFields*)il2cpp_codegen_static_fields_for(NativeCallbackHandler_t0A61748AAD4518D616E864B7C6C1D8E26AC78017_il2cpp_TypeInfo_var))->set_handle_0(0);
		// private static Dictionary<int, object> callbackDic = new Dictionary<int, object>();
		Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * L_0 = (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)il2cpp_codegen_object_new(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638(L_0, /*hidden argument*/Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_RuntimeMethod_var);
		((NativeCallbackHandler_t0A61748AAD4518D616E864B7C6C1D8E26AC78017_StaticFields*)il2cpp_codegen_static_fields_for(NativeCallbackHandler_t0A61748AAD4518D616E864B7C6C1D8E26AC78017_il2cpp_TypeInfo_var))->set_callbackDic_1(L_0);
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
// System.Void Gpm.WebView.Internal.NativeMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMessage__ctor_mE0EBF745BAF4E49DAB1099ED23D31358B282F9B7 (NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * __this, const RuntimeMethod* method)
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
// System.Boolean Gpm.WebView.Internal.NativeWebView::get_CanGoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeWebView_get_CanGoBack_mC0224E819F313B66E214BE50D5389FC0A940F4A8 (NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3537900A966F6526B545496171B453540EA156E2);
		s_Il2CppMethodInitialized = true;
	}
	NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * V_0 = NULL;
	{
		// NativeMessage message = new NativeMessage()
		// {
		//     scheme = ApiScheme.CAN_GO_BACK
		// };
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_0 = (NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 *)il2cpp_codegen_object_new(NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_il2cpp_TypeInfo_var);
		NativeMessage__ctor_mE0EBF745BAF4E49DAB1099ED23D31358B282F9B7(L_0, /*hidden argument*/NULL);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_scheme_0(_stringLiteral3537900A966F6526B545496171B453540EA156E2);
		V_0 = L_1;
		// var resultMessage = CallSync(JsonMapper.ToJson(message), string.Empty);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonMapper_ToJson_mDF7B2A648653470AB77D8CA567AD09F7D1F70B63(L_2, /*hidden argument*/NULL);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * L_5;
		L_5 = NativeWebView_CallSync_m46D6737E1F2822EF186D7596CD89AEAA8B76C1BE(__this, L_3, L_4, /*hidden argument*/NULL);
		// return Convert.ToBoolean(resultMessage.data);
		NullCheck(L_5);
		String_t* L_6 = L_5->get_data_1();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Convert_ToBoolean_m9BE4DAAEA91C52F17A8A7101DABB32253925826B(L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Boolean Gpm.WebView.Internal.NativeWebView::get_CanGoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeWebView_get_CanGoForward_mEF63A469807BF09A35EE0B415B3DDB00A21E4884 (NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF24E270202456BA0B227B1CABB006E5064AB3192);
		s_Il2CppMethodInitialized = true;
	}
	NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * V_0 = NULL;
	{
		// NativeMessage message = new NativeMessage()
		// {
		//     scheme = ApiScheme.CAN_GO_FORWARD
		// };
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_0 = (NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 *)il2cpp_codegen_object_new(NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_il2cpp_TypeInfo_var);
		NativeMessage__ctor_mE0EBF745BAF4E49DAB1099ED23D31358B282F9B7(L_0, /*hidden argument*/NULL);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_scheme_0(_stringLiteralF24E270202456BA0B227B1CABB006E5064AB3192);
		V_0 = L_1;
		// var resultMessage = CallSync(JsonMapper.ToJson(message), string.Empty);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonMapper_ToJson_mDF7B2A648653470AB77D8CA567AD09F7D1F70B63(L_2, /*hidden argument*/NULL);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * L_5;
		L_5 = NativeWebView_CallSync_m46D6737E1F2822EF186D7596CD89AEAA8B76C1BE(__this, L_3, L_4, /*hidden argument*/NULL);
		// return Convert.ToBoolean(resultMessage.data);
		NullCheck(L_5);
		String_t* L_6 = L_5->get_data_1();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Convert_ToBoolean_m9BE4DAAEA91C52F17A8A7101DABB32253925826B(L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView__ctor_mEF02C4B1515ED262D2B8CB7C2DD0F6626BD8FD6D (NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected string CLASS_NAME = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_CLASS_NAME_3(L_0);
		// public NativeWebView()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Initialize();
		VirtActionInvoker0::Invoke(24 /* System.Void Gpm.WebView.Internal.NativeWebView::Initialize() */, __this);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_Initialize_m89EBEE6D65057CAE6FEAB02F988CAFB447C323FB (NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommunicatorCallback_t00B1202EFFD17164FFEFE3AD8C02468ED4C82391_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Configuration_tAF8DF53753B7EC302B1FD14BEBAA6E9CBA272079_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeWebView_OnAsyncEvent_m48B394F63348988949D0D6F619CC6951F5EC63CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral981BC9EBC76493CC8A6BEEC0CEF767E026141833);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GpmCommunicatorVO.Configuration configuration = new GpmCommunicatorVO.Configuration()
		// {
		//     className = CLASS_NAME
		// };
		Configuration_tAF8DF53753B7EC302B1FD14BEBAA6E9CBA272079 * L_0 = (Configuration_tAF8DF53753B7EC302B1FD14BEBAA6E9CBA272079 *)il2cpp_codegen_object_new(Configuration_tAF8DF53753B7EC302B1FD14BEBAA6E9CBA272079_il2cpp_TypeInfo_var);
		Configuration__ctor_m57CB11296A7A6A52C5D63ABB41F68D9D98723DBC(L_0, /*hidden argument*/NULL);
		Configuration_tAF8DF53753B7EC302B1FD14BEBAA6E9CBA272079 * L_1 = L_0;
		String_t* L_2 = __this->get_CLASS_NAME_3();
		NullCheck(L_1);
		L_1->set_className_0(L_2);
		// GpmCommunicator.InitializeClass(configuration);
		GpmCommunicator_InitializeClass_m71183C8079C53E27DD013F66CFE8C86C29D74E6D(L_1, /*hidden argument*/NULL);
		// GpmCommunicator.AddReceiver(DOMAIN, OnAsyncEvent);
		CommunicatorCallback_t00B1202EFFD17164FFEFE3AD8C02468ED4C82391 * L_3 = (CommunicatorCallback_t00B1202EFFD17164FFEFE3AD8C02468ED4C82391 *)il2cpp_codegen_object_new(CommunicatorCallback_t00B1202EFFD17164FFEFE3AD8C02468ED4C82391_il2cpp_TypeInfo_var);
		CommunicatorCallback__ctor_m6ABB3D487F5191C8F62A56AF4FE9F4BF635FE3DD(L_3, __this, (intptr_t)((intptr_t)NativeWebView_OnAsyncEvent_m48B394F63348988949D0D6F619CC6951F5EC63CB_RuntimeMethod_var), /*hidden argument*/NULL);
		GpmCommunicator_AddReceiver_m102FA10ECB9CCC3F66304E654021C7012C7EBFAF(_stringLiteral981BC9EBC76493CC8A6BEEC0CEF767E026141833, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::ShowUrl(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_ShowUrl_mBD24D4AF2C8962B883815E21AEFCAD3749CF71F5 (NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB * __this, String_t* ___url0, Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * ___configuration1, GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * ___callback2, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___schemeList3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCallbackHandler_t0A61748AAD4518D616E864B7C6C1D8E26AC78017_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B00FE2C21F21764BB277C1BEE12004F53874EB5);
		s_Il2CppMethodInitialized = true;
	}
	NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * V_0 = NULL;
	ShowWebView_t47B866BED20A6758D9DA52EDF8D22305A08ED1FA * V_1 = NULL;
	{
		// NativeMessage nativeMessage = new NativeMessage
		// {
		//     scheme = ApiScheme.SHOW_URL,
		//     callback = NativeCallbackHandler.RegisterCallback(callback)
		// };
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_0 = (NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 *)il2cpp_codegen_object_new(NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_il2cpp_TypeInfo_var);
		NativeMessage__ctor_mE0EBF745BAF4E49DAB1099ED23D31358B282F9B7(L_0, /*hidden argument*/NULL);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_scheme_0(_stringLiteral5B00FE2C21F21764BB277C1BEE12004F53874EB5);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_2 = L_1;
		GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * L_3 = ___callback2;
		IL2CPP_RUNTIME_CLASS_INIT(NativeCallbackHandler_t0A61748AAD4518D616E864B7C6C1D8E26AC78017_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = NativeCallbackHandler_RegisterCallback_mC16F00CF14F9BABA00ABC94EE8C46D8044565AB8(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_callback_4(L_4);
		V_0 = L_2;
		// NativeRequest.ShowWebView showWebView = MakeShowWebView(url, configuration, schemeList);
		String_t* L_5 = ___url0;
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_6 = ___configuration1;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_7 = ___schemeList3;
		ShowWebView_t47B866BED20A6758D9DA52EDF8D22305A08ED1FA * L_8;
		L_8 = NativeWebView_MakeShowWebView_mDA41670F1CD6976FEEB0195564C700482C302B98(__this, L_5, L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// nativeMessage.data = JsonMapper.ToJson(showWebView);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_9 = V_0;
		ShowWebView_t47B866BED20A6758D9DA52EDF8D22305A08ED1FA * L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		String_t* L_11;
		L_11 = JsonMapper_ToJson_mDF7B2A648653470AB77D8CA567AD09F7D1F70B63(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		L_9->set_data_2(L_11);
		// CallAsync(JsonMapper.ToJson(nativeMessage), null);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_12 = V_0;
		String_t* L_13;
		L_13 = JsonMapper_ToJson_mDF7B2A648653470AB77D8CA567AD09F7D1F70B63(L_12, /*hidden argument*/NULL);
		NativeWebView_CallAsync_m970B8D6828E81CF30DE2829DE364D5CF05A68845(__this, L_13, (String_t*)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::ShowHtmlFile(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_ShowHtmlFile_m4164864CAB058EC03309DA3B308439F8A4B5B759 (NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB * __this, String_t* ___filePath0, Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * ___configuration1, GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * ___callback2, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___schemeList3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCallbackHandler_t0A61748AAD4518D616E864B7C6C1D8E26AC78017_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70B7395C88F8552F75F2CAE166CC33435A494E23);
		s_Il2CppMethodInitialized = true;
	}
	NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * V_0 = NULL;
	ShowWebView_t47B866BED20A6758D9DA52EDF8D22305A08ED1FA * V_1 = NULL;
	{
		// NativeMessage nativeMessage = new NativeMessage
		// {
		//     scheme = ApiScheme.SHOW_HTML_FILE,
		//     callback = NativeCallbackHandler.RegisterCallback(callback)
		// };
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_0 = (NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 *)il2cpp_codegen_object_new(NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_il2cpp_TypeInfo_var);
		NativeMessage__ctor_mE0EBF745BAF4E49DAB1099ED23D31358B282F9B7(L_0, /*hidden argument*/NULL);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_scheme_0(_stringLiteral70B7395C88F8552F75F2CAE166CC33435A494E23);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_2 = L_1;
		GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * L_3 = ___callback2;
		IL2CPP_RUNTIME_CLASS_INIT(NativeCallbackHandler_t0A61748AAD4518D616E864B7C6C1D8E26AC78017_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = NativeCallbackHandler_RegisterCallback_mC16F00CF14F9BABA00ABC94EE8C46D8044565AB8(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_callback_4(L_4);
		V_0 = L_2;
		// NativeRequest.ShowWebView showWebView = MakeShowWebView(filePath, configuration, schemeList);
		String_t* L_5 = ___filePath0;
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_6 = ___configuration1;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_7 = ___schemeList3;
		ShowWebView_t47B866BED20A6758D9DA52EDF8D22305A08ED1FA * L_8;
		L_8 = NativeWebView_MakeShowWebView_mDA41670F1CD6976FEEB0195564C700482C302B98(__this, L_5, L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// nativeMessage.data = JsonMapper.ToJson(showWebView);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_9 = V_0;
		ShowWebView_t47B866BED20A6758D9DA52EDF8D22305A08ED1FA * L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		String_t* L_11;
		L_11 = JsonMapper_ToJson_mDF7B2A648653470AB77D8CA567AD09F7D1F70B63(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		L_9->set_data_2(L_11);
		// CallAsync(JsonMapper.ToJson(nativeMessage), null);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_12 = V_0;
		String_t* L_13;
		L_13 = JsonMapper_ToJson_mDF7B2A648653470AB77D8CA567AD09F7D1F70B63(L_12, /*hidden argument*/NULL);
		NativeWebView_CallAsync_m970B8D6828E81CF30DE2829DE364D5CF05A68845(__this, L_13, (String_t*)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::ShowHtmlString(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_ShowHtmlString_mEF7EDE8FE07BDD0836B83CB3A5BDEEF95027416F (NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB * __this, String_t* ___htmlString0, Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * ___configuration1, GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * ___callback2, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___schemeList3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCallbackHandler_t0A61748AAD4518D616E864B7C6C1D8E26AC78017_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE782499A8125F334C5753700BDD39AD31E382E9);
		s_Il2CppMethodInitialized = true;
	}
	NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * V_0 = NULL;
	ShowWebView_t47B866BED20A6758D9DA52EDF8D22305A08ED1FA * V_1 = NULL;
	{
		// NativeMessage nativeMessage = new NativeMessage
		// {
		//     scheme = ApiScheme.SHOW_HTML_STRING,
		//     callback = NativeCallbackHandler.RegisterCallback(callback)
		// };
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_0 = (NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 *)il2cpp_codegen_object_new(NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_il2cpp_TypeInfo_var);
		NativeMessage__ctor_mE0EBF745BAF4E49DAB1099ED23D31358B282F9B7(L_0, /*hidden argument*/NULL);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_scheme_0(_stringLiteralCE782499A8125F334C5753700BDD39AD31E382E9);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_2 = L_1;
		GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * L_3 = ___callback2;
		IL2CPP_RUNTIME_CLASS_INIT(NativeCallbackHandler_t0A61748AAD4518D616E864B7C6C1D8E26AC78017_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = NativeCallbackHandler_RegisterCallback_mC16F00CF14F9BABA00ABC94EE8C46D8044565AB8(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_callback_4(L_4);
		V_0 = L_2;
		// NativeRequest.ShowWebView showWebView = MakeShowWebView(htmlString, configuration, schemeList);
		String_t* L_5 = ___htmlString0;
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_6 = ___configuration1;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_7 = ___schemeList3;
		ShowWebView_t47B866BED20A6758D9DA52EDF8D22305A08ED1FA * L_8;
		L_8 = NativeWebView_MakeShowWebView_mDA41670F1CD6976FEEB0195564C700482C302B98(__this, L_5, L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// nativeMessage.data = JsonMapper.ToJson(showWebView);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_9 = V_0;
		ShowWebView_t47B866BED20A6758D9DA52EDF8D22305A08ED1FA * L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		String_t* L_11;
		L_11 = JsonMapper_ToJson_mDF7B2A648653470AB77D8CA567AD09F7D1F70B63(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		L_9->set_data_2(L_11);
		// CallAsync(JsonMapper.ToJson(nativeMessage), null);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_12 = V_0;
		String_t* L_13;
		L_13 = JsonMapper_ToJson_mDF7B2A648653470AB77D8CA567AD09F7D1F70B63(L_12, /*hidden argument*/NULL);
		NativeWebView_CallAsync_m970B8D6828E81CF30DE2829DE364D5CF05A68845(__this, L_13, (String_t*)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::ShowSafeBrowsing(System.String,Gpm.WebView.GpmWebViewRequest/ConfigurationSafeBrowsing,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_ShowSafeBrowsing_m006C63D2DCACADF815325FFAB68DCD4B57155217 (NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB * __this, String_t* ___url0, ConfigurationSafeBrowsing_t1E8DF97EEABF137067881FFF0A185D5B9921C6F9 * ___configuration1, GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * ___callback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigurationSafeBrowsing_t94FB8E4680C3B6D1E293B895BA7F753BBAB0527D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCallbackHandler_t0A61748AAD4518D616E864B7C6C1D8E26AC78017_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShowSafeBrowsing_t711EFBB8AB7CCBC665A817A20F5347B285EF302F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1065F5D308E0AFAFE334CE09E95A7A2669A83F98);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral663488ABE057592166FC68C8A6EF26CBF9C8178E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA68DCEC5DF5C9D1BAB1EB121891A32269876B92);
		s_Il2CppMethodInitialized = true;
	}
	NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * V_0 = NULL;
	ShowSafeBrowsing_t711EFBB8AB7CCBC665A817A20F5347B285EF302F * V_1 = NULL;
	ConfigurationSafeBrowsing_t94FB8E4680C3B6D1E293B895BA7F753BBAB0527D * G_B2_0 = NULL;
	ConfigurationSafeBrowsing_t94FB8E4680C3B6D1E293B895BA7F753BBAB0527D * G_B2_1 = NULL;
	ShowSafeBrowsing_t711EFBB8AB7CCBC665A817A20F5347B285EF302F * G_B2_2 = NULL;
	ShowSafeBrowsing_t711EFBB8AB7CCBC665A817A20F5347B285EF302F * G_B2_3 = NULL;
	ConfigurationSafeBrowsing_t94FB8E4680C3B6D1E293B895BA7F753BBAB0527D * G_B1_0 = NULL;
	ConfigurationSafeBrowsing_t94FB8E4680C3B6D1E293B895BA7F753BBAB0527D * G_B1_1 = NULL;
	ShowSafeBrowsing_t711EFBB8AB7CCBC665A817A20F5347B285EF302F * G_B1_2 = NULL;
	ShowSafeBrowsing_t711EFBB8AB7CCBC665A817A20F5347B285EF302F * G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	ConfigurationSafeBrowsing_t94FB8E4680C3B6D1E293B895BA7F753BBAB0527D * G_B3_1 = NULL;
	ConfigurationSafeBrowsing_t94FB8E4680C3B6D1E293B895BA7F753BBAB0527D * G_B3_2 = NULL;
	ShowSafeBrowsing_t711EFBB8AB7CCBC665A817A20F5347B285EF302F * G_B3_3 = NULL;
	ShowSafeBrowsing_t711EFBB8AB7CCBC665A817A20F5347B285EF302F * G_B3_4 = NULL;
	ConfigurationSafeBrowsing_t94FB8E4680C3B6D1E293B895BA7F753BBAB0527D * G_B5_0 = NULL;
	ConfigurationSafeBrowsing_t94FB8E4680C3B6D1E293B895BA7F753BBAB0527D * G_B5_1 = NULL;
	ShowSafeBrowsing_t711EFBB8AB7CCBC665A817A20F5347B285EF302F * G_B5_2 = NULL;
	ShowSafeBrowsing_t711EFBB8AB7CCBC665A817A20F5347B285EF302F * G_B5_3 = NULL;
	ConfigurationSafeBrowsing_t94FB8E4680C3B6D1E293B895BA7F753BBAB0527D * G_B4_0 = NULL;
	ConfigurationSafeBrowsing_t94FB8E4680C3B6D1E293B895BA7F753BBAB0527D * G_B4_1 = NULL;
	ShowSafeBrowsing_t711EFBB8AB7CCBC665A817A20F5347B285EF302F * G_B4_2 = NULL;
	ShowSafeBrowsing_t711EFBB8AB7CCBC665A817A20F5347B285EF302F * G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	ConfigurationSafeBrowsing_t94FB8E4680C3B6D1E293B895BA7F753BBAB0527D * G_B6_1 = NULL;
	ConfigurationSafeBrowsing_t94FB8E4680C3B6D1E293B895BA7F753BBAB0527D * G_B6_2 = NULL;
	ShowSafeBrowsing_t711EFBB8AB7CCBC665A817A20F5347B285EF302F * G_B6_3 = NULL;
	ShowSafeBrowsing_t711EFBB8AB7CCBC665A817A20F5347B285EF302F * G_B6_4 = NULL;
	{
		// NativeMessage nativeMessage = new NativeMessage
		// {
		//     scheme = ApiScheme.SHOW_SAFE_BROWSING,
		//     callback = NativeCallbackHandler.RegisterCallback(callback)
		// };
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_0 = (NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 *)il2cpp_codegen_object_new(NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_il2cpp_TypeInfo_var);
		NativeMessage__ctor_mE0EBF745BAF4E49DAB1099ED23D31358B282F9B7(L_0, /*hidden argument*/NULL);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_scheme_0(_stringLiteral1065F5D308E0AFAFE334CE09E95A7A2669A83F98);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_2 = L_1;
		GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * L_3 = ___callback2;
		IL2CPP_RUNTIME_CLASS_INIT(NativeCallbackHandler_t0A61748AAD4518D616E864B7C6C1D8E26AC78017_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = NativeCallbackHandler_RegisterCallback_mC16F00CF14F9BABA00ABC94EE8C46D8044565AB8(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_callback_4(L_4);
		V_0 = L_2;
		// NativeRequest.ShowSafeBrowsing showSafeBrowsing = new NativeRequest.ShowSafeBrowsing
		// {
		//     url = url,
		//     configuration = new NativeRequest.ConfigurationSafeBrowsing()
		//     {
		//         navigationBarColor = (configuration == null) ? DEFAULT_NAVIGATION_BAR_COLOR : configuration.navigationBarColor,
		//         navigationTextColor = (configuration == null) ? DEFAULT_NAVIGATION_TEXT_COLOR : configuration.navigationTextColor
		//     }
		// };
		ShowSafeBrowsing_t711EFBB8AB7CCBC665A817A20F5347B285EF302F * L_5 = (ShowSafeBrowsing_t711EFBB8AB7CCBC665A817A20F5347B285EF302F *)il2cpp_codegen_object_new(ShowSafeBrowsing_t711EFBB8AB7CCBC665A817A20F5347B285EF302F_il2cpp_TypeInfo_var);
		ShowSafeBrowsing__ctor_m0BD616D660C45923996AD1FFE0F05EBD9A369408(L_5, /*hidden argument*/NULL);
		ShowSafeBrowsing_t711EFBB8AB7CCBC665A817A20F5347B285EF302F * L_6 = L_5;
		String_t* L_7 = ___url0;
		NullCheck(L_6);
		L_6->set_url_0(L_7);
		ShowSafeBrowsing_t711EFBB8AB7CCBC665A817A20F5347B285EF302F * L_8 = L_6;
		ConfigurationSafeBrowsing_t94FB8E4680C3B6D1E293B895BA7F753BBAB0527D * L_9 = (ConfigurationSafeBrowsing_t94FB8E4680C3B6D1E293B895BA7F753BBAB0527D *)il2cpp_codegen_object_new(ConfigurationSafeBrowsing_t94FB8E4680C3B6D1E293B895BA7F753BBAB0527D_il2cpp_TypeInfo_var);
		ConfigurationSafeBrowsing__ctor_mBEF49962D8F9BCD70F519649F5ABE8EA9EB229B9(L_9, /*hidden argument*/NULL);
		ConfigurationSafeBrowsing_t94FB8E4680C3B6D1E293B895BA7F753BBAB0527D * L_10 = L_9;
		ConfigurationSafeBrowsing_t1E8DF97EEABF137067881FFF0A185D5B9921C6F9 * L_11 = ___configuration1;
		G_B1_0 = L_10;
		G_B1_1 = L_10;
		G_B1_2 = L_8;
		G_B1_3 = L_8;
		if (!L_11)
		{
			G_B2_0 = L_10;
			G_B2_1 = L_10;
			G_B2_2 = L_8;
			G_B2_3 = L_8;
			goto IL_003b;
		}
	}
	{
		ConfigurationSafeBrowsing_t1E8DF97EEABF137067881FFF0A185D5B9921C6F9 * L_12 = ___configuration1;
		NullCheck(L_12);
		String_t* L_13 = L_12->get_navigationBarColor_0();
		G_B3_0 = L_13;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0040;
	}

IL_003b:
	{
		G_B3_0 = _stringLiteralEA68DCEC5DF5C9D1BAB1EB121891A32269876B92;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0040:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_navigationBarColor_0(G_B3_0);
		ConfigurationSafeBrowsing_t94FB8E4680C3B6D1E293B895BA7F753BBAB0527D * L_14 = G_B3_2;
		ConfigurationSafeBrowsing_t1E8DF97EEABF137067881FFF0A185D5B9921C6F9 * L_15 = ___configuration1;
		G_B4_0 = L_14;
		G_B4_1 = L_14;
		G_B4_2 = G_B3_3;
		G_B4_3 = G_B3_4;
		if (!L_15)
		{
			G_B5_0 = L_14;
			G_B5_1 = L_14;
			G_B5_2 = G_B3_3;
			G_B5_3 = G_B3_4;
			goto IL_0051;
		}
	}
	{
		ConfigurationSafeBrowsing_t1E8DF97EEABF137067881FFF0A185D5B9921C6F9 * L_16 = ___configuration1;
		NullCheck(L_16);
		String_t* L_17 = L_16->get_navigationTextColor_1();
		G_B6_0 = L_17;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_0056;
	}

IL_0051:
	{
		G_B6_0 = _stringLiteral663488ABE057592166FC68C8A6EF26CBF9C8178E;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_0056:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_navigationTextColor_1(G_B6_0);
		NullCheck(G_B6_3);
		G_B6_3->set_configuration_1(G_B6_2);
		V_1 = G_B6_4;
		// nativeMessage.data = JsonMapper.ToJson(showSafeBrowsing);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_18 = V_0;
		ShowSafeBrowsing_t711EFBB8AB7CCBC665A817A20F5347B285EF302F * L_19 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		String_t* L_20;
		L_20 = JsonMapper_ToJson_mDF7B2A648653470AB77D8CA567AD09F7D1F70B63(L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		L_18->set_data_2(L_20);
		// CallAsync(JsonMapper.ToJson(nativeMessage), null);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_21 = V_0;
		String_t* L_22;
		L_22 = JsonMapper_ToJson_mDF7B2A648653470AB77D8CA567AD09F7D1F70B63(L_21, /*hidden argument*/NULL);
		NativeWebView_CallAsync_m970B8D6828E81CF30DE2829DE364D5CF05A68845(__this, L_22, (String_t*)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_Close_m39FEF6D4A2A7A280959CF6705723366B051B40F7 (NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFED5871C0F55B10B28297D7D6F16B57A7B4C72A9);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// NativeMessage nativeMessage = new NativeMessage
		// {
		//     scheme = ApiScheme.CLOSE
		// };
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_0 = (NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 *)il2cpp_codegen_object_new(NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_il2cpp_TypeInfo_var);
		NativeMessage__ctor_mE0EBF745BAF4E49DAB1099ED23D31358B282F9B7(L_0, /*hidden argument*/NULL);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_scheme_0(_stringLiteralFED5871C0F55B10B28297D7D6F16B57A7B4C72A9);
		// string jsonData = JsonMapper.ToJson(nativeMessage);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = JsonMapper_ToJson_mDF7B2A648653470AB77D8CA567AD09F7D1F70B63(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// CallAsync(jsonData, null);
		String_t* L_3 = V_0;
		NativeWebView_CallAsync_m970B8D6828E81CF30DE2829DE364D5CF05A68845(__this, L_3, (String_t*)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Gpm.WebView.Internal.NativeWebView::IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeWebView_IsActive_mFEB1B7E3AEF535FB8F60E6FD64C3E3843C915DBA (NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD98E2640FCC4873264BAE9F62528D696400D87F);
		s_Il2CppMethodInitialized = true;
	}
	NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * V_0 = NULL;
	{
		// NativeMessage message = new NativeMessage()
		// {
		//     scheme = ApiScheme.IS_ACTIVE
		// };
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_0 = (NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 *)il2cpp_codegen_object_new(NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_il2cpp_TypeInfo_var);
		NativeMessage__ctor_mE0EBF745BAF4E49DAB1099ED23D31358B282F9B7(L_0, /*hidden argument*/NULL);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_scheme_0(_stringLiteralBD98E2640FCC4873264BAE9F62528D696400D87F);
		V_0 = L_1;
		// var resultMessage = CallSync(JsonMapper.ToJson(message), string.Empty);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonMapper_ToJson_mDF7B2A648653470AB77D8CA567AD09F7D1F70B63(L_2, /*hidden argument*/NULL);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * L_5;
		L_5 = NativeWebView_CallSync_m46D6737E1F2822EF186D7596CD89AEAA8B76C1BE(__this, L_3, L_4, /*hidden argument*/NULL);
		// return Convert.ToBoolean(resultMessage.data);
		NullCheck(L_5);
		String_t* L_6 = L_5->get_data_1();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Convert_ToBoolean_m9BE4DAAEA91C52F17A8A7101DABB32253925826B(L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::ExecuteJavaScript(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_ExecuteJavaScript_mF05BB2E04141BE5E9027776093DD9FE1571CC398 (NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB * __this, String_t* ___script0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteJavaScript_t149D2FB7BCB60A39444FC3DA705EB898DE46DE23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B8116384BF7900DF0AF76D78296BB5986E60B67);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// NativeMessage nativeMessage = new NativeMessage
		// {
		//     scheme = ApiScheme.EXECUTE_JAVASCRIPT
		// };
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_0 = (NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 *)il2cpp_codegen_object_new(NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_il2cpp_TypeInfo_var);
		NativeMessage__ctor_mE0EBF745BAF4E49DAB1099ED23D31358B282F9B7(L_0, /*hidden argument*/NULL);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_scheme_0(_stringLiteral2B8116384BF7900DF0AF76D78296BB5986E60B67);
		// nativeMessage.data = JsonMapper.ToJson(new NativeRequest.ExecuteJavaScript
		// {
		//     script = script
		// });
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_2 = L_1;
		ExecuteJavaScript_t149D2FB7BCB60A39444FC3DA705EB898DE46DE23 * L_3 = (ExecuteJavaScript_t149D2FB7BCB60A39444FC3DA705EB898DE46DE23 *)il2cpp_codegen_object_new(ExecuteJavaScript_t149D2FB7BCB60A39444FC3DA705EB898DE46DE23_il2cpp_TypeInfo_var);
		ExecuteJavaScript__ctor_m6020928E8422E5DF96C26BCFEAB510B78D6D682F(L_3, /*hidden argument*/NULL);
		ExecuteJavaScript_t149D2FB7BCB60A39444FC3DA705EB898DE46DE23 * L_4 = L_3;
		String_t* L_5 = ___script0;
		NullCheck(L_4);
		L_4->set_script_0(L_5);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = JsonMapper_ToJson_mDF7B2A648653470AB77D8CA567AD09F7D1F70B63(L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_data_2(L_6);
		// string jsonData = JsonMapper.ToJson(nativeMessage);
		String_t* L_7;
		L_7 = JsonMapper_ToJson_mDF7B2A648653470AB77D8CA567AD09F7D1F70B63(L_2, /*hidden argument*/NULL);
		V_0 = L_7;
		// CallAsync(jsonData, null);
		String_t* L_8 = V_0;
		NativeWebView_CallAsync_m970B8D6828E81CF30DE2829DE364D5CF05A68845(__this, L_8, (String_t*)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::SetFileDownloadPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_SetFileDownloadPath_m924A911DA1273B2858FDE068A21616DE8FD79B9C (NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB * __this, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E3C626060D5B82A6EA09D2EE983D7C449F4F249);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// NativeMessage nativeMessage = new NativeMessage
		// {
		//     scheme = ApiScheme.SET_FILE_DOWNLOAD_PATH
		// };
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_0 = (NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 *)il2cpp_codegen_object_new(NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_il2cpp_TypeInfo_var);
		NativeMessage__ctor_mE0EBF745BAF4E49DAB1099ED23D31358B282F9B7(L_0, /*hidden argument*/NULL);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_scheme_0(_stringLiteral4E3C626060D5B82A6EA09D2EE983D7C449F4F249);
		// string jsonData = JsonMapper.ToJson(nativeMessage);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = JsonMapper_ToJson_mDF7B2A648653470AB77D8CA567AD09F7D1F70B63(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// CallAsync(jsonData, null);
		String_t* L_3 = V_0;
		NativeWebView_CallAsync_m970B8D6828E81CF30DE2829DE364D5CF05A68845(__this, L_3, (String_t*)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Gpm.WebView.Internal.NativeRequest/ShowWebView Gpm.WebView.Internal.NativeWebView::MakeShowWebView(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShowWebView_t47B866BED20A6758D9DA52EDF8D22305A08ED1FA * NativeWebView_MakeShowWebView_mDA41670F1CD6976FEEB0195564C700482C302B98 (NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB * __this, String_t* ___data0, Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * ___configuration1, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___schemeList2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShowWebView_t47B866BED20A6758D9DA52EDF8D22305A08ED1FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_0 = NULL;
	{
		// List<string> schemeCommandList = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		V_0 = L_0;
		// if (configuration.customSchemePostCommand != null)
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_1 = ___configuration1;
		NullCheck(L_1);
		CustomSchemePostCommand_t25DC04BF3BCCC447F4AED01102F27DAC5B04561A * L_2 = L_1->get_customSchemePostCommand_14();
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// schemeCommandList = configuration.customSchemePostCommand.commandList;
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_3 = ___configuration1;
		NullCheck(L_3);
		CustomSchemePostCommand_t25DC04BF3BCCC447F4AED01102F27DAC5B04561A * L_4 = L_3->get_customSchemePostCommand_14();
		NullCheck(L_4);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_5 = L_4->get_commandList_0();
		V_0 = L_5;
	}

IL_001a:
	{
		// NativeRequest.ShowWebView showWebView = new NativeRequest.ShowWebView
		// {
		//     data = data,
		//     schemeList = schemeList,
		//     configuration = new NativeRequest.Configuration()
		//     {
		//         style = configuration.style,
		//         orientation = configuration.orientation,
		//         isClearCookie = configuration.isClearCookie,
		//         isClearCache = configuration.isClearCache,
		//         backgroundColor = configuration.backgroundColor,
		//         isNavigationBarVisible = configuration.isNavigationBarVisible,
		//         navigationBarColor = configuration.navigationBarColor,
		//         title = configuration.title,
		//         isBackButtonVisible = configuration.isBackButtonVisible,
		//         isForwardButtonVisible = configuration.isForwardButtonVisible,
		//         isCloseButtonVisible = configuration.isCloseButtonVisible,
		//         supportMultipleWindows = configuration.supportMultipleWindows,
		//         userAgentString = configuration.userAgentString,
		//         addJavascript = configuration.addJavascript,
		// 
		//         hasPosition = configuration.position.hasValue,
		//         positionX = configuration.position.x,
		//         positionY = configuration.position.y,
		//         hasSize = configuration.size.hasValue,
		//         sizeWidth = configuration.size.width,
		//         sizeHeight = configuration.size.height,
		//         hasMargins = configuration.margins.hasValue,
		//         marginsLeft = configuration.margins.left,
		//         marginsTop = configuration.margins.top,
		//         marginsRight = configuration.margins.right,
		//         marginsBottom = configuration.margins.bottom,
		// 
		//         isBackButtonCloseCallbackUsed = configuration.isBackButtonCloseCallbackUsed,
		// 
		//         contentMode = configuration.contentMode,
		//         isMaskViewVisible = configuration.isMaskViewVisible,
		//         isAutoRotation = configuration.isAutoRotation,
		// 
		//         schemeCommandList = schemeCommandList
		//     }
		// };
		ShowWebView_t47B866BED20A6758D9DA52EDF8D22305A08ED1FA * L_6 = (ShowWebView_t47B866BED20A6758D9DA52EDF8D22305A08ED1FA *)il2cpp_codegen_object_new(ShowWebView_t47B866BED20A6758D9DA52EDF8D22305A08ED1FA_il2cpp_TypeInfo_var);
		ShowWebView__ctor_mB9ED0E1E4A992DDC2B9853CD9457AAB3F49CAE7B(L_6, /*hidden argument*/NULL);
		ShowWebView_t47B866BED20A6758D9DA52EDF8D22305A08ED1FA * L_7 = L_6;
		String_t* L_8 = ___data0;
		NullCheck(L_7);
		L_7->set_data_0(L_8);
		ShowWebView_t47B866BED20A6758D9DA52EDF8D22305A08ED1FA * L_9 = L_7;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_10 = ___schemeList2;
		NullCheck(L_9);
		L_9->set_schemeList_2(L_10);
		ShowWebView_t47B866BED20A6758D9DA52EDF8D22305A08ED1FA * L_11 = L_9;
		Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8 * L_12 = (Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8 *)il2cpp_codegen_object_new(Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8_il2cpp_TypeInfo_var);
		Configuration__ctor_mA46EFD43B8603FF3B0C3630B4B3A257CED09820D(L_12, /*hidden argument*/NULL);
		Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8 * L_13 = L_12;
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_14 = ___configuration1;
		NullCheck(L_14);
		int32_t L_15 = L_14->get_style_0();
		NullCheck(L_13);
		L_13->set_style_0(L_15);
		Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8 * L_16 = L_13;
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_17 = ___configuration1;
		NullCheck(L_17);
		int32_t L_18 = L_17->get_orientation_1();
		NullCheck(L_16);
		L_16->set_orientation_1(L_18);
		Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8 * L_19 = L_16;
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_20 = ___configuration1;
		NullCheck(L_20);
		bool L_21 = L_20->get_isClearCookie_2();
		NullCheck(L_19);
		L_19->set_isClearCookie_2(L_21);
		Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8 * L_22 = L_19;
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_23 = ___configuration1;
		NullCheck(L_23);
		bool L_24 = L_23->get_isClearCache_3();
		NullCheck(L_22);
		L_22->set_isClearCache_3(L_24);
		Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8 * L_25 = L_22;
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_26 = ___configuration1;
		NullCheck(L_26);
		String_t* L_27 = L_26->get_backgroundColor_4();
		NullCheck(L_25);
		L_25->set_backgroundColor_4(L_27);
		Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8 * L_28 = L_25;
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_29 = ___configuration1;
		NullCheck(L_29);
		bool L_30 = L_29->get_isNavigationBarVisible_5();
		NullCheck(L_28);
		L_28->set_isNavigationBarVisible_5(L_30);
		Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8 * L_31 = L_28;
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_32 = ___configuration1;
		NullCheck(L_32);
		String_t* L_33 = L_32->get_navigationBarColor_6();
		NullCheck(L_31);
		L_31->set_navigationBarColor_6(L_33);
		Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8 * L_34 = L_31;
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_35 = ___configuration1;
		NullCheck(L_35);
		String_t* L_36 = L_35->get_title_7();
		NullCheck(L_34);
		L_34->set_title_7(L_36);
		Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8 * L_37 = L_34;
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_38 = ___configuration1;
		NullCheck(L_38);
		bool L_39 = L_38->get_isBackButtonVisible_8();
		NullCheck(L_37);
		L_37->set_isBackButtonVisible_8(L_39);
		Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8 * L_40 = L_37;
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_41 = ___configuration1;
		NullCheck(L_41);
		bool L_42 = L_41->get_isForwardButtonVisible_9();
		NullCheck(L_40);
		L_40->set_isForwardButtonVisible_9(L_42);
		Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8 * L_43 = L_40;
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_44 = ___configuration1;
		NullCheck(L_44);
		bool L_45 = L_44->get_isCloseButtonVisible_10();
		NullCheck(L_43);
		L_43->set_isCloseButtonVisible_10(L_45);
		Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8 * L_46 = L_43;
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_47 = ___configuration1;
		NullCheck(L_47);
		bool L_48 = L_47->get_supportMultipleWindows_11();
		NullCheck(L_46);
		L_46->set_supportMultipleWindows_11(L_48);
		Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8 * L_49 = L_46;
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_50 = ___configuration1;
		NullCheck(L_50);
		String_t* L_51 = L_50->get_userAgentString_12();
		NullCheck(L_49);
		L_49->set_userAgentString_12(L_51);
		Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8 * L_52 = L_49;
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_53 = ___configuration1;
		NullCheck(L_53);
		String_t* L_54 = L_53->get_addJavascript_13();
		NullCheck(L_52);
		L_52->set_addJavascript_13(L_54);
		Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8 * L_55 = L_52;
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_56 = ___configuration1;
		NullCheck(L_56);
		Position_tE389F0309F8DE9F2BB96E471C81D09AE285E0701 * L_57 = L_56->get_address_of_position_15();
		bool L_58 = L_57->get_hasValue_0();
		NullCheck(L_55);
		L_55->set_hasPosition_14(L_58);
		Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8 * L_59 = L_55;
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_60 = ___configuration1;
		NullCheck(L_60);
		Position_tE389F0309F8DE9F2BB96E471C81D09AE285E0701 * L_61 = L_60->get_address_of_position_15();
		int32_t L_62 = L_61->get_x_1();
		NullCheck(L_59);
		L_59->set_positionX_15(L_62);
		Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8 * L_63 = L_59;
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_64 = ___configuration1;
		NullCheck(L_64);
		Position_tE389F0309F8DE9F2BB96E471C81D09AE285E0701 * L_65 = L_64->get_address_of_position_15();
		int32_t L_66 = L_65->get_y_2();
		NullCheck(L_63);
		L_63->set_positionY_16(L_66);
		Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8 * L_67 = L_63;
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_68 = ___configuration1;
		NullCheck(L_68);
		Size_t92BB328622E7C6869FBF329D08E72EE0D18C8751 * L_69 = L_68->get_address_of_size_16();
		bool L_70 = L_69->get_hasValue_0();
		NullCheck(L_67);
		L_67->set_hasSize_17(L_70);
		Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8 * L_71 = L_67;
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_72 = ___configuration1;
		NullCheck(L_72);
		Size_t92BB328622E7C6869FBF329D08E72EE0D18C8751 * L_73 = L_72->get_address_of_size_16();
		int32_t L_74 = L_73->get_width_1();
		NullCheck(L_71);
		L_71->set_sizeWidth_18(L_74);
		Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8 * L_75 = L_71;
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_76 = ___configuration1;
		NullCheck(L_76);
		Size_t92BB328622E7C6869FBF329D08E72EE0D18C8751 * L_77 = L_76->get_address_of_size_16();
		int32_t L_78 = L_77->get_height_2();
		NullCheck(L_75);
		L_75->set_sizeHeight_19(L_78);
		Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8 * L_79 = L_75;
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_80 = ___configuration1;
		NullCheck(L_80);
		Margins_tE71166091954A97FE414FCDA43759AAC56D9688F * L_81 = L_80->get_address_of_margins_17();
		bool L_82 = L_81->get_hasValue_0();
		NullCheck(L_79);
		L_79->set_hasMargins_20(L_82);
		Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8 * L_83 = L_79;
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_84 = ___configuration1;
		NullCheck(L_84);
		Margins_tE71166091954A97FE414FCDA43759AAC56D9688F * L_85 = L_84->get_address_of_margins_17();
		int32_t L_86 = L_85->get_left_1();
		NullCheck(L_83);
		L_83->set_marginsLeft_21(L_86);
		Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8 * L_87 = L_83;
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_88 = ___configuration1;
		NullCheck(L_88);
		Margins_tE71166091954A97FE414FCDA43759AAC56D9688F * L_89 = L_88->get_address_of_margins_17();
		int32_t L_90 = L_89->get_top_2();
		NullCheck(L_87);
		L_87->set_marginsTop_22(L_90);
		Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8 * L_91 = L_87;
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_92 = ___configuration1;
		NullCheck(L_92);
		Margins_tE71166091954A97FE414FCDA43759AAC56D9688F * L_93 = L_92->get_address_of_margins_17();
		int32_t L_94 = L_93->get_right_3();
		NullCheck(L_91);
		L_91->set_marginsRight_23(L_94);
		Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8 * L_95 = L_91;
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_96 = ___configuration1;
		NullCheck(L_96);
		Margins_tE71166091954A97FE414FCDA43759AAC56D9688F * L_97 = L_96->get_address_of_margins_17();
		int32_t L_98 = L_97->get_bottom_4();
		NullCheck(L_95);
		L_95->set_marginsBottom_24(L_98);
		Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8 * L_99 = L_95;
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_100 = ___configuration1;
		NullCheck(L_100);
		bool L_101 = L_100->get_isBackButtonCloseCallbackUsed_18();
		NullCheck(L_99);
		L_99->set_isBackButtonCloseCallbackUsed_25(L_101);
		Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8 * L_102 = L_99;
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_103 = ___configuration1;
		NullCheck(L_103);
		int32_t L_104 = L_103->get_contentMode_19();
		NullCheck(L_102);
		L_102->set_contentMode_26(L_104);
		Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8 * L_105 = L_102;
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_106 = ___configuration1;
		NullCheck(L_106);
		bool L_107 = L_106->get_isMaskViewVisible_20();
		NullCheck(L_105);
		L_105->set_isMaskViewVisible_27(L_107);
		Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8 * L_108 = L_105;
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_109 = ___configuration1;
		NullCheck(L_109);
		bool L_110 = L_109->get_isAutoRotation_21();
		NullCheck(L_108);
		L_108->set_isAutoRotation_28(L_110);
		Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8 * L_111 = L_108;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_112 = V_0;
		NullCheck(L_111);
		L_111->set_schemeCommandList_29(L_112);
		NullCheck(L_11);
		L_11->set_configuration_1(L_111);
		// CheckAutoRotation();
		NativeWebView_CheckAutoRotation_m68EA8FF743246FFC3E84C110460EF89118EB6099(__this, /*hidden argument*/NULL);
		// return showWebView;
		return L_11;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::CallAsync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_CallAsync_m970B8D6828E81CF30DE2829DE364D5CF05A68845 (NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB * __this, String_t* ___data0, String_t* ___extra1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral981BC9EBC76493CC8A6BEEC0CEF767E026141833);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GpmCommunicatorVO.Message message = new GpmCommunicatorVO.Message()
		// {
		//     domain = DOMAIN,
		//     data = data,
		//     extra = extra
		// };
		Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * L_0 = (Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 *)il2cpp_codegen_object_new(Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701_il2cpp_TypeInfo_var);
		Message__ctor_m2F297093425B23BCD6B38A094E078D63DD288F65(L_0, /*hidden argument*/NULL);
		Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_domain_0(_stringLiteral981BC9EBC76493CC8A6BEEC0CEF767E026141833);
		Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * L_2 = L_1;
		String_t* L_3 = ___data0;
		NullCheck(L_2);
		L_2->set_data_1(L_3);
		Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * L_4 = L_2;
		String_t* L_5 = ___extra1;
		NullCheck(L_4);
		L_4->set_extra_2(L_5);
		// GpmCommunicator.CallAsync(message);
		GpmCommunicator_CallAsync_m0324145DE836CF29B71524C546F751ED0DA9D0E0(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Gpm.Communicator.GpmCommunicatorVO/Message Gpm.WebView.Internal.NativeWebView::CallSync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * NativeWebView_CallSync_m46D6737E1F2822EF186D7596CD89AEAA8B76C1BE (NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB * __this, String_t* ___data0, String_t* ___extra1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral981BC9EBC76493CC8A6BEEC0CEF767E026141833);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GpmCommunicatorVO.Message message = new GpmCommunicatorVO.Message()
		// {
		//     domain = DOMAIN,
		//     data = data,
		//     extra = extra
		// };
		Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * L_0 = (Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 *)il2cpp_codegen_object_new(Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701_il2cpp_TypeInfo_var);
		Message__ctor_m2F297093425B23BCD6B38A094E078D63DD288F65(L_0, /*hidden argument*/NULL);
		Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_domain_0(_stringLiteral981BC9EBC76493CC8A6BEEC0CEF767E026141833);
		Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * L_2 = L_1;
		String_t* L_3 = ___data0;
		NullCheck(L_2);
		L_2->set_data_1(L_3);
		Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * L_4 = L_2;
		String_t* L_5 = ___extra1;
		NullCheck(L_4);
		L_4->set_extra_2(L_5);
		// return GpmCommunicator.CallSync(message);
		Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * L_6;
		L_6 = GpmCommunicator_CallSync_m1DEE9E29AE0FF3F030F54EE10E518FA4CD23CDD6(L_4, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::OnAsyncEvent(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_OnAsyncEvent_m48B394F63348988949D0D6F619CC6951F5EC63CB (NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB * __this, Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_ToObject_TisNativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_mAF5A886193F504741023DD1FB533B2518B340C59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5275D367BE340B201FADFB2D43BEE76A579C9BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD276C42E9A5561AAE86E99C7DEC52DEAD68ED18);
		s_Il2CppMethodInitialized = true;
	}
	NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * V_0 = NULL;
	{
		// Debug.Log("OnAsyncEvent : " + message.data);
		Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * L_0 = ___message0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_data_1();
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralFD276C42E9A5561AAE86E99C7DEC52DEAD68ED18, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_2, /*hidden argument*/NULL);
		// NativeMessage nativeMessage = JsonMapper.ToObject<NativeMessage>(message.data);
		Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * L_3 = ___message0;
		NullCheck(L_3);
		String_t* L_4 = L_3->get_data_1();
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_5;
		L_5 = JsonMapper_ToObject_TisNativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_mAF5A886193F504741023DD1FB533B2518B340C59(L_4, /*hidden argument*/JsonMapper_ToObject_TisNativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_mAF5A886193F504741023DD1FB533B2518B340C59_RuntimeMethod_var);
		V_0 = L_5;
		// if (nativeMessage == null)
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_6 = V_0;
		if (L_6)
		{
			goto IL_0025;
		}
	}
	{
		// return;
		return;
	}

IL_0025:
	{
		// if (nativeMessage.scheme == CallbackScheme.WEBVIEW_CALLBACK)
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = L_7->get_scheme_0();
		bool L_9;
		L_9 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_8, _stringLiteralA5275D367BE340B201FADFB2D43BEE76A579C9BA, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		// OnWebViewCallback(nativeMessage);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_10 = V_0;
		NativeWebView_OnWebViewCallback_m7D796BF7F35D37C1983681B014CFFDAAD2D3BD34(__this, L_10, /*hidden argument*/NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::OnWebViewCallback(Gpm.WebView.Internal.NativeMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_OnWebViewCallback_m7D796BF7F35D37C1983681B014CFFDAAD2D3BD34 (NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB * __this, NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * ___nativeMessage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_ToObject_TisGpmWebViewError_tBDC438A993BE136762458A7B80E9FC35C32F8C21_mE7D68030B931626E14554AE2B4E54530894571C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCallbackHandler_GetCallback_TisGpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526_m7C73C3CA6D5F45525B51618971223B7A0A124F72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCallbackHandler_t0A61748AAD4518D616E864B7C6C1D8E26AC78017_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * V_0 = NULL;
	GpmWebViewError_tBDC438A993BE136762458A7B80E9FC35C32F8C21 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		// var callback = NativeCallbackHandler.GetCallback<GpmWebViewCallback.GpmWebViewDelegate>(nativeMessage.callback);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_0 = ___nativeMessage0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_callback_4();
		IL2CPP_RUNTIME_CLASS_INIT(NativeCallbackHandler_t0A61748AAD4518D616E864B7C6C1D8E26AC78017_il2cpp_TypeInfo_var);
		GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * L_2;
		L_2 = NativeCallbackHandler_GetCallback_TisGpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526_m7C73C3CA6D5F45525B51618971223B7A0A124F72(L_1, /*hidden argument*/NativeCallbackHandler_GetCallback_TisGpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526_m7C73C3CA6D5F45525B51618971223B7A0A124F72_RuntimeMethod_var);
		V_0 = L_2;
		// if (callback != null)
		GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0054;
		}
	}
	{
		// GpmWebViewError error = null;
		V_1 = (GpmWebViewError_tBDC438A993BE136762458A7B80E9FC35C32F8C21 *)NULL;
		// if (string.IsNullOrEmpty(nativeMessage.error) == false)
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_4 = ___nativeMessage0;
		NullCheck(L_4);
		String_t* L_5 = L_4->get_error_1();
		bool L_6;
		L_6 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_002a;
		}
	}
	{
		// error = JsonMapper.ToObject<GpmWebViewError>(nativeMessage.error);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_7 = ___nativeMessage0;
		NullCheck(L_7);
		String_t* L_8 = L_7->get_error_1();
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		GpmWebViewError_tBDC438A993BE136762458A7B80E9FC35C32F8C21 * L_9;
		L_9 = JsonMapper_ToObject_TisGpmWebViewError_tBDC438A993BE136762458A7B80E9FC35C32F8C21_mE7D68030B931626E14554AE2B4E54530894571C1(L_8, /*hidden argument*/JsonMapper_ToObject_TisGpmWebViewError_tBDC438A993BE136762458A7B80E9FC35C32F8C21_mE7D68030B931626E14554AE2B4E54530894571C1_RuntimeMethod_var);
		V_1 = L_9;
	}

IL_002a:
	{
		// GpmWebViewCallback.CallbackType callbackType = (GpmWebViewCallback.CallbackType)nativeMessage.callbackType;
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_10 = ___nativeMessage0;
		NullCheck(L_10);
		int32_t L_11 = L_10->get_callbackType_5();
		V_2 = L_11;
		// if (callbackType == GpmWebViewCallback.CallbackType.Close)
		int32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0046;
		}
	}
	{
		// NativeCallbackHandler.UnregisterCallback(nativeMessage.callback);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_13 = ___nativeMessage0;
		NullCheck(L_13);
		int32_t L_14 = L_13->get_callback_4();
		IL2CPP_RUNTIME_CLASS_INIT(NativeCallbackHandler_t0A61748AAD4518D616E864B7C6C1D8E26AC78017_il2cpp_TypeInfo_var);
		NativeCallbackHandler_UnregisterCallback_m5A88F676B0F5A74F40AE711FA2469E2BF4889C85(L_14, /*hidden argument*/NULL);
		// RestoreOrientation();
		NativeWebView_RestoreOrientation_mAFBED114D5A6CA8A551577E576BB4C597F4B3A34(__this, /*hidden argument*/NULL);
	}

IL_0046:
	{
		// callback(callbackType, nativeMessage.data, error);
		GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * L_15 = V_0;
		int32_t L_16 = V_2;
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_17 = ___nativeMessage0;
		NullCheck(L_17);
		String_t* L_18 = L_17->get_data_2();
		GpmWebViewError_tBDC438A993BE136762458A7B80E9FC35C32F8C21 * L_19 = V_1;
		NullCheck(L_15);
		GpmWebViewDelegate_Invoke_m6A2C3F1D6A617E1CD749B7436B1F2A17D5400928(L_15, L_16, L_18, L_19, /*hidden argument*/NULL);
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::GoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_GoBack_mB3C5664CA9FF849285BD629EA8F7A7DFFC5C1381 (NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84445DED3F38F40E166E8658E59ED855104487FA);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// NativeMessage nativeMessage = new NativeMessage
		// {
		//     scheme = ApiScheme.GO_BACK
		// };
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_0 = (NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 *)il2cpp_codegen_object_new(NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_il2cpp_TypeInfo_var);
		NativeMessage__ctor_mE0EBF745BAF4E49DAB1099ED23D31358B282F9B7(L_0, /*hidden argument*/NULL);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_scheme_0(_stringLiteral84445DED3F38F40E166E8658E59ED855104487FA);
		// string jsonData = JsonMapper.ToJson(nativeMessage);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = JsonMapper_ToJson_mDF7B2A648653470AB77D8CA567AD09F7D1F70B63(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// CallAsync(jsonData, null);
		String_t* L_3 = V_0;
		NativeWebView_CallAsync_m970B8D6828E81CF30DE2829DE364D5CF05A68845(__this, L_3, (String_t*)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::GoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_GoForward_m70038C26B49CC065C9F4D070F1B8C5E6901E0CF6 (NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC5B4F97E6B0EEC7B605538C44266B526CCA0ACE);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// NativeMessage nativeMessage = new NativeMessage
		// {
		//     scheme = ApiScheme.GO_FORWARD
		// };
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_0 = (NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 *)il2cpp_codegen_object_new(NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_il2cpp_TypeInfo_var);
		NativeMessage__ctor_mE0EBF745BAF4E49DAB1099ED23D31358B282F9B7(L_0, /*hidden argument*/NULL);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_scheme_0(_stringLiteralBC5B4F97E6B0EEC7B605538C44266B526CCA0ACE);
		// string jsonData = JsonMapper.ToJson(nativeMessage);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = JsonMapper_ToJson_mDF7B2A648653470AB77D8CA567AD09F7D1F70B63(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// CallAsync(jsonData, null);
		String_t* L_3 = V_0;
		NativeWebView_CallAsync_m970B8D6828E81CF30DE2829DE364D5CF05A68845(__this, L_3, (String_t*)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::SetPosition(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_SetPosition_m3FBF777358CCC0D6E15EE05425B5A5C06432D9C3 (NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Position_t99CED3006BAD63E73FD1E85EE78BE4936CADBD70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral437495827EE2F417C6EF6D171D77428822A383BC);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// NativeMessage nativeMessage = new NativeMessage
		// {
		//     scheme = ApiScheme.SET_POSITION
		// };
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_0 = (NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 *)il2cpp_codegen_object_new(NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_il2cpp_TypeInfo_var);
		NativeMessage__ctor_mE0EBF745BAF4E49DAB1099ED23D31358B282F9B7(L_0, /*hidden argument*/NULL);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_scheme_0(_stringLiteral437495827EE2F417C6EF6D171D77428822A383BC);
		// nativeMessage.data = JsonMapper.ToJson(new NativeRequest.Position
		// {
		//     x = x,
		//     y = y
		// });
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_2 = L_1;
		Position_t99CED3006BAD63E73FD1E85EE78BE4936CADBD70 * L_3 = (Position_t99CED3006BAD63E73FD1E85EE78BE4936CADBD70 *)il2cpp_codegen_object_new(Position_t99CED3006BAD63E73FD1E85EE78BE4936CADBD70_il2cpp_TypeInfo_var);
		Position__ctor_mEF441CE1DA7A405B444BDCF364280B9CAE677EF0(L_3, /*hidden argument*/NULL);
		Position_t99CED3006BAD63E73FD1E85EE78BE4936CADBD70 * L_4 = L_3;
		int32_t L_5 = ___x0;
		NullCheck(L_4);
		L_4->set_x_0(L_5);
		Position_t99CED3006BAD63E73FD1E85EE78BE4936CADBD70 * L_6 = L_4;
		int32_t L_7 = ___y1;
		NullCheck(L_6);
		L_6->set_y_1(L_7);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		String_t* L_8;
		L_8 = JsonMapper_ToJson_mDF7B2A648653470AB77D8CA567AD09F7D1F70B63(L_6, /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_data_2(L_8);
		// string jsonData = JsonMapper.ToJson(nativeMessage);
		String_t* L_9;
		L_9 = JsonMapper_ToJson_mDF7B2A648653470AB77D8CA567AD09F7D1F70B63(L_2, /*hidden argument*/NULL);
		V_0 = L_9;
		// CallAsync(jsonData, null);
		String_t* L_10 = V_0;
		NativeWebView_CallAsync_m970B8D6828E81CF30DE2829DE364D5CF05A68845(__this, L_10, (String_t*)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::SetSize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_SetSize_mBC2F1EB31D4AF515B393EED7FB41B87A4FFC8AE0 (NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Size_tD84EC7BBB992369C9A0CC7D80AD0268F3ED54D12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA332264C9D57E5DC8F42C16E8FDF8EC8C769CAC1);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// NativeMessage nativeMessage = new NativeMessage
		// {
		//     scheme = ApiScheme.SET_SIZE
		// };
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_0 = (NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 *)il2cpp_codegen_object_new(NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_il2cpp_TypeInfo_var);
		NativeMessage__ctor_mE0EBF745BAF4E49DAB1099ED23D31358B282F9B7(L_0, /*hidden argument*/NULL);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_scheme_0(_stringLiteralA332264C9D57E5DC8F42C16E8FDF8EC8C769CAC1);
		// nativeMessage.data = JsonMapper.ToJson(new NativeRequest.Size
		// {
		//     width = width,
		//     height = height
		// });
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_2 = L_1;
		Size_tD84EC7BBB992369C9A0CC7D80AD0268F3ED54D12 * L_3 = (Size_tD84EC7BBB992369C9A0CC7D80AD0268F3ED54D12 *)il2cpp_codegen_object_new(Size_tD84EC7BBB992369C9A0CC7D80AD0268F3ED54D12_il2cpp_TypeInfo_var);
		Size__ctor_mE82F69DE3E0E133870FCFB38FCFCA0E3165D8996(L_3, /*hidden argument*/NULL);
		Size_tD84EC7BBB992369C9A0CC7D80AD0268F3ED54D12 * L_4 = L_3;
		int32_t L_5 = ___width0;
		NullCheck(L_4);
		L_4->set_width_0(L_5);
		Size_tD84EC7BBB992369C9A0CC7D80AD0268F3ED54D12 * L_6 = L_4;
		int32_t L_7 = ___height1;
		NullCheck(L_6);
		L_6->set_height_1(L_7);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		String_t* L_8;
		L_8 = JsonMapper_ToJson_mDF7B2A648653470AB77D8CA567AD09F7D1F70B63(L_6, /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_data_2(L_8);
		// string jsonData = JsonMapper.ToJson(nativeMessage);
		String_t* L_9;
		L_9 = JsonMapper_ToJson_mDF7B2A648653470AB77D8CA567AD09F7D1F70B63(L_2, /*hidden argument*/NULL);
		V_0 = L_9;
		// CallAsync(jsonData, null);
		String_t* L_10 = V_0;
		NativeWebView_CallAsync_m970B8D6828E81CF30DE2829DE364D5CF05A68845(__this, L_10, (String_t*)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::SetMargins(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_SetMargins_m3F204F46C9D0D45B9D00A74EE0D782D87104DE6F (NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB * __this, int32_t ___left0, int32_t ___top1, int32_t ___right2, int32_t ___bottom3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Margins_tD3B287C5998931DED6C19FD0EA7533D529ABC4D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral252117B4E8431D0FCC2658F426AFAD0AEB5F4D04);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// NativeMessage nativeMessage = new NativeMessage
		// {
		//     scheme = ApiScheme.SET_MARGINS
		// };
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_0 = (NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 *)il2cpp_codegen_object_new(NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_il2cpp_TypeInfo_var);
		NativeMessage__ctor_mE0EBF745BAF4E49DAB1099ED23D31358B282F9B7(L_0, /*hidden argument*/NULL);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_scheme_0(_stringLiteral252117B4E8431D0FCC2658F426AFAD0AEB5F4D04);
		// nativeMessage.data = JsonMapper.ToJson(new NativeRequest.Margins
		// {
		//     left = left,
		//     top = top,
		//     right = right,
		//     bottom = bottom
		// });
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_2 = L_1;
		Margins_tD3B287C5998931DED6C19FD0EA7533D529ABC4D7 * L_3 = (Margins_tD3B287C5998931DED6C19FD0EA7533D529ABC4D7 *)il2cpp_codegen_object_new(Margins_tD3B287C5998931DED6C19FD0EA7533D529ABC4D7_il2cpp_TypeInfo_var);
		Margins__ctor_mBD7A5088EF666E07B0CE4EABA6C67DAF2B974303(L_3, /*hidden argument*/NULL);
		Margins_tD3B287C5998931DED6C19FD0EA7533D529ABC4D7 * L_4 = L_3;
		int32_t L_5 = ___left0;
		NullCheck(L_4);
		L_4->set_left_0(L_5);
		Margins_tD3B287C5998931DED6C19FD0EA7533D529ABC4D7 * L_6 = L_4;
		int32_t L_7 = ___top1;
		NullCheck(L_6);
		L_6->set_top_1(L_7);
		Margins_tD3B287C5998931DED6C19FD0EA7533D529ABC4D7 * L_8 = L_6;
		int32_t L_9 = ___right2;
		NullCheck(L_8);
		L_8->set_right_2(L_9);
		Margins_tD3B287C5998931DED6C19FD0EA7533D529ABC4D7 * L_10 = L_8;
		int32_t L_11 = ___bottom3;
		NullCheck(L_10);
		L_10->set_bottom_3(L_11);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		String_t* L_12;
		L_12 = JsonMapper_ToJson_mDF7B2A648653470AB77D8CA567AD09F7D1F70B63(L_10, /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_data_2(L_12);
		// string jsonData = JsonMapper.ToJson(nativeMessage);
		String_t* L_13;
		L_13 = JsonMapper_ToJson_mDF7B2A648653470AB77D8CA567AD09F7D1F70B63(L_2, /*hidden argument*/NULL);
		V_0 = L_13;
		// CallAsync(jsonData, null);
		String_t* L_14 = V_0;
		NativeWebView_CallAsync_m970B8D6828E81CF30DE2829DE364D5CF05A68845(__this, L_14, (String_t*)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 Gpm.WebView.Internal.NativeWebView::GetX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeWebView_GetX_mB580F01A97FCD4CA3C4B4CE9377D4A99A4BC23A3 (NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral875EA38258012EC0814C5E1E233E2AE18EF8F40F);
		s_Il2CppMethodInitialized = true;
	}
	NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * V_0 = NULL;
	{
		// NativeMessage message = new NativeMessage()
		// {
		//     scheme = ApiScheme.GET_X
		// };
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_0 = (NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 *)il2cpp_codegen_object_new(NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_il2cpp_TypeInfo_var);
		NativeMessage__ctor_mE0EBF745BAF4E49DAB1099ED23D31358B282F9B7(L_0, /*hidden argument*/NULL);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_scheme_0(_stringLiteral875EA38258012EC0814C5E1E233E2AE18EF8F40F);
		V_0 = L_1;
		// var resultMessage = CallSync(JsonMapper.ToJson(message), string.Empty);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonMapper_ToJson_mDF7B2A648653470AB77D8CA567AD09F7D1F70B63(L_2, /*hidden argument*/NULL);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * L_5;
		L_5 = NativeWebView_CallSync_m46D6737E1F2822EF186D7596CD89AEAA8B76C1BE(__this, L_3, L_4, /*hidden argument*/NULL);
		// return Convert.ToInt32(resultMessage.data);
		NullCheck(L_5);
		String_t* L_6 = L_5->get_data_1();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Convert_ToInt32_mA1C10AB2A7C95E9DCAC473D1D88C74D60FA240ED(L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Int32 Gpm.WebView.Internal.NativeWebView::GetY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeWebView_GetY_mEAFA7D93F2F5E5158B1382556DCEB8AF55609B84 (NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DF4E5E91BB385BD19147E061A8A343416B56593);
		s_Il2CppMethodInitialized = true;
	}
	NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * V_0 = NULL;
	{
		// NativeMessage message = new NativeMessage()
		// {
		//     scheme = ApiScheme.GET_Y
		// };
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_0 = (NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 *)il2cpp_codegen_object_new(NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_il2cpp_TypeInfo_var);
		NativeMessage__ctor_mE0EBF745BAF4E49DAB1099ED23D31358B282F9B7(L_0, /*hidden argument*/NULL);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_scheme_0(_stringLiteral0DF4E5E91BB385BD19147E061A8A343416B56593);
		V_0 = L_1;
		// var resultMessage = CallSync(JsonMapper.ToJson(message), string.Empty);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonMapper_ToJson_mDF7B2A648653470AB77D8CA567AD09F7D1F70B63(L_2, /*hidden argument*/NULL);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * L_5;
		L_5 = NativeWebView_CallSync_m46D6737E1F2822EF186D7596CD89AEAA8B76C1BE(__this, L_3, L_4, /*hidden argument*/NULL);
		// return Convert.ToInt32(resultMessage.data);
		NullCheck(L_5);
		String_t* L_6 = L_5->get_data_1();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Convert_ToInt32_mA1C10AB2A7C95E9DCAC473D1D88C74D60FA240ED(L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Int32 Gpm.WebView.Internal.NativeWebView::GetWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeWebView_GetWidth_m2C219372219A1395040163CA6D6027A339361086 (NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7071697C1E72CB5E80E775D7964F46C9AB875732);
		s_Il2CppMethodInitialized = true;
	}
	NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * V_0 = NULL;
	{
		// NativeMessage message = new NativeMessage()
		// {
		//     scheme = ApiScheme.GET_WIDTH
		// };
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_0 = (NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 *)il2cpp_codegen_object_new(NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_il2cpp_TypeInfo_var);
		NativeMessage__ctor_mE0EBF745BAF4E49DAB1099ED23D31358B282F9B7(L_0, /*hidden argument*/NULL);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_scheme_0(_stringLiteral7071697C1E72CB5E80E775D7964F46C9AB875732);
		V_0 = L_1;
		// var resultMessage = CallSync(JsonMapper.ToJson(message), string.Empty);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonMapper_ToJson_mDF7B2A648653470AB77D8CA567AD09F7D1F70B63(L_2, /*hidden argument*/NULL);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * L_5;
		L_5 = NativeWebView_CallSync_m46D6737E1F2822EF186D7596CD89AEAA8B76C1BE(__this, L_3, L_4, /*hidden argument*/NULL);
		// return Convert.ToInt32(resultMessage.data);
		NullCheck(L_5);
		String_t* L_6 = L_5->get_data_1();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Convert_ToInt32_mA1C10AB2A7C95E9DCAC473D1D88C74D60FA240ED(L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Int32 Gpm.WebView.Internal.NativeWebView::GetHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeWebView_GetHeight_mE04356177D0C6D5AA7A280E594D381FA90BD4B98 (NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48033893DB25402A6F3FBD3544D34AB02C25E0EF);
		s_Il2CppMethodInitialized = true;
	}
	NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * V_0 = NULL;
	{
		// NativeMessage message = new NativeMessage()
		// {
		//     scheme = ApiScheme.GET_HEIGHT
		// };
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_0 = (NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 *)il2cpp_codegen_object_new(NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_il2cpp_TypeInfo_var);
		NativeMessage__ctor_mE0EBF745BAF4E49DAB1099ED23D31358B282F9B7(L_0, /*hidden argument*/NULL);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_scheme_0(_stringLiteral48033893DB25402A6F3FBD3544D34AB02C25E0EF);
		V_0 = L_1;
		// var resultMessage = CallSync(JsonMapper.ToJson(message), string.Empty);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonMapper_ToJson_mDF7B2A648653470AB77D8CA567AD09F7D1F70B63(L_2, /*hidden argument*/NULL);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * L_5;
		L_5 = NativeWebView_CallSync_m46D6737E1F2822EF186D7596CD89AEAA8B76C1BE(__this, L_3, L_4, /*hidden argument*/NULL);
		// return Convert.ToInt32(resultMessage.data);
		NullCheck(L_5);
		String_t* L_6 = L_5->get_data_1();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Convert_ToInt32_mA1C10AB2A7C95E9DCAC473D1D88C74D60FA240ED(L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::CheckAutoRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_CheckAutoRotation_m68EA8FF743246FFC3E84C110460EF89118EB6099 (NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB * __this, const RuntimeMethod* method)
{
	{
		// isAutorotateToPortrait = Screen.autorotateToPortrait;
		bool L_0;
		L_0 = Screen_get_autorotateToPortrait_m701B4ECBF07472A35470C71610270653E4B08138(/*hidden argument*/NULL);
		__this->set_isAutorotateToPortrait_5(L_0);
		// isAutorotateToPortraitUpsideDown = Screen.autorotateToPortraitUpsideDown;
		bool L_1;
		L_1 = Screen_get_autorotateToPortraitUpsideDown_m01523BFE802F07642427E4C87DD03257081209FB(/*hidden argument*/NULL);
		__this->set_isAutorotateToPortraitUpsideDown_6(L_1);
		// isAutorotateToLandscapeLeft = Screen.autorotateToLandscapeLeft;
		bool L_2;
		L_2 = Screen_get_autorotateToLandscapeLeft_m1AD3A663DFBDD69E01E630B4945FDC2DC93009BA(/*hidden argument*/NULL);
		__this->set_isAutorotateToLandscapeLeft_7(L_2);
		// isAutorotateToLandscapeRight =Screen.autorotateToLandscapeRight;
		bool L_3;
		L_3 = Screen_get_autorotateToLandscapeRight_mD0987D56ABE583B238DEA0ABD3D77BD2DE0E9806(/*hidden argument*/NULL);
		__this->set_isAutorotateToLandscapeRight_8(L_3);
		// defaultOrientation = Screen.orientation;
		int32_t L_4;
		L_4 = Screen_get_orientation_m1C42BB2AF3CA157B8015FA7AB36F8BB1329660E7(/*hidden argument*/NULL);
		__this->set_defaultOrientation_9(L_4);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::RestoreOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_RestoreOrientation_mAFBED114D5A6CA8A551577E576BB4C597F4B3A34 (NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// Screen.autorotateToPortrait = isAutorotateToPortrait;
		bool L_0 = __this->get_isAutorotateToPortrait_5();
		Screen_set_autorotateToPortrait_m4463ABAE29F26E957CF488565AEF4EF655B6E048(L_0, /*hidden argument*/NULL);
		// Screen.autorotateToPortraitUpsideDown = isAutorotateToPortraitUpsideDown;
		bool L_1 = __this->get_isAutorotateToPortraitUpsideDown_6();
		Screen_set_autorotateToPortraitUpsideDown_m55CA3FBCA4E8F835AC084D1B0FAE19D72A924906(L_1, /*hidden argument*/NULL);
		// Screen.autorotateToLandscapeLeft = isAutorotateToLandscapeLeft;
		bool L_2 = __this->get_isAutorotateToLandscapeLeft_7();
		Screen_set_autorotateToLandscapeLeft_mA58796BBE0540504E54B1E0A06C06786456C4D5B(L_2, /*hidden argument*/NULL);
		// Screen.autorotateToLandscapeRight = isAutorotateToLandscapeRight;
		bool L_3 = __this->get_isAutorotateToLandscapeRight_8();
		Screen_set_autorotateToLandscapeRight_m7934E7BCD90CEE16D1C4A10E739DF1B021F2E255(L_3, /*hidden argument*/NULL);
		// int orientationCount = 0;
		V_0 = 0;
		// if (Screen.autorotateToPortrait == true)
		bool L_4;
		L_4 = Screen_get_autorotateToPortrait_m701B4ECBF07472A35470C71610270653E4B08138(/*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		// orientationCount++;
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0039:
	{
		// if (Screen.autorotateToPortraitUpsideDown == true)
		bool L_6;
		L_6 = Screen_get_autorotateToPortraitUpsideDown_m01523BFE802F07642427E4C87DD03257081209FB(/*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		// orientationCount++;
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0044:
	{
		// if (Screen.autorotateToLandscapeLeft == true)
		bool L_8;
		L_8 = Screen_get_autorotateToLandscapeLeft_m1AD3A663DFBDD69E01E630B4945FDC2DC93009BA(/*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_004f;
		}
	}
	{
		// orientationCount++;
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_004f:
	{
		// if (Screen.autorotateToLandscapeRight == true)
		bool L_10;
		L_10 = Screen_get_autorotateToLandscapeRight_mD0987D56ABE583B238DEA0ABD3D77BD2DE0E9806(/*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_005a;
		}
	}
	{
		// orientationCount++;
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_005a:
	{
		// if (orientationCount >= AUTO_ROTATION_MIN_COUNT)
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) < ((int32_t)2)))
		{
			goto IL_0065;
		}
	}
	{
		// Screen.orientation = ScreenOrientation.AutoRotation;
		Screen_set_orientation_mBEF7687B3C2B4726AE40F2BBB3568B1B131B6D1B(5, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0065:
	{
		// Screen.orientation = defaultOrientation;
		int32_t L_13 = __this->get_defaultOrientation_9();
		Screen_set_orientation_mBEF7687B3C2B4726AE40F2BBB3568B1B131B6D1B(L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::UpdateOrientation(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_UpdateOrientation_m2EA455240614066CCA466723013B52DB36855583 (NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB * __this, int32_t ___orientation0, const RuntimeMethod* method)
{
	{
		// if (orientation == GpmOrientation.PORTRAIT)
		int32_t L_0 = ___orientation0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000b;
		}
	}
	{
		// Screen.orientation = ScreenOrientation.Portrait;
		Screen_set_orientation_mBEF7687B3C2B4726AE40F2BBB3568B1B131B6D1B(1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_000b:
	{
		// else if (orientation == GpmOrientation.PORTRAIT_REVERSE)
		int32_t L_1 = ___orientation0;
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0016;
		}
	}
	{
		// Screen.orientation = ScreenOrientation.PortraitUpsideDown;
		Screen_set_orientation_mBEF7687B3C2B4726AE40F2BBB3568B1B131B6D1B(2, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0016:
	{
		// else if (orientation == GpmOrientation.LANDSCAPE_LEFT)
		int32_t L_2 = ___orientation0;
		if ((!(((uint32_t)L_2) == ((uint32_t)4))))
		{
			goto IL_0021;
		}
	}
	{
		// Screen.orientation = ScreenOrientation.LandscapeLeft;
		Screen_set_orientation_mBEF7687B3C2B4726AE40F2BBB3568B1B131B6D1B(3, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0021:
	{
		// else if (orientation == GpmOrientation.LANDSCAPE_REVERSE)
		int32_t L_3 = ___orientation0;
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_002c;
		}
	}
	{
		// Screen.orientation = ScreenOrientation.LandscapeRight;
		Screen_set_orientation_mBEF7687B3C2B4726AE40F2BBB3568B1B131B6D1B(4, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002c:
	{
		// else if (orientation != GpmOrientation.UNSPECIFIED)
		int32_t L_4 = ___orientation0;
		if (!L_4)
		{
			goto IL_0061;
		}
	}
	{
		// Screen.autorotateToPortrait = (orientation & GpmOrientation.PORTRAIT) == GpmOrientation.PORTRAIT;
		int32_t L_5 = ___orientation0;
		Screen_set_autorotateToPortrait_m4463ABAE29F26E957CF488565AEF4EF655B6E048((bool)((((int32_t)((int32_t)((int32_t)L_5&(int32_t)1))) == ((int32_t)1))? 1 : 0), /*hidden argument*/NULL);
		// Screen.autorotateToPortraitUpsideDown = (orientation & GpmOrientation.PORTRAIT_REVERSE) == GpmOrientation.PORTRAIT_REVERSE;
		int32_t L_6 = ___orientation0;
		Screen_set_autorotateToPortraitUpsideDown_m55CA3FBCA4E8F835AC084D1B0FAE19D72A924906((bool)((((int32_t)((int32_t)((int32_t)L_6&(int32_t)2))) == ((int32_t)2))? 1 : 0), /*hidden argument*/NULL);
		// Screen.autorotateToLandscapeLeft = (orientation & GpmOrientation.LANDSCAPE_LEFT) == GpmOrientation.LANDSCAPE_LEFT;
		int32_t L_7 = ___orientation0;
		Screen_set_autorotateToLandscapeLeft_mA58796BBE0540504E54B1E0A06C06786456C4D5B((bool)((((int32_t)((int32_t)((int32_t)L_7&(int32_t)4))) == ((int32_t)4))? 1 : 0), /*hidden argument*/NULL);
		// Screen.autorotateToLandscapeRight = (orientation & GpmOrientation.LANDSCAPE_REVERSE) == GpmOrientation.LANDSCAPE_REVERSE;
		int32_t L_8 = ___orientation0;
		Screen_set_autorotateToLandscapeRight_m7934E7BCD90CEE16D1C4A10E739DF1B021F2E255((bool)((((int32_t)((int32_t)((int32_t)L_8&(int32_t)8))) == ((int32_t)8))? 1 : 0), /*hidden argument*/NULL);
		// Screen.orientation = ScreenOrientation.AutoRotation;
		Screen_set_orientation_mBEF7687B3C2B4726AE40F2BBB3568B1B131B6D1B(5, /*hidden argument*/NULL);
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::ShowWebBrowser(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_ShowWebBrowser_m212529B00A2C21924F36087B7A32161D1FAE595B (NativeWebView_t101F844D2DF3F51815EA629EE13E50E37848D2DB * __this, String_t* ___url0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShowWebBrowser_tCB3CE687A4216C5E8F53038047E697F9DDEAD891_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE28241AB93EF4EDF8C85F2BD33E54A913E960306);
		s_Il2CppMethodInitialized = true;
	}
	NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * V_0 = NULL;
	ShowWebBrowser_tCB3CE687A4216C5E8F53038047E697F9DDEAD891 * V_1 = NULL;
	{
		// NativeMessage nativeMessage = new NativeMessage
		// {
		//     scheme = ApiScheme.SHOW_WEB_BROWSER
		// };
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_0 = (NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 *)il2cpp_codegen_object_new(NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282_il2cpp_TypeInfo_var);
		NativeMessage__ctor_mE0EBF745BAF4E49DAB1099ED23D31358B282F9B7(L_0, /*hidden argument*/NULL);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_scheme_0(_stringLiteralE28241AB93EF4EDF8C85F2BD33E54A913E960306);
		V_0 = L_1;
		// NativeRequest.ShowWebBrowser showWebBrowser = new NativeRequest.ShowWebBrowser
		// {
		//     url = url
		// };
		ShowWebBrowser_tCB3CE687A4216C5E8F53038047E697F9DDEAD891 * L_2 = (ShowWebBrowser_tCB3CE687A4216C5E8F53038047E697F9DDEAD891 *)il2cpp_codegen_object_new(ShowWebBrowser_tCB3CE687A4216C5E8F53038047E697F9DDEAD891_il2cpp_TypeInfo_var);
		ShowWebBrowser__ctor_mC8D6BDEA6FBB0EB6A6365E1A48CF3C22E2D8B647(L_2, /*hidden argument*/NULL);
		ShowWebBrowser_tCB3CE687A4216C5E8F53038047E697F9DDEAD891 * L_3 = L_2;
		String_t* L_4 = ___url0;
		NullCheck(L_3);
		L_3->set_url_0(L_4);
		V_1 = L_3;
		// nativeMessage.data = JsonMapper.ToJson(showWebBrowser);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_5 = V_0;
		ShowWebBrowser_tCB3CE687A4216C5E8F53038047E697F9DDEAD891 * L_6 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t7F3C2AB837A1D3152641C13C32CDC7D6E67CD6E1_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = JsonMapper_ToJson_mDF7B2A648653470AB77D8CA567AD09F7D1F70B63(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		L_5->set_data_2(L_7);
		// CallAsync(JsonMapper.ToJson(nativeMessage), null);
		NativeMessage_t3280CC7A8756B209A333971C53A9F0CB63EEE282 * L_8 = V_0;
		String_t* L_9;
		L_9 = JsonMapper_ToJson_mDF7B2A648653470AB77D8CA567AD09F7D1F70B63(L_8, /*hidden argument*/NULL);
		NativeWebView_CallAsync_m970B8D6828E81CF30DE2829DE364D5CF05A68845(__this, L_9, (String_t*)NULL, /*hidden argument*/NULL);
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
// System.Void SampleWebView::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_Awake_m51F8BFD61DF60BA66E7BF1D9DF89F5176B68EABF (SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral624680CF43A758F7BA992C7A896E612BF23FA850);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral663488ABE057592166FC68C8A6EF26CBF9C8178E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA68DCEC5DF5C9D1BAB1EB121891A32269876B92);
		s_Il2CppMethodInitialized = true;
	}
	{
		// urlInput.text = DEFAULT_URL;
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_0 = __this->get_urlInput_5();
		NullCheck(L_0);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_0, _stringLiteral624680CF43A758F7BA992C7A896E612BF23FA850, /*hidden argument*/NULL);
		// backgroundColorInput.text = "#FFFFFF";
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_1 = __this->get_backgroundColorInput_8();
		NullCheck(L_1);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_1, _stringLiteral663488ABE057592166FC68C8A6EF26CBF9C8178E, /*hidden argument*/NULL);
		// navigationColorInput.text = "#4B96E6";
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_2 = __this->get_navigationColorInput_9();
		NullCheck(L_2);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_2, _stringLiteralEA68DCEC5DF5C9D1BAB1EB121891A32269876B92, /*hidden argument*/NULL);
		// safeBrowsingNavigationBarColor.text = "#4B96E6";
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_3 = __this->get_safeBrowsingNavigationBarColor_33();
		NullCheck(L_3);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_3, _stringLiteralEA68DCEC5DF5C9D1BAB1EB121891A32269876B92, /*hidden argument*/NULL);
		// safeBrowsingNavigationTextColor.text = "#FFFFFF";
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_4 = __this->get_safeBrowsingNavigationTextColor_34();
		NullCheck(L_4);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_4, _stringLiteral663488ABE057592166FC68C8A6EF26CBF9C8178E, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::OpenWebView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_OpenWebView_mB51754EBF486EB9AB176AAB96679C308A4D58892 (SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SampleWebView_OnWebViewCallback_m018CF011D59E487CE62FF47391C5B8AD5A4B349A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE7BA8039B0BAFD01FB42599D4033518FDAC4259);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(urlInput.text) == false)
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_0 = __this->get_urlInput_5();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_003b;
		}
	}
	{
		// GpmWebView.ShowUrl(urlInput.text, GetConfiguration(), OnWebViewCallback, GetCustomSchemeList());
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_3 = __this->get_urlInput_5();
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_3, /*hidden argument*/NULL);
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_5;
		L_5 = SampleWebView_GetConfiguration_m90180677809C4C62131B564A56FF6D6855815E59(__this, /*hidden argument*/NULL);
		GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * L_6 = (GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 *)il2cpp_codegen_object_new(GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526_il2cpp_TypeInfo_var);
		GpmWebViewDelegate__ctor_m5AD431E00195331A1BB8DD00CBAFEFCAAE6F8C08(L_6, __this, (intptr_t)((intptr_t)SampleWebView_OnWebViewCallback_m018CF011D59E487CE62FF47391C5B8AD5A4B349A_RuntimeMethod_var), /*hidden argument*/NULL);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_7;
		L_7 = SampleWebView_GetCustomSchemeList_m7CE80C9508ACBE4C285639044A624DD8DA85BF37(__this, /*hidden argument*/NULL);
		GpmWebView_ShowUrl_mC39A3D56D034FB3EB0998C79DF1E27C8A411D344(L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}

IL_003b:
	{
		// Debug.LogError("[SampleWebView] Input url is empty.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralFE7BA8039B0BAFD01FB42599D4033518FDAC4259, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::OpenWithHTMLString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_OpenWithHTMLString_m579704AAB8A60B931942D4169755B01394FAE81A (SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SampleWebView_OnWebViewCallback_m018CF011D59E487CE62FF47391C5B8AD5A4B349A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC34B23CD76F40324322D49396FD0F04E34128CAB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string htmlString = @"<html><head><title>GPM WebView</title></head>
		//     <body><h1>GPM WebView Test</h1><h5>Hi.</h5>
		//     <script type='text/javascript'>
		//     function goGoogle() { window.open('https://www.google.com'); }
		//     </script>
		//     <button class='favorite styled' type='button' onclick='goGoogle()'>Go Google</button>
		//     </body></html>";
		// GpmWebView.ShowHtmlString(htmlString, GetConfiguration(), OnWebViewCallback, GetCustomSchemeList());
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_0;
		L_0 = SampleWebView_GetConfiguration_m90180677809C4C62131B564A56FF6D6855815E59(__this, /*hidden argument*/NULL);
		GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * L_1 = (GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 *)il2cpp_codegen_object_new(GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526_il2cpp_TypeInfo_var);
		GpmWebViewDelegate__ctor_m5AD431E00195331A1BB8DD00CBAFEFCAAE6F8C08(L_1, __this, (intptr_t)((intptr_t)SampleWebView_OnWebViewCallback_m018CF011D59E487CE62FF47391C5B8AD5A4B349A_RuntimeMethod_var), /*hidden argument*/NULL);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2;
		L_2 = SampleWebView_GetCustomSchemeList_m7CE80C9508ACBE4C285639044A624DD8DA85BF37(__this, /*hidden argument*/NULL);
		GpmWebView_ShowHtmlString_mD29179721F7F23D8A34AB597438B7330D49D5767(_stringLiteralC34B23CD76F40324322D49396FD0F04E34128CAB, L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::OpenSafeBrowsing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_OpenSafeBrowsing_m875A132698A0E2AE3EB11D8F655A0363857288CE (SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigurationSafeBrowsing_t1E8DF97EEABF137067881FFF0A185D5B9921C6F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SampleWebView_OnWebViewCallback_m018CF011D59E487CE62FF47391C5B8AD5A4B349A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE7BA8039B0BAFD01FB42599D4033518FDAC4259);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(urlInput.text) == false)
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_0 = __this->get_urlInput_5();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0056;
		}
	}
	{
		//             GpmWebViewSafeBrowsing.ShowSafeBrowsing(urlInput.text,
		//                 new GpmWebViewRequest.ConfigurationSafeBrowsing
		//                 {
		//                     navigationBarColor = safeBrowsingNavigationBarColor.text,
		// #if UNITY_IOS
		//                     navigationTextColor = safeBrowsingNavigationTextColor.text
		// #endif
		//                 }, OnWebViewCallback);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_3 = __this->get_urlInput_5();
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_3, /*hidden argument*/NULL);
		ConfigurationSafeBrowsing_t1E8DF97EEABF137067881FFF0A185D5B9921C6F9 * L_5 = (ConfigurationSafeBrowsing_t1E8DF97EEABF137067881FFF0A185D5B9921C6F9 *)il2cpp_codegen_object_new(ConfigurationSafeBrowsing_t1E8DF97EEABF137067881FFF0A185D5B9921C6F9_il2cpp_TypeInfo_var);
		ConfigurationSafeBrowsing__ctor_m936CD80EDDA42ECCB20CA93F066572032A7FCECD(L_5, /*hidden argument*/NULL);
		ConfigurationSafeBrowsing_t1E8DF97EEABF137067881FFF0A185D5B9921C6F9 * L_6 = L_5;
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_7 = __this->get_safeBrowsingNavigationBarColor_33();
		NullCheck(L_7);
		String_t* L_8;
		L_8 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set_navigationBarColor_0(L_8);
		ConfigurationSafeBrowsing_t1E8DF97EEABF137067881FFF0A185D5B9921C6F9 * L_9 = L_6;
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_10 = __this->get_safeBrowsingNavigationTextColor_34();
		NullCheck(L_10);
		String_t* L_11;
		L_11 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		L_9->set_navigationTextColor_1(L_11);
		GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * L_12 = (GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 *)il2cpp_codegen_object_new(GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526_il2cpp_TypeInfo_var);
		GpmWebViewDelegate__ctor_m5AD431E00195331A1BB8DD00CBAFEFCAAE6F8C08(L_12, __this, (intptr_t)((intptr_t)SampleWebView_OnWebViewCallback_m018CF011D59E487CE62FF47391C5B8AD5A4B349A_RuntimeMethod_var), /*hidden argument*/NULL);
		GpmWebViewSafeBrowsing_ShowSafeBrowsing_mB6590D03196BE7D549B368AB3B34B78ED2562E49(L_4, L_9, L_12, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0056:
	{
		// Debug.LogError("[SampleWebView] Input url is empty.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralFE7BA8039B0BAFD01FB42599D4033518FDAC4259, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::OpenWebBrowser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_OpenWebBrowser_m88AD302750E34EA35A71B39B3982026A10077893 (SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE7BA8039B0BAFD01FB42599D4033518FDAC4259);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(urlInput.text) == false)
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_0 = __this->get_urlInput_5();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		// GpmWebView.ShowWebBrowser(urlInput.text);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_3 = __this->get_urlInput_5();
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_3, /*hidden argument*/NULL);
		GpmWebView_ShowWebBrowser_m9940C517AB3989C50E5AB0E34ED36C111DF01999(L_4, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0023:
	{
		// Debug.LogError("[SampleWebView] Input url is empty.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralFE7BA8039B0BAFD01FB42599D4033518FDAC4259, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Gpm.WebView.GpmWebViewRequest/Configuration SampleWebView::GetConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * SampleWebView_GetConfiguration_m90180677809C4C62131B564A56FF6D6855815E59 (SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomSchemePostCommand_t25DC04BF3BCCC447F4AED01102F27DAC5B04561A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8CBA63A13F1D65A1D993CEFCDA7DE953DA8286C);
		s_Il2CppMethodInitialized = true;
	}
	CustomSchemePostCommand_t25DC04BF3BCCC447F4AED01102F27DAC5B04561A * V_0 = NULL;
	Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * G_B2_0 = NULL;
	Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * G_B2_1 = NULL;
	Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * G_B1_0 = NULL;
	Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * G_B3_1 = NULL;
	Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * G_B3_2 = NULL;
	{
		// GpmWebViewRequest.CustomSchemePostCommand customSchemePostCommand = new GpmWebViewRequest.CustomSchemePostCommand();
		CustomSchemePostCommand_t25DC04BF3BCCC447F4AED01102F27DAC5B04561A * L_0 = (CustomSchemePostCommand_t25DC04BF3BCCC447F4AED01102F27DAC5B04561A *)il2cpp_codegen_object_new(CustomSchemePostCommand_t25DC04BF3BCCC447F4AED01102F27DAC5B04561A_il2cpp_TypeInfo_var);
		CustomSchemePostCommand__ctor_mD72A838B78E510B5A06CECC23E4753BFE3EA08B9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// customSchemePostCommand.Close("CUSTOM_SCHEME_POST_CLOSE");
		CustomSchemePostCommand_t25DC04BF3BCCC447F4AED01102F27DAC5B04561A * L_1 = V_0;
		NullCheck(L_1);
		CustomSchemePostCommand_Close_mF39C116A9B1F44A9F78663B3B888814C3B8D16A6(L_1, _stringLiteralD8CBA63A13F1D65A1D993CEFCDA7DE953DA8286C, /*hidden argument*/NULL);
		//         return new GpmWebViewRequest.Configuration()
		//         {
		//             style = styleDropdown.value,
		//             orientation = (orientationDropdown.value == 0) ? GpmOrientation.UNSPECIFIED : 1 << (orientationDropdown.value - 1),
		//             isClearCache = clearCookieToggle.isOn,
		//             isClearCookie = clearCacheToggle.isOn,
		//             backgroundColor = backgroundColorInput.text,
		//             isNavigationBarVisible = navigationBarVisibleToggle.isOn,
		//             navigationBarColor = navigationColorInput.text,
		//             title = titleInput.text,
		//             isBackButtonVisible = backButtonVisibleToggle.isOn,
		//             isForwardButtonVisible = forwardButtonVisibleToggle.isOn,
		//             isCloseButtonVisible = closeButtonVisibleToggle.isOn,
		//             supportMultipleWindows = supportMultipleWindowToggle.isOn,
		//             userAgentString = userAgentStringInput.text,
		//             addJavascript = javascriptInput.text,
		//             customSchemePostCommand = customSchemePostCommand,
		// 
		//             position = GetConfigurationPosition(),
		//             size = GetConfigurationSize(),
		//             margins = GetConfigurationMargins(),
		// 
		//             isBackButtonCloseCallbackUsed = backButtonCloseCallbackUsedToggle.isOn,
		// 
		// #if UNITY_IOS
		//             contentMode = contentModeDropdown.value,
		//             isMaskViewVisible = maskViewVisibleToggle.isOn,
		//             isAutoRotation = autoRotationToggle.isOn
		// #endif
		//         };
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_2 = (Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 *)il2cpp_codegen_object_new(Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425_il2cpp_TypeInfo_var);
		Configuration__ctor_mAA46949E164E88806E8653429FDC7B11A43F4A7C(L_2, /*hidden argument*/NULL);
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_3 = L_2;
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_4 = __this->get_styleDropdown_20();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Dropdown_get_value_mFBF47E0C72050C5CB96B8B6D33F41BA2D1368F26_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		L_3->set_style_0(L_5);
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_6 = L_3;
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_7 = __this->get_orientationDropdown_21();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Dropdown_get_value_mFBF47E0C72050C5CB96B8B6D33F41BA2D1368F26_inline(L_7, /*hidden argument*/NULL);
		G_B1_0 = L_6;
		G_B1_1 = L_6;
		if (!L_8)
		{
			G_B2_0 = L_6;
			G_B2_1 = L_6;
			goto IL_0049;
		}
	}
	{
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_9 = __this->get_orientationDropdown_21();
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Dropdown_get_value_mFBF47E0C72050C5CB96B8B6D33F41BA2D1368F26_inline(L_9, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1))&(int32_t)((int32_t)31)))));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_004a;
	}

IL_0049:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_004a:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_orientation_1(G_B3_0);
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_11 = G_B3_2;
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_12 = __this->get_clearCookieToggle_10();
		NullCheck(L_12);
		bool L_13;
		L_13 = Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		L_11->set_isClearCache_3(L_13);
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_14 = L_11;
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_15 = __this->get_clearCacheToggle_11();
		NullCheck(L_15);
		bool L_16;
		L_16 = Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		L_14->set_isClearCookie_2(L_16);
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_17 = L_14;
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_18 = __this->get_backgroundColorInput_8();
		NullCheck(L_18);
		String_t* L_19;
		L_19 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		L_17->set_backgroundColor_4(L_19);
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_20 = L_17;
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_21 = __this->get_navigationBarVisibleToggle_12();
		NullCheck(L_21);
		bool L_22;
		L_22 = Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		L_20->set_isNavigationBarVisible_5(L_22);
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_23 = L_20;
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_24 = __this->get_navigationColorInput_9();
		NullCheck(L_24);
		String_t* L_25;
		L_25 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		L_23->set_navigationBarColor_6(L_25);
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_26 = L_23;
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_27 = __this->get_titleInput_6();
		NullCheck(L_27);
		String_t* L_28;
		L_28 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		L_26->set_title_7(L_28);
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_29 = L_26;
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_30 = __this->get_backButtonVisibleToggle_13();
		NullCheck(L_30);
		bool L_31;
		L_31 = Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline(L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		L_29->set_isBackButtonVisible_8(L_31);
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_32 = L_29;
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_33 = __this->get_forwardButtonVisibleToggle_14();
		NullCheck(L_33);
		bool L_34;
		L_34 = Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline(L_33, /*hidden argument*/NULL);
		NullCheck(L_32);
		L_32->set_isForwardButtonVisible_9(L_34);
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_35 = L_32;
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_36 = __this->get_closeButtonVisibleToggle_15();
		NullCheck(L_36);
		bool L_37;
		L_37 = Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline(L_36, /*hidden argument*/NULL);
		NullCheck(L_35);
		L_35->set_isCloseButtonVisible_10(L_37);
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_38 = L_35;
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_39 = __this->get_supportMultipleWindowToggle_16();
		NullCheck(L_39);
		bool L_40;
		L_40 = Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline(L_39, /*hidden argument*/NULL);
		NullCheck(L_38);
		L_38->set_supportMultipleWindows_11(L_40);
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_41 = L_38;
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_42 = __this->get_userAgentStringInput_31();
		NullCheck(L_42);
		String_t* L_43;
		L_43 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_42, /*hidden argument*/NULL);
		NullCheck(L_41);
		L_41->set_userAgentString_12(L_43);
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_44 = L_41;
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_45 = __this->get_javascriptInput_32();
		NullCheck(L_45);
		String_t* L_46;
		L_46 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_45, /*hidden argument*/NULL);
		NullCheck(L_44);
		L_44->set_addJavascript_13(L_46);
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_47 = L_44;
		CustomSchemePostCommand_t25DC04BF3BCCC447F4AED01102F27DAC5B04561A * L_48 = V_0;
		NullCheck(L_47);
		L_47->set_customSchemePostCommand_14(L_48);
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_49 = L_47;
		Position_tE389F0309F8DE9F2BB96E471C81D09AE285E0701  L_50;
		L_50 = SampleWebView_GetConfigurationPosition_m78779699DAC3CB0528D4BDED34CE8AF86D36213A(__this, /*hidden argument*/NULL);
		NullCheck(L_49);
		L_49->set_position_15(L_50);
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_51 = L_49;
		Size_t92BB328622E7C6869FBF329D08E72EE0D18C8751  L_52;
		L_52 = SampleWebView_GetConfigurationSize_mA6268B40CFBCCFE6645AC965B2294EDEBA002169(__this, /*hidden argument*/NULL);
		NullCheck(L_51);
		L_51->set_size_16(L_52);
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_53 = L_51;
		Margins_tE71166091954A97FE414FCDA43759AAC56D9688F  L_54;
		L_54 = SampleWebView_GetConfigurationMargins_m36B00E0892EC9FAA5B72B8FA44186AC90D572431(__this, /*hidden argument*/NULL);
		NullCheck(L_53);
		L_53->set_margins_17(L_54);
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_55 = L_53;
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_56 = __this->get_backButtonCloseCallbackUsedToggle_17();
		NullCheck(L_56);
		bool L_57;
		L_57 = Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline(L_56, /*hidden argument*/NULL);
		NullCheck(L_55);
		L_55->set_isBackButtonCloseCallbackUsed_18(L_57);
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_58 = L_55;
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_59 = __this->get_contentModeDropdown_22();
		NullCheck(L_59);
		int32_t L_60;
		L_60 = Dropdown_get_value_mFBF47E0C72050C5CB96B8B6D33F41BA2D1368F26_inline(L_59, /*hidden argument*/NULL);
		NullCheck(L_58);
		L_58->set_contentMode_19(L_60);
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_61 = L_58;
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_62 = __this->get_maskViewVisibleToggle_18();
		NullCheck(L_62);
		bool L_63;
		L_63 = Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline(L_62, /*hidden argument*/NULL);
		NullCheck(L_61);
		L_61->set_isMaskViewVisible_20(L_63);
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_64 = L_61;
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_65 = __this->get_autoRotationToggle_19();
		NullCheck(L_65);
		bool L_66;
		L_66 = Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline(L_65, /*hidden argument*/NULL);
		NullCheck(L_64);
		L_64->set_isAutoRotation_21(L_66);
		return L_64;
	}
}
// Gpm.WebView.GpmWebViewRequest/Position SampleWebView::GetConfigurationPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Position_tE389F0309F8DE9F2BB96E471C81D09AE285E0701  SampleWebView_GetConfigurationPosition_m78779699DAC3CB0528D4BDED34CE8AF86D36213A (SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Position_tE389F0309F8DE9F2BB96E471C81D09AE285E0701  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// bool hasValue = false;
		V_0 = (bool)0;
		// if (string.IsNullOrEmpty(popupXInput.text) == false && string.IsNullOrEmpty(popupYInput.text) == false)
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_0 = __this->get_popupXInput_23();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_3 = __this->get_popupYInput_24();
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0028;
		}
	}
	{
		// hasValue = true;
		V_0 = (bool)1;
	}

IL_0028:
	{
		// int x = 0;
		V_1 = 0;
		// int.TryParse(popupXInput.text, out x);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_6 = __this->get_popupXInput_23();
		NullCheck(L_6);
		String_t* L_7;
		L_7 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_6, /*hidden argument*/NULL);
		bool L_8;
		L_8 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_7, (int32_t*)(&V_1), /*hidden argument*/NULL);
		// int y = 0;
		V_2 = 0;
		// int.TryParse(popupYInput.text, out y);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_9 = __this->get_popupYInput_24();
		NullCheck(L_9);
		String_t* L_10;
		L_10 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_9, /*hidden argument*/NULL);
		bool L_11;
		L_11 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_10, (int32_t*)(&V_2), /*hidden argument*/NULL);
		// return new GpmWebViewRequest.Position
		// {
		//     hasValue = hasValue,
		//     x = x,
		//     y = y
		// };
		il2cpp_codegen_initobj((&V_3), sizeof(Position_tE389F0309F8DE9F2BB96E471C81D09AE285E0701 ));
		bool L_12 = V_0;
		(&V_3)->set_hasValue_0(L_12);
		int32_t L_13 = V_1;
		(&V_3)->set_x_1(L_13);
		int32_t L_14 = V_2;
		(&V_3)->set_y_2(L_14);
		Position_tE389F0309F8DE9F2BB96E471C81D09AE285E0701  L_15 = V_3;
		return L_15;
	}
}
// Gpm.WebView.GpmWebViewRequest/Size SampleWebView::GetConfigurationSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Size_t92BB328622E7C6869FBF329D08E72EE0D18C8751  SampleWebView_GetConfigurationSize_mA6268B40CFBCCFE6645AC965B2294EDEBA002169 (SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Size_t92BB328622E7C6869FBF329D08E72EE0D18C8751  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// bool hasValue = false;
		V_0 = (bool)0;
		// if (string.IsNullOrEmpty(popupWidthInput.text) == false && string.IsNullOrEmpty(popupHeightInput.text) == false)
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_0 = __this->get_popupWidthInput_25();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_3 = __this->get_popupHeightInput_26();
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0028;
		}
	}
	{
		// hasValue = true;
		V_0 = (bool)1;
	}

IL_0028:
	{
		// int width = 0;
		V_1 = 0;
		// int.TryParse(popupWidthInput.text, out width);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_6 = __this->get_popupWidthInput_25();
		NullCheck(L_6);
		String_t* L_7;
		L_7 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_6, /*hidden argument*/NULL);
		bool L_8;
		L_8 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_7, (int32_t*)(&V_1), /*hidden argument*/NULL);
		// int height = 0;
		V_2 = 0;
		// int.TryParse(popupHeightInput.text, out height);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_9 = __this->get_popupHeightInput_26();
		NullCheck(L_9);
		String_t* L_10;
		L_10 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_9, /*hidden argument*/NULL);
		bool L_11;
		L_11 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_10, (int32_t*)(&V_2), /*hidden argument*/NULL);
		// return new GpmWebViewRequest.Size
		// {
		//     hasValue = hasValue,
		//     width = width,
		//     height = height
		// };
		il2cpp_codegen_initobj((&V_3), sizeof(Size_t92BB328622E7C6869FBF329D08E72EE0D18C8751 ));
		bool L_12 = V_0;
		(&V_3)->set_hasValue_0(L_12);
		int32_t L_13 = V_1;
		(&V_3)->set_width_1(L_13);
		int32_t L_14 = V_2;
		(&V_3)->set_height_2(L_14);
		Size_t92BB328622E7C6869FBF329D08E72EE0D18C8751  L_15 = V_3;
		return L_15;
	}
}
// Gpm.WebView.GpmWebViewRequest/Margins SampleWebView::GetConfigurationMargins()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Margins_tE71166091954A97FE414FCDA43759AAC56D9688F  SampleWebView_GetConfigurationMargins_m36B00E0892EC9FAA5B72B8FA44186AC90D572431 (SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Margins_tE71166091954A97FE414FCDA43759AAC56D9688F  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// bool hasValue = false;
		V_0 = (bool)0;
		// if (string.IsNullOrEmpty(popupMarginsLeftInput.text) == false &&
		//     string.IsNullOrEmpty(popupMarginsTopInput.text) == false &&
		//     string.IsNullOrEmpty(popupMarginsRightInput.text) == false &&
		//     string.IsNullOrEmpty(popupMarginsBottomInput.text) == false)
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_0 = __this->get_popupMarginsLeftInput_27();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_004c;
		}
	}
	{
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_3 = __this->get_popupMarginsTopInput_28();
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_004c;
		}
	}
	{
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_6 = __this->get_popupMarginsRightInput_29();
		NullCheck(L_6);
		String_t* L_7;
		L_7 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_6, /*hidden argument*/NULL);
		bool L_8;
		L_8 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_004c;
		}
	}
	{
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_9 = __this->get_popupMarginsBottomInput_30();
		NullCheck(L_9);
		String_t* L_10;
		L_10 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_9, /*hidden argument*/NULL);
		bool L_11;
		L_11 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_004c;
		}
	}
	{
		// hasValue = true;
		V_0 = (bool)1;
	}

IL_004c:
	{
		// int marginLeft = 0;
		V_1 = 0;
		// int.TryParse(popupMarginsLeftInput.text, out marginLeft);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_12 = __this->get_popupMarginsLeftInput_27();
		NullCheck(L_12);
		String_t* L_13;
		L_13 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_12, /*hidden argument*/NULL);
		bool L_14;
		L_14 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_13, (int32_t*)(&V_1), /*hidden argument*/NULL);
		// int marginTop = 0;
		V_2 = 0;
		// int.TryParse(popupMarginsTopInput.text, out marginTop);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_15 = __this->get_popupMarginsTopInput_28();
		NullCheck(L_15);
		String_t* L_16;
		L_16 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_15, /*hidden argument*/NULL);
		bool L_17;
		L_17 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_16, (int32_t*)(&V_2), /*hidden argument*/NULL);
		// int marginRight = 0;
		V_3 = 0;
		// int.TryParse(popupMarginsRightInput.text, out marginRight);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_18 = __this->get_popupMarginsRightInput_29();
		NullCheck(L_18);
		String_t* L_19;
		L_19 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_18, /*hidden argument*/NULL);
		bool L_20;
		L_20 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_19, (int32_t*)(&V_3), /*hidden argument*/NULL);
		// int marginBottom = 0;
		V_4 = 0;
		// int.TryParse(popupMarginsBottomInput.text, out marginBottom);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_21 = __this->get_popupMarginsBottomInput_30();
		NullCheck(L_21);
		String_t* L_22;
		L_22 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_21, /*hidden argument*/NULL);
		bool L_23;
		L_23 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_22, (int32_t*)(&V_4), /*hidden argument*/NULL);
		// return new GpmWebViewRequest.Margins
		// {
		//     hasValue = hasValue,
		//     left = marginLeft,
		//     top = marginTop,
		//     right = marginRight,
		//     bottom = marginBottom
		// };
		il2cpp_codegen_initobj((&V_5), sizeof(Margins_tE71166091954A97FE414FCDA43759AAC56D9688F ));
		bool L_24 = V_0;
		(&V_5)->set_hasValue_0(L_24);
		int32_t L_25 = V_1;
		(&V_5)->set_left_1(L_25);
		int32_t L_26 = V_2;
		(&V_5)->set_top_2(L_26);
		int32_t L_27 = V_3;
		(&V_5)->set_right_3(L_27);
		int32_t L_28 = V_4;
		(&V_5)->set_bottom_4(L_28);
		Margins_tE71166091954A97FE414FCDA43759AAC56D9688F  L_29 = V_5;
		return L_29;
	}
}
// System.Collections.Generic.List`1<System.String> SampleWebView::GetCustomSchemeList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * SampleWebView_GetCustomSchemeList_m7CE80C9508ACBE4C285639044A624DD8DA85BF37 (SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_0 = NULL;
	{
		// List<string> customSchemeList = null;
		V_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)NULL;
		// if (string.IsNullOrEmpty(customSchemeInput.text) == false)
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_0 = __this->get_customSchemeInput_7();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0035;
		}
	}
	{
		// string[] schemes = customSchemeInput.text.Split(',');
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_3 = __this->get_customSchemeInput_7();
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_3, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_5 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_6 = L_5;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		NullCheck(L_4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7;
		L_7 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_4, L_6, /*hidden argument*/NULL);
		// customSchemeList = new List<string>(schemes);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_8 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323(L_8, (RuntimeObject*)(RuntimeObject*)L_7, /*hidden argument*/List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323_RuntimeMethod_var);
		V_0 = L_8;
	}

IL_0035:
	{
		// return customSchemeList;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_9 = V_0;
		return L_9;
	}
}
// System.Void SampleWebView::OnWebViewCallback(Gpm.WebView.GpmWebViewCallback/CallbackType,System.String,Gpm.WebView.GpmWebViewError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_OnWebViewCallback_m018CF011D59E487CE62FF47391C5B8AD5A4B349A (SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88 * __this, int32_t ___callbackType0, String_t* ___data1, GpmWebViewError_tBDC438A993BE136762458A7B80E9FC35C32F8C21 * ___error2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackType_t6E0F72D8FA9985F30CE3B7DBD1FBA5BF7F43246D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04F8834E37A04F4BBCA017B29A65B35423675447);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B241CB3EEE5D589CA19710ABBF0C7D1B11EB9A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F788246CC4B1F56C30416BB4828AB5DFE1D7571);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3353FE40126F6A90AE70941B74EDAC7A246A6819);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral392253FBD9663E091C33F0EFE13CDA2BA1CBEAD9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EF917734AC14033FA41F53D00974CA539F0C445);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F5DC295F8AA395185E978B7D6DE85F3427EDEA0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9819B2ADE3033816812B6476FC3144B46A0E4301);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEB3364828FCCCEE79F6A49E9F6DEA464771F96B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF1C4D8BF6C22738F012A325F6F14CD7E5F8C9FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDA796685120EA50A129C055DDF20DF3D99D95DB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnWebViewCallback: " + callbackType);
		RuntimeObject * L_0 = Box(CallbackType_t6E0F72D8FA9985F30CE3B7DBD1FBA5BF7F43246D_il2cpp_TypeInfo_var, (&___callbackType0));
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		___callbackType0 = *(int32_t*)UnBox(L_0);
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral3353FE40126F6A90AE70941B74EDAC7A246A6819, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_2, /*hidden argument*/NULL);
		int32_t L_3 = ___callbackType0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_004b;
			}
			case 1:
			{
				goto IL_0066;
			}
			case 2:
			{
				goto IL_00a1;
			}
			case 3:
			{
				goto IL_00be;
			}
			case 4:
			{
				goto IL_00c9;
			}
			case 5:
			{
				goto IL_00d4;
			}
			case 6:
			{
				goto IL_00e9;
			}
			case 7:
			{
				goto IL_00f4;
			}
			case 8:
			{
				goto IL_00ff;
			}
			case 9:
			{
				goto IL_0081;
			}
		}
	}
	{
		return;
	}

IL_004b:
	{
		// if (error != null)
		GpmWebViewError_tBDC438A993BE136762458A7B80E9FC35C32F8C21 * L_4 = ___error2;
		if (!L_4)
		{
			goto IL_0117;
		}
	}
	{
		// Debug.LogFormat("Fail to open WebView. Error:{0}", error);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_5;
		GpmWebViewError_tBDC438A993BE136762458A7B80E9FC35C32F8C21 * L_7 = ___error2;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_7);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogFormat_m3FD4ED373B54BC92F95360449859CD95D45D73C6(_stringLiteral9819B2ADE3033816812B6476FC3144B46A0E4301, L_6, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0066:
	{
		// if (error != null)
		GpmWebViewError_tBDC438A993BE136762458A7B80E9FC35C32F8C21 * L_8 = ___error2;
		if (!L_8)
		{
			goto IL_0117;
		}
	}
	{
		// Debug.LogFormat("Fail to close WebView. Error:{0}", error);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = L_9;
		GpmWebViewError_tBDC438A993BE136762458A7B80E9FC35C32F8C21 * L_11 = ___error2;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_11);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogFormat_m3FD4ED373B54BC92F95360449859CD95D45D73C6(_stringLiteral0B241CB3EEE5D589CA19710ABBF0C7D1B11EB9A3, L_10, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0081:
	{
		// if (string.IsNullOrEmpty(data) == false)
		String_t* L_12 = ___data1;
		bool L_13;
		L_13 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0117;
		}
	}
	{
		// Debug.LogFormat("PageStarted Url : {0}", data);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = L_14;
		String_t* L_16 = ___data1;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_16);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogFormat_m3FD4ED373B54BC92F95360449859CD95D45D73C6(_stringLiteralAEB3364828FCCCEE79F6A49E9F6DEA464771F96B, L_15, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00a1:
	{
		// if (string.IsNullOrEmpty(data) == false)
		String_t* L_17 = ___data1;
		bool L_18;
		L_18 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_0117;
		}
	}
	{
		// Debug.LogFormat("Loaded Page:{0}", data);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = L_19;
		String_t* L_21 = ___data1;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_21);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogFormat_m3FD4ED373B54BC92F95360449859CD95D45D73C6(_stringLiteral4EF917734AC14033FA41F53D00974CA539F0C445, L_20, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00be:
	{
		// Debug.Log("MultiWindowOpen");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralFDA796685120EA50A129C055DDF20DF3D99D95DB, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00c9:
	{
		// Debug.Log("MultiWindowClose");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral04F8834E37A04F4BBCA017B29A65B35423675447, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00d4:
	{
		// Debug.LogFormat("Scheme:{0}", data);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_23 = L_22;
		String_t* L_24 = ___data1;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_24);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogFormat_m3FD4ED373B54BC92F95360449859CD95D45D73C6(_stringLiteral2F788246CC4B1F56C30416BB4828AB5DFE1D7571, L_23, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00e9:
	{
		// Debug.Log("GoBack");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral6F5DC295F8AA395185E978B7D6DE85F3427EDEA0, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00f4:
	{
		// Debug.Log("GoForward");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralDF1C4D8BF6C22738F012A325F6F14CD7E5F8C9FD, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00ff:
	{
		// Debug.LogFormat("ExecuteJavascript data : {0}, error : {1}", data, error);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_26 = L_25;
		String_t* L_27 = ___data1;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_27);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_27);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_28 = L_26;
		GpmWebViewError_tBDC438A993BE136762458A7B80E9FC35C32F8C21 * L_29 = ___error2;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_29);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_29);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogFormat_m3FD4ED373B54BC92F95360449859CD95D45D73C6(_stringLiteral392253FBD9663E091C33F0EFE13CDA2BA1CBEAD9, L_28, /*hidden argument*/NULL);
	}

IL_0117:
	{
		// }
		return;
	}
}
// System.Void SampleWebView::CanGoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_CanGoBack_m22BA73B89BC624C7CBA0C2F4472962DDC827FA24 (SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// bool value = GpmWebView.CanGoBack();
		bool L_0;
		L_0 = GpmWebView_CanGoBack_m500296FEC8B7F57FCD4F644754187A51B4F7B195(/*hidden argument*/NULL);
		V_0 = L_0;
		// output.text = value.ToString();
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_1 = __this->get_output_35();
		String_t* L_2;
		L_2 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_1);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::GoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_GoBack_m74E77ACFEEE40CA1EFACACA2445589C9C42F7B9D (SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88 * __this, const RuntimeMethod* method)
{
	{
		// GpmWebView.GoBack();
		GpmWebView_GoBack_mBE73F5AC98CAE8FF6313C7775E22A0F875A46768(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::CanGoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_CanGoForward_m4689660D0F92308F59A025D311B1DEF8125F49DE (SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// bool value = GpmWebView.CanGoForward();
		bool L_0;
		L_0 = GpmWebView_CanGoForward_m0E9C550777B96862C9DAF1F92D6F943C54A506B3(/*hidden argument*/NULL);
		V_0 = L_0;
		// output.text = value.ToString();
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_1 = __this->get_output_35();
		String_t* L_2;
		L_2 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_1);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::GoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_GoForward_m36DB0A6AC140C0F6BD610D902516B9D9B9C0DEBB (SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88 * __this, const RuntimeMethod* method)
{
	{
		// GpmWebView.GoForward();
		GpmWebView_GoForward_mFAC3A8B76054DF7E3FEAC44C078F24C81AB3C3C4(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::GetX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_GetX_m8073C51D3B0DD6A8A159247A28C82DE565F03884 (SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int value = GpmWebView.GetX();
		int32_t L_0;
		L_0 = GpmWebView_GetX_m3D11093012E247D1A1BC9E1BE4537EF421B943D4(/*hidden argument*/NULL);
		V_0 = L_0;
		// output.text = value.ToString();
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_1 = __this->get_output_35();
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_1);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::GetY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_GetY_m3D523147E8D16E45806BC85BFB043FBB0071D686 (SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int value = GpmWebView.GetY();
		int32_t L_0;
		L_0 = GpmWebView_GetY_m21150A3335FF75A2EE2427C7639BF467D047BE18(/*hidden argument*/NULL);
		V_0 = L_0;
		// output.text = value.ToString();
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_1 = __this->get_output_35();
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_1);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::GetWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_GetWidth_m96A9A3FEC083D1665D0CFF1A2C83F074053C3485 (SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int value = GpmWebView.GetWidth();
		int32_t L_0;
		L_0 = GpmWebView_GetWidth_mC0E391B4065FF25574C9307D04C62CFB3FE58B2A(/*hidden argument*/NULL);
		V_0 = L_0;
		// output.text = value.ToString();
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_1 = __this->get_output_35();
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_1);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::GetHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_GetHeight_mEDC2EFF53147A6EE2AA7E91E64A7A24232CA10ED (SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int value = GpmWebView.GetHeight();
		int32_t L_0;
		L_0 = GpmWebView_GetHeight_m36877E28F6D644C29DBC37F4690D01691881F87C(/*hidden argument*/NULL);
		V_0 = L_0;
		// output.text = value.ToString();
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_1 = __this->get_output_35();
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_1);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::ExecuteJavascript()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_ExecuteJavascript_m4462730EB24FCA692696700431724DF8765CB8D1 (SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88 * __this, const RuntimeMethod* method)
{
	{
		// GpmWebView.ExecuteJavaScript(javascriptInput.text);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_0 = __this->get_javascriptInput_32();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_0, /*hidden argument*/NULL);
		GpmWebView_ExecuteJavaScript_m8BC9C5B795248DAA3D077B4AAB6A34719681D0D6(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_IsActive_mEC7503A1B996AFE65D64C997A60A5CF68C28CCCE (SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// bool value = GpmWebView.IsActive();
		bool L_0;
		L_0 = GpmWebView_IsActive_m6F1FA426106B9E73372A7C84501835F7A4F47307(/*hidden argument*/NULL);
		V_0 = L_0;
		// output.text = value.ToString();
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_1 = __this->get_output_35();
		String_t* L_2;
		L_2 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_1);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_Close_m5E118B718F0378937D97B9B2E49986C446FB2FDA (SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88 * __this, const RuntimeMethod* method)
{
	{
		// GpmWebView.Close();
		GpmWebView_Close_m0CB710448FC3B86A1703790B6AC7B91BA8ED199D(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::SetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_SetPosition_m824B6B81677403BEE0095715C1D3CCDC98084999 (SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int x = 0;
		V_0 = 0;
		// int y = 0;
		V_1 = 0;
		// int.TryParse(popupXInput.text, out x);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_0 = __this->get_popupXInput_23();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_1, (int32_t*)(&V_0), /*hidden argument*/NULL);
		// int.TryParse(popupYInput.text, out y);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_3 = __this->get_popupYInput_24();
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_4, (int32_t*)(&V_1), /*hidden argument*/NULL);
		// GpmWebView.SetPosition(x, y);
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		GpmWebView_SetPosition_m0C6390640C8B1F4F868673A9588753413627B82D(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::SetSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_SetSize_m40EB20D4F105D93D970B0FC1132822BB3A3FFA1F (SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int width = 0;
		V_0 = 0;
		// int height = 0;
		V_1 = 0;
		// int.TryParse(popupWidthInput.text, out width);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_0 = __this->get_popupWidthInput_25();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_1, (int32_t*)(&V_0), /*hidden argument*/NULL);
		// int.TryParse(popupHeightInput.text, out height);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_3 = __this->get_popupHeightInput_26();
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_4, (int32_t*)(&V_1), /*hidden argument*/NULL);
		// GpmWebView.SetSize(width, height);
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		GpmWebView_SetSize_m8FE047C088844B2FDA664CB71AE2BD1807DFF885(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::SetMargins()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_SetMargins_mA7A7EEC54AF66AFE27C9145E1041C506C628CC38 (SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// int left = 0;
		V_0 = 0;
		// int top = 0;
		V_1 = 0;
		// int right = 0;
		V_2 = 0;
		// int bottom = 0;
		V_3 = 0;
		// int.TryParse(popupMarginsLeftInput.text, out left);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_0 = __this->get_popupMarginsLeftInput_27();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_1, (int32_t*)(&V_0), /*hidden argument*/NULL);
		// int.TryParse(popupMarginsTopInput.text, out top);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_3 = __this->get_popupMarginsTopInput_28();
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_4, (int32_t*)(&V_1), /*hidden argument*/NULL);
		// int.TryParse(popupMarginsRightInput.text, out right);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_6 = __this->get_popupMarginsRightInput_29();
		NullCheck(L_6);
		String_t* L_7;
		L_7 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_6, /*hidden argument*/NULL);
		bool L_8;
		L_8 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_7, (int32_t*)(&V_2), /*hidden argument*/NULL);
		// int.TryParse(popupMarginsBottomInput.text, out bottom);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_9 = __this->get_popupMarginsBottomInput_30();
		NullCheck(L_9);
		String_t* L_10;
		L_10 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_9, /*hidden argument*/NULL);
		bool L_11;
		L_11 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_10, (int32_t*)(&V_3), /*hidden argument*/NULL);
		// GpmWebView.SetMargins(left, top, right, bottom);
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		GpmWebView_SetMargins_m9A5ABED63BB55664C602CE3360795FEDDC4A2233(L_12, L_13, L_14, L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::ResetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_ResetPosition_m0D907B561F8066CF4C23D2FBDF1003A4B7064200 (SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// popupXInput.text = string.Empty;
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_0 = __this->get_popupXInput_23();
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_0);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_0, L_1, /*hidden argument*/NULL);
		// popupYInput.text = string.Empty;
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_2 = __this->get_popupYInput_24();
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_2);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::ResetSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_ResetSize_mEE416116140F7B6A233B9B15D16681A61E6B075D (SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// popupWidthInput.text = string.Empty;
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_0 = __this->get_popupWidthInput_25();
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_0);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_0, L_1, /*hidden argument*/NULL);
		// popupHeightInput.text = string.Empty;
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_2 = __this->get_popupHeightInput_26();
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_2);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::ResetMargins()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_ResetMargins_mEBD1B40D14F430D7B275D3A1BB3B6B37DD1853FE (SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// popupMarginsLeftInput.text = string.Empty;
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_0 = __this->get_popupMarginsLeftInput_27();
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_0);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_0, L_1, /*hidden argument*/NULL);
		// popupMarginsTopInput.text = string.Empty;
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_2 = __this->get_popupMarginsTopInput_28();
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_2);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_2, L_3, /*hidden argument*/NULL);
		// popupMarginsRightInput.text = string.Empty;
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_4 = __this->get_popupMarginsRightInput_29();
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_4);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_4, L_5, /*hidden argument*/NULL);
		// popupMarginsBottomInput.text = string.Empty;
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_6 = __this->get_popupMarginsBottomInput_30();
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_6);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView__ctor_m30342DACF6038C2C8B82A73C731F729743FF8002 (SampleWebView_tEDD4A920C45B75E2F28E264F71E44B1E98FCCC88 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// Gpm.WebView.Internal.WebViewImplementation Gpm.WebView.Internal.WebViewImplementation::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * WebViewImplementation_get_Instance_m15928AE1C49475334670988A6D73B5DBD1D9CC84 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return instance; }
		IL2CPP_RUNTIME_CLASS_INIT(WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * L_0 = ((WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_StaticFields*)il2cpp_codegen_static_fields_for(WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var))->get_instance_0();
		return L_0;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation__ctor_m11BFE4FC74BE6803D00571F7DC60709FC78FE184 (WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOSWebView_tAA6DC2B33D6BA965C3B791BDD1DE99D53953F70C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private WebViewImplementation()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// webview = new IOSWebView();
		IOSWebView_tAA6DC2B33D6BA965C3B791BDD1DE99D53953F70C * L_0 = (IOSWebView_tAA6DC2B33D6BA965C3B791BDD1DE99D53953F70C *)il2cpp_codegen_object_new(IOSWebView_tAA6DC2B33D6BA965C3B791BDD1DE99D53953F70C_il2cpp_TypeInfo_var);
		IOSWebView__ctor_mCFB9C81F42352A56E14EE4F9CE24384D839D67E6(L_0, /*hidden argument*/NULL);
		__this->set_webview_1(L_0);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::ShowUrl(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_ShowUrl_mB307C87DF45A37188203BFDBC49F85904068C1D8 (WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * __this, String_t* ___url0, Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * ___configuration1, GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * ___callback2, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___schemeList3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t5246E4E6E8FF2346601F8F64D333E638126A65D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// webview.ShowUrl(url, configuration, callback, schemeList);
		RuntimeObject* L_0 = __this->get_webview_1();
		String_t* L_1 = ___url0;
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_2 = ___configuration1;
		GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * L_3 = ___callback2;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_4 = ___schemeList3;
		NullCheck(L_0);
		InterfaceActionInvoker4< String_t*, Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 *, GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 *, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * >::Invoke(0 /* System.Void Gpm.WebView.Internal.IWebView::ShowUrl(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>) */, IWebView_t5246E4E6E8FF2346601F8F64D333E638126A65D8_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::ShowHtmlFile(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_ShowHtmlFile_m9BB5487EDE02A0F86581616CC884E5BD52BD3020 (WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * __this, String_t* ___filePath0, Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * ___configuration1, GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * ___callback2, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___schemeList3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t5246E4E6E8FF2346601F8F64D333E638126A65D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// webview.ShowHtmlFile(filePath, configuration, callback, schemeList);
		RuntimeObject* L_0 = __this->get_webview_1();
		String_t* L_1 = ___filePath0;
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_2 = ___configuration1;
		GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * L_3 = ___callback2;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_4 = ___schemeList3;
		NullCheck(L_0);
		InterfaceActionInvoker4< String_t*, Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 *, GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 *, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * >::Invoke(1 /* System.Void Gpm.WebView.Internal.IWebView::ShowHtmlFile(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>) */, IWebView_t5246E4E6E8FF2346601F8F64D333E638126A65D8_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::ShowHtmlString(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_ShowHtmlString_m501616B1ED0F14042FECA25BB9DFDC0DE9E00C91 (WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * __this, String_t* ___htmlString0, Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * ___configuration1, GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * ___callback2, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___schemeList3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t5246E4E6E8FF2346601F8F64D333E638126A65D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// webview.ShowHtmlString(htmlString, configuration, callback, schemeList);
		RuntimeObject* L_0 = __this->get_webview_1();
		String_t* L_1 = ___htmlString0;
		Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * L_2 = ___configuration1;
		GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * L_3 = ___callback2;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_4 = ___schemeList3;
		NullCheck(L_0);
		InterfaceActionInvoker4< String_t*, Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 *, GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 *, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * >::Invoke(2 /* System.Void Gpm.WebView.Internal.IWebView::ShowHtmlString(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>) */, IWebView_t5246E4E6E8FF2346601F8F64D333E638126A65D8_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::ShowSafeBrowsing(System.String,Gpm.WebView.GpmWebViewRequest/ConfigurationSafeBrowsing,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_ShowSafeBrowsing_m96E23FF80A985DB1DAB063636007F669BE085F4F (WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * __this, String_t* ___url0, ConfigurationSafeBrowsing_t1E8DF97EEABF137067881FFF0A185D5B9921C6F9 * ___configuration1, GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * ___callback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t5246E4E6E8FF2346601F8F64D333E638126A65D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// webview.ShowSafeBrowsing(url, configuration, callback);
		RuntimeObject* L_0 = __this->get_webview_1();
		String_t* L_1 = ___url0;
		ConfigurationSafeBrowsing_t1E8DF97EEABF137067881FFF0A185D5B9921C6F9 * L_2 = ___configuration1;
		GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * L_3 = ___callback2;
		NullCheck(L_0);
		InterfaceActionInvoker3< String_t*, ConfigurationSafeBrowsing_t1E8DF97EEABF137067881FFF0A185D5B9921C6F9 *, GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * >::Invoke(3 /* System.Void Gpm.WebView.Internal.IWebView::ShowSafeBrowsing(System.String,Gpm.WebView.GpmWebViewRequest/ConfigurationSafeBrowsing,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate) */, IWebView_t5246E4E6E8FF2346601F8F64D333E638126A65D8_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_Close_m2718043CB497129FDEDE8037AEB9FC5619DD19A5 (WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t5246E4E6E8FF2346601F8F64D333E638126A65D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// webview.Close();
		RuntimeObject* L_0 = __this->get_webview_1();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(4 /* System.Void Gpm.WebView.Internal.IWebView::Close() */, IWebView_t5246E4E6E8FF2346601F8F64D333E638126A65D8_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Boolean Gpm.WebView.Internal.WebViewImplementation::IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebViewImplementation_IsActive_m5610B18C1B85C8FC817C80D0ACE2029D2389BA24 (WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t5246E4E6E8FF2346601F8F64D333E638126A65D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return webview.IsActive();
		RuntimeObject* L_0 = __this->get_webview_1();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean Gpm.WebView.Internal.IWebView::IsActive() */, IWebView_t5246E4E6E8FF2346601F8F64D333E638126A65D8_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::ExecuteJavaScript(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_ExecuteJavaScript_m0EB9DBA1F9D960BC9D2264D70FFC6299C700BD21 (WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * __this, String_t* ___script0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t5246E4E6E8FF2346601F8F64D333E638126A65D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// webview.ExecuteJavaScript(script);
		RuntimeObject* L_0 = __this->get_webview_1();
		String_t* L_1 = ___script0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(6 /* System.Void Gpm.WebView.Internal.IWebView::ExecuteJavaScript(System.String) */, IWebView_t5246E4E6E8FF2346601F8F64D333E638126A65D8_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::SetFileDownloadPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_SetFileDownloadPath_m22863AE82E40E129B20CD795B3058D6AF83DB62B (WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * __this, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t5246E4E6E8FF2346601F8F64D333E638126A65D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// webview.SetFileDownloadPath(path);
		RuntimeObject* L_0 = __this->get_webview_1();
		String_t* L_1 = ___path0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(7 /* System.Void Gpm.WebView.Internal.IWebView::SetFileDownloadPath(System.String) */, IWebView_t5246E4E6E8FF2346601F8F64D333E638126A65D8_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Boolean Gpm.WebView.Internal.WebViewImplementation::CanGoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebViewImplementation_CanGoBack_m1E4370D9E071B4620ED85D95723ABBC9E04231A8 (WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t5246E4E6E8FF2346601F8F64D333E638126A65D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return webview.CanGoBack;
		RuntimeObject* L_0 = __this->get_webview_1();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(8 /* System.Boolean Gpm.WebView.Internal.IWebView::get_CanGoBack() */, IWebView_t5246E4E6E8FF2346601F8F64D333E638126A65D8_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean Gpm.WebView.Internal.WebViewImplementation::CanGoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebViewImplementation_CanGoForward_m6A97E9144295A04002DBD85001B80A6354A153D9 (WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t5246E4E6E8FF2346601F8F64D333E638126A65D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return webview.CanGoForward;
		RuntimeObject* L_0 = __this->get_webview_1();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(9 /* System.Boolean Gpm.WebView.Internal.IWebView::get_CanGoForward() */, IWebView_t5246E4E6E8FF2346601F8F64D333E638126A65D8_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::GoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_GoBack_mA3E51D4751ACF48E3EED6D48F34B32AF9F9F2906 (WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t5246E4E6E8FF2346601F8F64D333E638126A65D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// webview.GoBack();
		RuntimeObject* L_0 = __this->get_webview_1();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(10 /* System.Void Gpm.WebView.Internal.IWebView::GoBack() */, IWebView_t5246E4E6E8FF2346601F8F64D333E638126A65D8_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::GoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_GoForward_m2268748CFE86B8A463A627B106CDBAAF39A46C2E (WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t5246E4E6E8FF2346601F8F64D333E638126A65D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// webview.GoForward();
		RuntimeObject* L_0 = __this->get_webview_1();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(11 /* System.Void Gpm.WebView.Internal.IWebView::GoForward() */, IWebView_t5246E4E6E8FF2346601F8F64D333E638126A65D8_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::SetPosition(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_SetPosition_m89D33D289444D0FF4B47307CD8BB33BCC165DFB8 (WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t5246E4E6E8FF2346601F8F64D333E638126A65D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// webview.SetPosition(x, y);
		RuntimeObject* L_0 = __this->get_webview_1();
		int32_t L_1 = ___x0;
		int32_t L_2 = ___y1;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, int32_t >::Invoke(12 /* System.Void Gpm.WebView.Internal.IWebView::SetPosition(System.Int32,System.Int32) */, IWebView_t5246E4E6E8FF2346601F8F64D333E638126A65D8_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::SetSize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_SetSize_m0D2E90E7AEC9EE4FA2F6F5FD77E4B6A513A038B3 (WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t5246E4E6E8FF2346601F8F64D333E638126A65D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// webview.SetSize(width, height);
		RuntimeObject* L_0 = __this->get_webview_1();
		int32_t L_1 = ___width0;
		int32_t L_2 = ___height1;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, int32_t >::Invoke(13 /* System.Void Gpm.WebView.Internal.IWebView::SetSize(System.Int32,System.Int32) */, IWebView_t5246E4E6E8FF2346601F8F64D333E638126A65D8_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::SetMargins(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_SetMargins_mB6F4F3D57E7F3C3629B84E7327A246699FAFDC9E (WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * __this, int32_t ___left0, int32_t ___top1, int32_t ___right2, int32_t ___bottom3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t5246E4E6E8FF2346601F8F64D333E638126A65D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// webview.SetMargins(left, top, right, bottom);
		RuntimeObject* L_0 = __this->get_webview_1();
		int32_t L_1 = ___left0;
		int32_t L_2 = ___top1;
		int32_t L_3 = ___right2;
		int32_t L_4 = ___bottom3;
		NullCheck(L_0);
		InterfaceActionInvoker4< int32_t, int32_t, int32_t, int32_t >::Invoke(14 /* System.Void Gpm.WebView.Internal.IWebView::SetMargins(System.Int32,System.Int32,System.Int32,System.Int32) */, IWebView_t5246E4E6E8FF2346601F8F64D333E638126A65D8_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4);
		// }
		return;
	}
}
// System.Int32 Gpm.WebView.Internal.WebViewImplementation::GetX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebViewImplementation_GetX_m760AD0D29A24D8CBB65F512C01B712A3E9A597FF (WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t5246E4E6E8FF2346601F8F64D333E638126A65D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return webview.GetX();
		RuntimeObject* L_0 = __this->get_webview_1();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 Gpm.WebView.Internal.IWebView::GetX() */, IWebView_t5246E4E6E8FF2346601F8F64D333E638126A65D8_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Int32 Gpm.WebView.Internal.WebViewImplementation::GetY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebViewImplementation_GetY_m9DF86FEC263D0C5AED35604011FD01E3002E8F91 (WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t5246E4E6E8FF2346601F8F64D333E638126A65D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return webview.GetY();
		RuntimeObject* L_0 = __this->get_webview_1();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 Gpm.WebView.Internal.IWebView::GetY() */, IWebView_t5246E4E6E8FF2346601F8F64D333E638126A65D8_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Int32 Gpm.WebView.Internal.WebViewImplementation::GetWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebViewImplementation_GetWidth_m1A4AD15DDD9E897B31C96213E8F120F7B44FFB04 (WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t5246E4E6E8FF2346601F8F64D333E638126A65D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return webview.GetWidth();
		RuntimeObject* L_0 = __this->get_webview_1();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 Gpm.WebView.Internal.IWebView::GetWidth() */, IWebView_t5246E4E6E8FF2346601F8F64D333E638126A65D8_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Int32 Gpm.WebView.Internal.WebViewImplementation::GetHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebViewImplementation_GetHeight_mAA952B174921ACE85B3FB047743164568E95B8BA (WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t5246E4E6E8FF2346601F8F64D333E638126A65D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return webview.GetHeight();
		RuntimeObject* L_0 = __this->get_webview_1();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 Gpm.WebView.Internal.IWebView::GetHeight() */, IWebView_t5246E4E6E8FF2346601F8F64D333E638126A65D8_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::ShowWebBrowser(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_ShowWebBrowser_m5703D26093DFA7184ABC0AA8A7A654A840D2A354 (WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * __this, String_t* ___url0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t5246E4E6E8FF2346601F8F64D333E638126A65D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// webview.ShowWebBrowser(url);
		RuntimeObject* L_0 = __this->get_webview_1();
		String_t* L_1 = ___url0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(19 /* System.Void Gpm.WebView.Internal.IWebView::ShowWebBrowser(System.String) */, IWebView_t5246E4E6E8FF2346601F8F64D333E638126A65D8_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation__cctor_mB2EB457C2826CA98A1175B994ECDBAF5B4673F7F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly WebViewImplementation instance = new WebViewImplementation();
		WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * L_0 = (WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A *)il2cpp_codegen_object_new(WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		WebViewImplementation__ctor_m11BFE4FC74BE6803D00571F7DC60709FC78FE184(L_0, /*hidden argument*/NULL);
		((WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_StaticFields*)il2cpp_codegen_static_fields_for(WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var))->set_instance_0(L_0);
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
// System.Void Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebViewDelegate__ctor_m5AD431E00195331A1BB8DD00CBAFEFCAAE6F8C08 (GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate::Invoke(Gpm.WebView.GpmWebViewCallback/CallbackType,System.String,Gpm.WebView.GpmWebViewError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebViewDelegate_Invoke_m6A2C3F1D6A617E1CD749B7436B1F2A17D5400928 (GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * __this, int32_t ___type0, String_t* ___data1, GpmWebViewError_tBDC438A993BE136762458A7B80E9FC35C32F8C21 * ___error2, const RuntimeMethod* method)
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
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, String_t*, GpmWebViewError_tBDC438A993BE136762458A7B80E9FC35C32F8C21 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___type0, ___data1, ___error2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, String_t*, GpmWebViewError_tBDC438A993BE136762458A7B80E9FC35C32F8C21 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___type0, ___data1, ___error2, targetMethod);
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
						GenericInterfaceActionInvoker3< int32_t, String_t*, GpmWebViewError_tBDC438A993BE136762458A7B80E9FC35C32F8C21 * >::Invoke(targetMethod, targetThis, ___type0, ___data1, ___error2);
					else
						GenericVirtActionInvoker3< int32_t, String_t*, GpmWebViewError_tBDC438A993BE136762458A7B80E9FC35C32F8C21 * >::Invoke(targetMethod, targetThis, ___type0, ___data1, ___error2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, String_t*, GpmWebViewError_tBDC438A993BE136762458A7B80E9FC35C32F8C21 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___type0, ___data1, ___error2);
					else
						VirtActionInvoker3< int32_t, String_t*, GpmWebViewError_tBDC438A993BE136762458A7B80E9FC35C32F8C21 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___type0, ___data1, ___error2);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, GpmWebViewError_tBDC438A993BE136762458A7B80E9FC35C32F8C21 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___type0) - 1), ___data1, ___error2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, String_t*, GpmWebViewError_tBDC438A993BE136762458A7B80E9FC35C32F8C21 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___type0, ___data1, ___error2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate::BeginInvoke(Gpm.WebView.GpmWebViewCallback/CallbackType,System.String,Gpm.WebView.GpmWebViewError,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GpmWebViewDelegate_BeginInvoke_mED97BAB136AEC1C7DEAD671EC692DA2B7FD7299E (GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * __this, int32_t ___type0, String_t* ___data1, GpmWebViewError_tBDC438A993BE136762458A7B80E9FC35C32F8C21 * ___error2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackType_t6E0F72D8FA9985F30CE3B7DBD1FBA5BF7F43246D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(CallbackType_t6E0F72D8FA9985F30CE3B7DBD1FBA5BF7F43246D_il2cpp_TypeInfo_var, &___type0);
	__d_args[1] = ___data1;
	__d_args[2] = ___error2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebViewDelegate_EndInvoke_mA790E2A441FBE31D87481552F027B683CAE243A3 (GpmWebViewDelegate_t394694B3BFF6C93233501CFEAD8A63EEC04EF526 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Gpm.WebView.GpmWebViewRequest/Configuration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration__ctor_mAA46949E164E88806E8653429FDC7B11A43F4A7C (Configuration_t1FB7D0304D6A9861DE2A2913405F385937861425 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral663488ABE057592166FC68C8A6EF26CBF9C8178E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA68DCEC5DF5C9D1BAB1EB121891A32269876B92);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string backgroundColor = "#FFFFFF";
		__this->set_backgroundColor_4(_stringLiteral663488ABE057592166FC68C8A6EF26CBF9C8178E);
		// public string navigationBarColor = "#4B96E6";
		__this->set_navigationBarColor_6(_stringLiteralEA68DCEC5DF5C9D1BAB1EB121891A32269876B92);
		// public string userAgentString = "";
		__this->set_userAgentString_12(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string addJavascript = "";
		__this->set_addJavascript_13(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
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
// System.Void Gpm.WebView.GpmWebViewRequest/ConfigurationSafeBrowsing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationSafeBrowsing__ctor_m936CD80EDDA42ECCB20CA93F066572032A7FCECD (ConfigurationSafeBrowsing_t1E8DF97EEABF137067881FFF0A185D5B9921C6F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral663488ABE057592166FC68C8A6EF26CBF9C8178E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA68DCEC5DF5C9D1BAB1EB121891A32269876B92);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string navigationBarColor = "#4B96E6";
		__this->set_navigationBarColor_0(_stringLiteralEA68DCEC5DF5C9D1BAB1EB121891A32269876B92);
		// public string navigationTextColor = "#FFFFFF";
		__this->set_navigationTextColor_1(_stringLiteral663488ABE057592166FC68C8A6EF26CBF9C8178E);
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
// System.Void Gpm.WebView.GpmWebViewRequest/CustomSchemePostCommand::Close(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomSchemePostCommand_Close_mF39C116A9B1F44A9F78663B3B888814C3B8D16A6 (CustomSchemePostCommand_t25DC04BF3BCCC447F4AED01102F27DAC5B04561A * __this, String_t* ___customScheme0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral093507DEB05FB14DD8659BC619825EC3274FD8C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		s_Il2CppMethodInitialized = true;
	}
	{
		// commandList.Add(string.Join(GpmWebViewCustomSchemeCommand.SEPARATOR, customScheme, GpmWebViewCustomSchemeCommand.COMMAND_CLOSE));
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_commandList_0();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		String_t* L_3 = ___customScheme0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral093507DEB05FB14DD8659BC619825EC3274FD8C6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral093507DEB05FB14DD8659BC619825EC3274FD8C6);
		String_t* L_5;
		L_5 = String_Join_m8846EB11F0A221BDE237DE041D17764B36065404(_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_0, L_5, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Gpm.WebView.GpmWebViewRequest/CustomSchemePostCommand::LoadUrl(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomSchemePostCommand_LoadUrl_m718BF4EB62F08D13CB313094B140D5218CA00C5C (CustomSchemePostCommand_t25DC04BF3BCCC447F4AED01102F27DAC5B04561A * __this, String_t* ___customScheme0, String_t* ___url1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral376A5604328B846CD33630B4AFA7D547D0BD69BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		s_Il2CppMethodInitialized = true;
	}
	{
		// commandList.Add(string.Join(GpmWebViewCustomSchemeCommand.SEPARATOR, customScheme, GpmWebViewCustomSchemeCommand.COMMAND_LOAD_URL, url));
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_commandList_0();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		String_t* L_3 = ___customScheme0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral376A5604328B846CD33630B4AFA7D547D0BD69BE);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral376A5604328B846CD33630B4AFA7D547D0BD69BE);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		String_t* L_6 = ___url1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_6);
		String_t* L_7;
		L_7 = String_Join_m8846EB11F0A221BDE237DE041D17764B36065404(_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, L_5, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_0, L_7, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Gpm.WebView.GpmWebViewRequest/CustomSchemePostCommand::ExecuteJavascript(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomSchemePostCommand_ExecuteJavascript_m9A49EF562924F1738D7ED066AB9828362EABE987 (CustomSchemePostCommand_t25DC04BF3BCCC447F4AED01102F27DAC5B04561A * __this, String_t* ___customScheme0, String_t* ___script1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB55FBB16F1E36A507754DAF6FEBD2C683933A109);
		s_Il2CppMethodInitialized = true;
	}
	{
		// commandList.Add(string.Join(GpmWebViewCustomSchemeCommand.SEPARATOR, customScheme, GpmWebViewCustomSchemeCommand.COMMAND_EXECUTE_JAVASCRIPT, script));
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_commandList_0();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		String_t* L_3 = ___customScheme0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralB55FBB16F1E36A507754DAF6FEBD2C683933A109);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralB55FBB16F1E36A507754DAF6FEBD2C683933A109);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		String_t* L_6 = ___script1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_6);
		String_t* L_7;
		L_7 = String_Join_m8846EB11F0A221BDE237DE041D17764B36065404(_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, L_5, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_0, L_7, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Gpm.WebView.GpmWebViewRequest/CustomSchemePostCommand::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomSchemePostCommand__ctor_mD72A838B78E510B5A06CECC23E4753BFE3EA08B9 (CustomSchemePostCommand_t25DC04BF3BCCC447F4AED01102F27DAC5B04561A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<string> commandList = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_commandList_0(L_0);
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
// Conversion methods for marshalling of: Gpm.WebView.GpmWebViewRequest/Margins
IL2CPP_EXTERN_C void Margins_tE71166091954A97FE414FCDA43759AAC56D9688F_marshal_pinvoke(const Margins_tE71166091954A97FE414FCDA43759AAC56D9688F& unmarshaled, Margins_tE71166091954A97FE414FCDA43759AAC56D9688F_marshaled_pinvoke& marshaled)
{
	marshaled.___hasValue_0 = static_cast<int32_t>(unmarshaled.get_hasValue_0());
	marshaled.___left_1 = unmarshaled.get_left_1();
	marshaled.___top_2 = unmarshaled.get_top_2();
	marshaled.___right_3 = unmarshaled.get_right_3();
	marshaled.___bottom_4 = unmarshaled.get_bottom_4();
}
IL2CPP_EXTERN_C void Margins_tE71166091954A97FE414FCDA43759AAC56D9688F_marshal_pinvoke_back(const Margins_tE71166091954A97FE414FCDA43759AAC56D9688F_marshaled_pinvoke& marshaled, Margins_tE71166091954A97FE414FCDA43759AAC56D9688F& unmarshaled)
{
	bool unmarshaled_hasValue_temp_0 = false;
	unmarshaled_hasValue_temp_0 = static_cast<bool>(marshaled.___hasValue_0);
	unmarshaled.set_hasValue_0(unmarshaled_hasValue_temp_0);
	int32_t unmarshaled_left_temp_1 = 0;
	unmarshaled_left_temp_1 = marshaled.___left_1;
	unmarshaled.set_left_1(unmarshaled_left_temp_1);
	int32_t unmarshaled_top_temp_2 = 0;
	unmarshaled_top_temp_2 = marshaled.___top_2;
	unmarshaled.set_top_2(unmarshaled_top_temp_2);
	int32_t unmarshaled_right_temp_3 = 0;
	unmarshaled_right_temp_3 = marshaled.___right_3;
	unmarshaled.set_right_3(unmarshaled_right_temp_3);
	int32_t unmarshaled_bottom_temp_4 = 0;
	unmarshaled_bottom_temp_4 = marshaled.___bottom_4;
	unmarshaled.set_bottom_4(unmarshaled_bottom_temp_4);
}
// Conversion method for clean up from marshalling of: Gpm.WebView.GpmWebViewRequest/Margins
IL2CPP_EXTERN_C void Margins_tE71166091954A97FE414FCDA43759AAC56D9688F_marshal_pinvoke_cleanup(Margins_tE71166091954A97FE414FCDA43759AAC56D9688F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Gpm.WebView.GpmWebViewRequest/Margins
IL2CPP_EXTERN_C void Margins_tE71166091954A97FE414FCDA43759AAC56D9688F_marshal_com(const Margins_tE71166091954A97FE414FCDA43759AAC56D9688F& unmarshaled, Margins_tE71166091954A97FE414FCDA43759AAC56D9688F_marshaled_com& marshaled)
{
	marshaled.___hasValue_0 = static_cast<int32_t>(unmarshaled.get_hasValue_0());
	marshaled.___left_1 = unmarshaled.get_left_1();
	marshaled.___top_2 = unmarshaled.get_top_2();
	marshaled.___right_3 = unmarshaled.get_right_3();
	marshaled.___bottom_4 = unmarshaled.get_bottom_4();
}
IL2CPP_EXTERN_C void Margins_tE71166091954A97FE414FCDA43759AAC56D9688F_marshal_com_back(const Margins_tE71166091954A97FE414FCDA43759AAC56D9688F_marshaled_com& marshaled, Margins_tE71166091954A97FE414FCDA43759AAC56D9688F& unmarshaled)
{
	bool unmarshaled_hasValue_temp_0 = false;
	unmarshaled_hasValue_temp_0 = static_cast<bool>(marshaled.___hasValue_0);
	unmarshaled.set_hasValue_0(unmarshaled_hasValue_temp_0);
	int32_t unmarshaled_left_temp_1 = 0;
	unmarshaled_left_temp_1 = marshaled.___left_1;
	unmarshaled.set_left_1(unmarshaled_left_temp_1);
	int32_t unmarshaled_top_temp_2 = 0;
	unmarshaled_top_temp_2 = marshaled.___top_2;
	unmarshaled.set_top_2(unmarshaled_top_temp_2);
	int32_t unmarshaled_right_temp_3 = 0;
	unmarshaled_right_temp_3 = marshaled.___right_3;
	unmarshaled.set_right_3(unmarshaled_right_temp_3);
	int32_t unmarshaled_bottom_temp_4 = 0;
	unmarshaled_bottom_temp_4 = marshaled.___bottom_4;
	unmarshaled.set_bottom_4(unmarshaled_bottom_temp_4);
}
// Conversion method for clean up from marshalling of: Gpm.WebView.GpmWebViewRequest/Margins
IL2CPP_EXTERN_C void Margins_tE71166091954A97FE414FCDA43759AAC56D9688F_marshal_com_cleanup(Margins_tE71166091954A97FE414FCDA43759AAC56D9688F_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Gpm.WebView.GpmWebViewRequest/Position
IL2CPP_EXTERN_C void Position_tE389F0309F8DE9F2BB96E471C81D09AE285E0701_marshal_pinvoke(const Position_tE389F0309F8DE9F2BB96E471C81D09AE285E0701& unmarshaled, Position_tE389F0309F8DE9F2BB96E471C81D09AE285E0701_marshaled_pinvoke& marshaled)
{
	marshaled.___hasValue_0 = static_cast<int32_t>(unmarshaled.get_hasValue_0());
	marshaled.___x_1 = unmarshaled.get_x_1();
	marshaled.___y_2 = unmarshaled.get_y_2();
}
IL2CPP_EXTERN_C void Position_tE389F0309F8DE9F2BB96E471C81D09AE285E0701_marshal_pinvoke_back(const Position_tE389F0309F8DE9F2BB96E471C81D09AE285E0701_marshaled_pinvoke& marshaled, Position_tE389F0309F8DE9F2BB96E471C81D09AE285E0701& unmarshaled)
{
	bool unmarshaled_hasValue_temp_0 = false;
	unmarshaled_hasValue_temp_0 = static_cast<bool>(marshaled.___hasValue_0);
	unmarshaled.set_hasValue_0(unmarshaled_hasValue_temp_0);
	int32_t unmarshaled_x_temp_1 = 0;
	unmarshaled_x_temp_1 = marshaled.___x_1;
	unmarshaled.set_x_1(unmarshaled_x_temp_1);
	int32_t unmarshaled_y_temp_2 = 0;
	unmarshaled_y_temp_2 = marshaled.___y_2;
	unmarshaled.set_y_2(unmarshaled_y_temp_2);
}
// Conversion method for clean up from marshalling of: Gpm.WebView.GpmWebViewRequest/Position
IL2CPP_EXTERN_C void Position_tE389F0309F8DE9F2BB96E471C81D09AE285E0701_marshal_pinvoke_cleanup(Position_tE389F0309F8DE9F2BB96E471C81D09AE285E0701_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Gpm.WebView.GpmWebViewRequest/Position
IL2CPP_EXTERN_C void Position_tE389F0309F8DE9F2BB96E471C81D09AE285E0701_marshal_com(const Position_tE389F0309F8DE9F2BB96E471C81D09AE285E0701& unmarshaled, Position_tE389F0309F8DE9F2BB96E471C81D09AE285E0701_marshaled_com& marshaled)
{
	marshaled.___hasValue_0 = static_cast<int32_t>(unmarshaled.get_hasValue_0());
	marshaled.___x_1 = unmarshaled.get_x_1();
	marshaled.___y_2 = unmarshaled.get_y_2();
}
IL2CPP_EXTERN_C void Position_tE389F0309F8DE9F2BB96E471C81D09AE285E0701_marshal_com_back(const Position_tE389F0309F8DE9F2BB96E471C81D09AE285E0701_marshaled_com& marshaled, Position_tE389F0309F8DE9F2BB96E471C81D09AE285E0701& unmarshaled)
{
	bool unmarshaled_hasValue_temp_0 = false;
	unmarshaled_hasValue_temp_0 = static_cast<bool>(marshaled.___hasValue_0);
	unmarshaled.set_hasValue_0(unmarshaled_hasValue_temp_0);
	int32_t unmarshaled_x_temp_1 = 0;
	unmarshaled_x_temp_1 = marshaled.___x_1;
	unmarshaled.set_x_1(unmarshaled_x_temp_1);
	int32_t unmarshaled_y_temp_2 = 0;
	unmarshaled_y_temp_2 = marshaled.___y_2;
	unmarshaled.set_y_2(unmarshaled_y_temp_2);
}
// Conversion method for clean up from marshalling of: Gpm.WebView.GpmWebViewRequest/Position
IL2CPP_EXTERN_C void Position_tE389F0309F8DE9F2BB96E471C81D09AE285E0701_marshal_com_cleanup(Position_tE389F0309F8DE9F2BB96E471C81D09AE285E0701_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Gpm.WebView.GpmWebViewRequest/Size
IL2CPP_EXTERN_C void Size_t92BB328622E7C6869FBF329D08E72EE0D18C8751_marshal_pinvoke(const Size_t92BB328622E7C6869FBF329D08E72EE0D18C8751& unmarshaled, Size_t92BB328622E7C6869FBF329D08E72EE0D18C8751_marshaled_pinvoke& marshaled)
{
	marshaled.___hasValue_0 = static_cast<int32_t>(unmarshaled.get_hasValue_0());
	marshaled.___width_1 = unmarshaled.get_width_1();
	marshaled.___height_2 = unmarshaled.get_height_2();
}
IL2CPP_EXTERN_C void Size_t92BB328622E7C6869FBF329D08E72EE0D18C8751_marshal_pinvoke_back(const Size_t92BB328622E7C6869FBF329D08E72EE0D18C8751_marshaled_pinvoke& marshaled, Size_t92BB328622E7C6869FBF329D08E72EE0D18C8751& unmarshaled)
{
	bool unmarshaled_hasValue_temp_0 = false;
	unmarshaled_hasValue_temp_0 = static_cast<bool>(marshaled.___hasValue_0);
	unmarshaled.set_hasValue_0(unmarshaled_hasValue_temp_0);
	int32_t unmarshaled_width_temp_1 = 0;
	unmarshaled_width_temp_1 = marshaled.___width_1;
	unmarshaled.set_width_1(unmarshaled_width_temp_1);
	int32_t unmarshaled_height_temp_2 = 0;
	unmarshaled_height_temp_2 = marshaled.___height_2;
	unmarshaled.set_height_2(unmarshaled_height_temp_2);
}
// Conversion method for clean up from marshalling of: Gpm.WebView.GpmWebViewRequest/Size
IL2CPP_EXTERN_C void Size_t92BB328622E7C6869FBF329D08E72EE0D18C8751_marshal_pinvoke_cleanup(Size_t92BB328622E7C6869FBF329D08E72EE0D18C8751_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Gpm.WebView.GpmWebViewRequest/Size
IL2CPP_EXTERN_C void Size_t92BB328622E7C6869FBF329D08E72EE0D18C8751_marshal_com(const Size_t92BB328622E7C6869FBF329D08E72EE0D18C8751& unmarshaled, Size_t92BB328622E7C6869FBF329D08E72EE0D18C8751_marshaled_com& marshaled)
{
	marshaled.___hasValue_0 = static_cast<int32_t>(unmarshaled.get_hasValue_0());
	marshaled.___width_1 = unmarshaled.get_width_1();
	marshaled.___height_2 = unmarshaled.get_height_2();
}
IL2CPP_EXTERN_C void Size_t92BB328622E7C6869FBF329D08E72EE0D18C8751_marshal_com_back(const Size_t92BB328622E7C6869FBF329D08E72EE0D18C8751_marshaled_com& marshaled, Size_t92BB328622E7C6869FBF329D08E72EE0D18C8751& unmarshaled)
{
	bool unmarshaled_hasValue_temp_0 = false;
	unmarshaled_hasValue_temp_0 = static_cast<bool>(marshaled.___hasValue_0);
	unmarshaled.set_hasValue_0(unmarshaled_hasValue_temp_0);
	int32_t unmarshaled_width_temp_1 = 0;
	unmarshaled_width_temp_1 = marshaled.___width_1;
	unmarshaled.set_width_1(unmarshaled_width_temp_1);
	int32_t unmarshaled_height_temp_2 = 0;
	unmarshaled_height_temp_2 = marshaled.___height_2;
	unmarshaled.set_height_2(unmarshaled_height_temp_2);
}
// Conversion method for clean up from marshalling of: Gpm.WebView.GpmWebViewRequest/Size
IL2CPP_EXTERN_C void Size_t92BB328622E7C6869FBF329D08E72EE0D18C8751_marshal_com_cleanup(Size_t92BB328622E7C6869FBF329D08E72EE0D18C8751_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Gpm.WebView.Internal.NativeRequest/Configuration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration__ctor_mA46EFD43B8603FF3B0C3630B4B3A257CED09820D (Configuration_tE4D03C8499F15D8546B19F042B85DD7E3DB994F8 * __this, const RuntimeMethod* method)
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
// System.Void Gpm.WebView.Internal.NativeRequest/ConfigurationSafeBrowsing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationSafeBrowsing__ctor_mBEF49962D8F9BCD70F519649F5ABE8EA9EB229B9 (ConfigurationSafeBrowsing_t94FB8E4680C3B6D1E293B895BA7F753BBAB0527D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral663488ABE057592166FC68C8A6EF26CBF9C8178E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA68DCEC5DF5C9D1BAB1EB121891A32269876B92);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string navigationBarColor = "#4B96E6";
		__this->set_navigationBarColor_0(_stringLiteralEA68DCEC5DF5C9D1BAB1EB121891A32269876B92);
		// public string navigationTextColor = "#FFFFFF";
		__this->set_navigationTextColor_1(_stringLiteral663488ABE057592166FC68C8A6EF26CBF9C8178E);
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
// System.Void Gpm.WebView.Internal.NativeRequest/ExecuteJavaScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecuteJavaScript__ctor_m6020928E8422E5DF96C26BCFEAB510B78D6D682F (ExecuteJavaScript_t149D2FB7BCB60A39444FC3DA705EB898DE46DE23 * __this, const RuntimeMethod* method)
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
// System.Void Gpm.WebView.Internal.NativeRequest/Margins::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Margins__ctor_mBD7A5088EF666E07B0CE4EABA6C67DAF2B974303 (Margins_tD3B287C5998931DED6C19FD0EA7533D529ABC4D7 * __this, const RuntimeMethod* method)
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
// System.Void Gpm.WebView.Internal.NativeRequest/Position::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Position__ctor_mEF441CE1DA7A405B444BDCF364280B9CAE677EF0 (Position_t99CED3006BAD63E73FD1E85EE78BE4936CADBD70 * __this, const RuntimeMethod* method)
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
// System.Void Gpm.WebView.Internal.NativeRequest/ShowSafeBrowsing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowSafeBrowsing__ctor_m0BD616D660C45923996AD1FFE0F05EBD9A369408 (ShowSafeBrowsing_t711EFBB8AB7CCBC665A817A20F5347B285EF302F * __this, const RuntimeMethod* method)
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
// System.Void Gpm.WebView.Internal.NativeRequest/ShowWebBrowser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowWebBrowser__ctor_mC8D6BDEA6FBB0EB6A6365E1A48CF3C22E2D8B647 (ShowWebBrowser_tCB3CE687A4216C5E8F53038047E697F9DDEAD891 * __this, const RuntimeMethod* method)
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
// System.Void Gpm.WebView.Internal.NativeRequest/ShowWebView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowWebView__ctor_mB9ED0E1E4A992DDC2B9853CD9457AAB3F49CAE7B (ShowWebView_t47B866BED20A6758D9DA52EDF8D22305A08ED1FA * __this, const RuntimeMethod* method)
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
// System.Void Gpm.WebView.Internal.NativeRequest/Size::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Size__ctor_mE82F69DE3E0E133870FCFB38FCFCA0E3165D8996 (Size_tD84EC7BBB992369C9A0CC7D80AD0268F3ED54D12 * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * WebViewImplementation_get_Instance_m15928AE1C49475334670988A6D73B5DBD1D9CC84_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return instance; }
		IL2CPP_RUNTIME_CLASS_INIT(WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var);
		WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A * L_0 = ((WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_StaticFields*)il2cpp_codegen_static_fields_for(WebViewImplementation_t38412C40869AFE336FF7FD9B1496FE74D157E16A_il2cpp_TypeInfo_var))->get_instance_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, const RuntimeMethod* method)
{
	{
		// return m_Text;
		String_t* L_0 = __this->get_m_Text_38();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Dropdown_get_value_mFBF47E0C72050C5CB96B8B6D33F41BA2D1368F26_inline (Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * __this, const RuntimeMethod* method)
{
	{
		// return m_Value;
		int32_t L_0 = __this->get_m_Value_25();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline (Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * __this, const RuntimeMethod* method)
{
	{
		// get { return m_IsOn; }
		bool L_0 = __this->get_m_IsOn_24();
		return L_0;
	}
}
