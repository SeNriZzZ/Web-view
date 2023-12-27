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
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3* p3)
	{
		void* params[3] = { &p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4* p4)
	{
		void* params[4] = { p1, &p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Object>[]
struct EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// Gpm.WebView.Internal.AndroidWebView
struct AndroidWebView_t13C2327FF836CB164C20B04AA2E6187520077004;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Gpm.WebView.Internal.DefaultWebView
struct DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Gpm.WebView.GpmWebViewError
struct GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Gpm.WebView.Internal.IOSWebView
struct IOSWebView_tC700A76F2F6219DFF5662D315E0C8B0F226A7CF6;
// Gpm.WebView.Internal.IWebView
struct IWebView_t56600E03EB01EE205F830A1160159112BD884651;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Gpm.WebView.Internal.NativeMessage
struct NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1;
// Gpm.WebView.Internal.NativeWebView
struct NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// SampleWebView
struct SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// Gpm.WebView.Internal.WebViewImplementation
struct WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96;
// Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback
struct CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9;
// Gpm.Communicator.GpmCommunicatorVO/Configuration
struct Configuration_tEEAE0A5D89EB14F9BFA9258745FA65F306DE45DD;
// Gpm.Communicator.GpmCommunicatorVO/Message
struct Message_tFCC9E5F0F507C157748FA34EED0653C32378756A;
// Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate
struct GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F;
// Gpm.WebView.GpmWebViewRequest/Configuration
struct Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D;
// Gpm.WebView.GpmWebViewRequest/ConfigurationSafeBrowsing
struct ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77;
// Gpm.WebView.GpmWebViewRequest/CustomSchemePostCommand
struct CustomSchemePostCommand_tD5519E7A81BD61CCB24370A69469848185793839;
// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D;
// Gpm.WebView.Internal.NativeRequest/Configuration
struct Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191;
// Gpm.WebView.Internal.NativeRequest/ConfigurationSafeBrowsing
struct ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3;
// Gpm.WebView.Internal.NativeRequest/ExecuteJavaScript
struct ExecuteJavaScript_t03445880CE57FF3F8D6A5A50FB18883590BA85CB;
// Gpm.WebView.Internal.NativeRequest/Margins
struct Margins_t461D5F3B2F0F4291936FCF0D7A8DE1EA21F6DEA2;
// Gpm.WebView.Internal.NativeRequest/Position
struct Position_t270EA20F5BD7C97729951399753CABF1D1D7140F;
// Gpm.WebView.Internal.NativeRequest/ShowSafeBrowsing
struct ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1;
// Gpm.WebView.Internal.NativeRequest/ShowWebBrowser
struct ShowWebBrowser_t5C63CFC890E6EA9F6F7D9419272400EAD1265D0A;
// Gpm.WebView.Internal.NativeRequest/ShowWebView
struct ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F;
// Gpm.WebView.Internal.NativeRequest/Size
struct Size_t5584C5D0B515D1AB5E8D1D89FBD1EBBC9AF3C57A;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;

IL2CPP_EXTERN_C RuntimeClass* CallbackType_t0014D0BBC86D12814581740EF23008F3ABA89E2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Configuration_tEEAE0A5D89EB14F9BFA9258745FA65F306DE45DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomSchemePostCommand_tD5519E7A81BD61CCB24370A69469848185793839_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecuteJavaScript_t03445880CE57FF3F8D6A5A50FB18883590BA85CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOSWebView_tC700A76F2F6219DFF5662D315E0C8B0F226A7CF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Margins_t461D5F3B2F0F4291936FCF0D7A8DE1EA21F6DEA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Message_tFCC9E5F0F507C157748FA34EED0653C32378756A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Position_t270EA20F5BD7C97729951399753CABF1D1D7140F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShowWebBrowser_t5C63CFC890E6EA9F6F7D9419272400EAD1265D0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Size_t5584C5D0B515D1AB5E8D1D89FBD1EBBC9AF3C57A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var;
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
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_ToObject_TisGpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84_m00F5206C911E7AA8FE924E1F7520E80CF8D3564F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_ToObject_TisNativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_m7DFEDA985CA90E137E4D04C66693EF17D1EF9043_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeCallbackHandler_GetCallback_TisGpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F_mCDB845E6A61AAC966710C12EC5D4330CC8335717_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeWebView_OnAsyncEvent_m9CD74DA600AA91607C4835F1C35059459F27FF76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SampleWebView_OnWebViewCallback_m28FDC7421A12F3F97F961FFBC9EADA13FE1C36C1_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tB70C7FE397245F8C25BCAFD9318274CCA346C179 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* ____entries_1;
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
	KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// Gpm.WebView.Internal.DefaultWebView
struct DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583  : public RuntimeObject
{
};

// Gpm.WebView.GpmOrientation
struct GpmOrientation_tED11E80DF35B03178514F6F9CD3F2D386C372C6C  : public RuntimeObject
{
};

// Gpm.WebView.GpmWebView
struct GpmWebView_t3C2CB34A03D1AA8B1B6BA9C891FE597A6E2E2890  : public RuntimeObject
{
};

// Gpm.WebView.GpmWebViewCallback
struct GpmWebViewCallback_t7BA400E59E69317675C4BB6F04CBED56934C3DA1  : public RuntimeObject
{
};

// Gpm.WebView.GpmWebViewContentMode
struct GpmWebViewContentMode_t3B5849CC38CD635050B832A5DD9E31C6E8B12D69  : public RuntimeObject
{
};

// Gpm.WebView.GpmWebViewCustomSchemeCommand
struct GpmWebViewCustomSchemeCommand_t8D54199FC62B450299AB3D13819B0342940E2886  : public RuntimeObject
{
};

// Gpm.WebView.GpmWebViewError
struct GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84  : public RuntimeObject
{
	// System.String Gpm.WebView.GpmWebViewError::domain
	String_t* ___domain_0;
	// System.Int32 Gpm.WebView.GpmWebViewError::code
	int32_t ___code_1;
	// System.String Gpm.WebView.GpmWebViewError::message
	String_t* ___message_2;
	// Gpm.WebView.GpmWebViewError Gpm.WebView.GpmWebViewError::error
	GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* ___error_3;
};

// Gpm.WebView.GpmWebViewErrorCode
struct GpmWebViewErrorCode_t69A2A1C228054728DC27A5FB1C1A25E89850462E  : public RuntimeObject
{
};

// Gpm.WebView.GpmWebViewRequest
struct GpmWebViewRequest_t4311A4FDEF7A06996D9CDFE2B007AEB2E5090E25  : public RuntimeObject
{
};

// Gpm.WebView.GpmWebViewSafeBrowsing
struct GpmWebViewSafeBrowsing_tD10E76434D79797F28C109FF88D7213FFFEE0441  : public RuntimeObject
{
};

// Gpm.WebView.GpmWebViewStyle
struct GpmWebViewStyle_t095DEB05284A009211D21090F702FE47B8273B15  : public RuntimeObject
{
};

// Gpm.WebView.Internal.NativeCallbackHandler
struct NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592  : public RuntimeObject
{
};

// Gpm.WebView.Internal.NativeMessage
struct NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1  : public RuntimeObject
{
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
};

// Gpm.WebView.Internal.NativeRequest
struct NativeRequest_tB0FE38874DA99CC607B0DCF0746272E762C0D3F9  : public RuntimeObject
{
};

// Gpm.WebView.Internal.NativeWebView
struct NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA  : public RuntimeObject
{
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
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// Gpm.WebView.Internal.WebViewImplementation
struct WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D  : public RuntimeObject
{
	// Gpm.WebView.Internal.IWebView Gpm.WebView.Internal.WebViewImplementation::webview
	RuntimeObject* ___webview_1;
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

// Gpm.WebView.GpmWebViewRequest/ConfigurationSafeBrowsing
struct ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77  : public RuntimeObject
{
	// System.String Gpm.WebView.GpmWebViewRequest/ConfigurationSafeBrowsing::navigationBarColor
	String_t* ___navigationBarColor_0;
	// System.String Gpm.WebView.GpmWebViewRequest/ConfigurationSafeBrowsing::navigationTextColor
	String_t* ___navigationTextColor_1;
};

// Gpm.WebView.GpmWebViewRequest/CustomSchemePostCommand
struct CustomSchemePostCommand_tD5519E7A81BD61CCB24370A69469848185793839  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.String> Gpm.WebView.GpmWebViewRequest/CustomSchemePostCommand::commandList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___commandList_0;
};

// Gpm.WebView.Internal.NativeRequest/Configuration
struct Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191  : public RuntimeObject
{
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
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___schemeCommandList_29;
};

// Gpm.WebView.Internal.NativeRequest/ConfigurationSafeBrowsing
struct ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3  : public RuntimeObject
{
	// System.String Gpm.WebView.Internal.NativeRequest/ConfigurationSafeBrowsing::navigationBarColor
	String_t* ___navigationBarColor_0;
	// System.String Gpm.WebView.Internal.NativeRequest/ConfigurationSafeBrowsing::navigationTextColor
	String_t* ___navigationTextColor_1;
};

// Gpm.WebView.Internal.NativeRequest/ExecuteJavaScript
struct ExecuteJavaScript_t03445880CE57FF3F8D6A5A50FB18883590BA85CB  : public RuntimeObject
{
	// System.String Gpm.WebView.Internal.NativeRequest/ExecuteJavaScript::script
	String_t* ___script_0;
};

// Gpm.WebView.Internal.NativeRequest/Margins
struct Margins_t461D5F3B2F0F4291936FCF0D7A8DE1EA21F6DEA2  : public RuntimeObject
{
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Margins::left
	int32_t ___left_0;
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Margins::top
	int32_t ___top_1;
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Margins::right
	int32_t ___right_2;
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Margins::bottom
	int32_t ___bottom_3;
};

// Gpm.WebView.Internal.NativeRequest/Position
struct Position_t270EA20F5BD7C97729951399753CABF1D1D7140F  : public RuntimeObject
{
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Position::x
	int32_t ___x_0;
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Position::y
	int32_t ___y_1;
};

// Gpm.WebView.Internal.NativeRequest/ShowSafeBrowsing
struct ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1  : public RuntimeObject
{
	// System.String Gpm.WebView.Internal.NativeRequest/ShowSafeBrowsing::url
	String_t* ___url_0;
	// Gpm.WebView.Internal.NativeRequest/ConfigurationSafeBrowsing Gpm.WebView.Internal.NativeRequest/ShowSafeBrowsing::configuration
	ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3* ___configuration_1;
};

// Gpm.WebView.Internal.NativeRequest/ShowWebBrowser
struct ShowWebBrowser_t5C63CFC890E6EA9F6F7D9419272400EAD1265D0A  : public RuntimeObject
{
	// System.String Gpm.WebView.Internal.NativeRequest/ShowWebBrowser::url
	String_t* ___url_0;
};

// Gpm.WebView.Internal.NativeRequest/ShowWebView
struct ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F  : public RuntimeObject
{
	// System.String Gpm.WebView.Internal.NativeRequest/ShowWebView::data
	String_t* ___data_0;
	// Gpm.WebView.Internal.NativeRequest/Configuration Gpm.WebView.Internal.NativeRequest/ShowWebView::configuration
	Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* ___configuration_1;
	// System.Collections.Generic.List`1<System.String> Gpm.WebView.Internal.NativeRequest/ShowWebView::schemeList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___schemeList_2;
};

// Gpm.WebView.Internal.NativeRequest/Size
struct Size_t5584C5D0B515D1AB5E8D1D89FBD1EBBC9AF3C57A  : public RuntimeObject
{
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Size::width
	int32_t ___width_0;
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Size::height
	int32_t ___height_1;
};

// Gpm.WebView.Internal.NativeWebView/ApiScheme
struct ApiScheme_t5752820ACD107C3FF8010CC1F5C7AA236C1A4C46  : public RuntimeObject
{
};

// Gpm.WebView.Internal.NativeWebView/CallbackScheme
struct CallbackScheme_t1B5F7F87C7B7895A1E1693353603C57DAEB95FF5  : public RuntimeObject
{
};

// Gpm.WebView.Internal.AndroidWebView
struct AndroidWebView_t13C2327FF836CB164C20B04AA2E6187520077004  : public NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
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

// Gpm.WebView.Internal.IOSWebView
struct IOSWebView_tC700A76F2F6219DFF5662D315E0C8B0F226A7CF6  : public NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
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

// Gpm.WebView.GpmWebViewRequest/Margins
struct Margins_t710D98C860962372C9323F82DD766A3977353F85 
{
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
};
// Native definition for P/Invoke marshalling of Gpm.WebView.GpmWebViewRequest/Margins
struct Margins_t710D98C860962372C9323F82DD766A3977353F85_marshaled_pinvoke
{
	int32_t ___hasValue_0;
	int32_t ___left_1;
	int32_t ___top_2;
	int32_t ___right_3;
	int32_t ___bottom_4;
};
// Native definition for COM marshalling of Gpm.WebView.GpmWebViewRequest/Margins
struct Margins_t710D98C860962372C9323F82DD766A3977353F85_marshaled_com
{
	int32_t ___hasValue_0;
	int32_t ___left_1;
	int32_t ___top_2;
	int32_t ___right_3;
	int32_t ___bottom_4;
};

// Gpm.WebView.GpmWebViewRequest/Position
struct Position_t824C74226386B322C9926FC29B2AFCBECAFE3778 
{
	// System.Boolean Gpm.WebView.GpmWebViewRequest/Position::hasValue
	bool ___hasValue_0;
	// System.Int32 Gpm.WebView.GpmWebViewRequest/Position::x
	int32_t ___x_1;
	// System.Int32 Gpm.WebView.GpmWebViewRequest/Position::y
	int32_t ___y_2;
};
// Native definition for P/Invoke marshalling of Gpm.WebView.GpmWebViewRequest/Position
struct Position_t824C74226386B322C9926FC29B2AFCBECAFE3778_marshaled_pinvoke
{
	int32_t ___hasValue_0;
	int32_t ___x_1;
	int32_t ___y_2;
};
// Native definition for COM marshalling of Gpm.WebView.GpmWebViewRequest/Position
struct Position_t824C74226386B322C9926FC29B2AFCBECAFE3778_marshaled_com
{
	int32_t ___hasValue_0;
	int32_t ___x_1;
	int32_t ___y_2;
};

// Gpm.WebView.GpmWebViewRequest/Size
struct Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F 
{
	// System.Boolean Gpm.WebView.GpmWebViewRequest/Size::hasValue
	bool ___hasValue_0;
	// System.Int32 Gpm.WebView.GpmWebViewRequest/Size::width
	int32_t ___width_1;
	// System.Int32 Gpm.WebView.GpmWebViewRequest/Size::height
	int32_t ___height_2;
};
// Native definition for P/Invoke marshalling of Gpm.WebView.GpmWebViewRequest/Size
struct Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F_marshaled_pinvoke
{
	int32_t ___hasValue_0;
	int32_t ___width_1;
	int32_t ___height_2;
};
// Native definition for COM marshalling of Gpm.WebView.GpmWebViewRequest/Size
struct Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F_marshaled_com
{
	int32_t ___hasValue_0;
	int32_t ___width_1;
	int32_t ___height_2;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
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

// Gpm.WebView.GpmWebViewRequest/Configuration
struct Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D  : public RuntimeObject
{
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
	CustomSchemePostCommand_tD5519E7A81BD61CCB24370A69469848185793839* ___customSchemePostCommand_14;
	// Gpm.WebView.GpmWebViewRequest/Position Gpm.WebView.GpmWebViewRequest/Configuration::position
	Position_t824C74226386B322C9926FC29B2AFCBECAFE3778 ___position_15;
	// Gpm.WebView.GpmWebViewRequest/Size Gpm.WebView.GpmWebViewRequest/Configuration::size
	Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F ___size_16;
	// Gpm.WebView.GpmWebViewRequest/Margins Gpm.WebView.GpmWebViewRequest/Configuration::margins
	Margins_t710D98C860962372C9323F82DD766A3977353F85 ___margins_17;
	// System.Boolean Gpm.WebView.GpmWebViewRequest/Configuration::isBackButtonCloseCallbackUsed
	bool ___isBackButtonCloseCallbackUsed_18;
	// System.Int32 Gpm.WebView.GpmWebViewRequest/Configuration::contentMode
	int32_t ___contentMode_19;
	// System.Boolean Gpm.WebView.GpmWebViewRequest/Configuration::isMaskViewVisible
	bool ___isMaskViewVisible_20;
	// System.Boolean Gpm.WebView.GpmWebViewRequest/Configuration::isAutoRotation
	bool ___isAutoRotation_21;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate
struct GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// SampleWebView
struct SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.InputField SampleWebView::urlInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___urlInput_5;
	// UnityEngine.UI.InputField SampleWebView::titleInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___titleInput_6;
	// UnityEngine.UI.InputField SampleWebView::customSchemeInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___customSchemeInput_7;
	// UnityEngine.UI.InputField SampleWebView::backgroundColorInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___backgroundColorInput_8;
	// UnityEngine.UI.InputField SampleWebView::navigationColorInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___navigationColorInput_9;
	// UnityEngine.UI.Toggle SampleWebView::clearCookieToggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___clearCookieToggle_10;
	// UnityEngine.UI.Toggle SampleWebView::clearCacheToggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___clearCacheToggle_11;
	// UnityEngine.UI.Toggle SampleWebView::navigationBarVisibleToggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___navigationBarVisibleToggle_12;
	// UnityEngine.UI.Toggle SampleWebView::backButtonVisibleToggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___backButtonVisibleToggle_13;
	// UnityEngine.UI.Toggle SampleWebView::forwardButtonVisibleToggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___forwardButtonVisibleToggle_14;
	// UnityEngine.UI.Toggle SampleWebView::closeButtonVisibleToggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___closeButtonVisibleToggle_15;
	// UnityEngine.UI.Toggle SampleWebView::supportMultipleWindowToggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___supportMultipleWindowToggle_16;
	// UnityEngine.UI.Toggle SampleWebView::backButtonCloseCallbackUsedToggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___backButtonCloseCallbackUsedToggle_17;
	// UnityEngine.UI.Toggle SampleWebView::maskViewVisibleToggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___maskViewVisibleToggle_18;
	// UnityEngine.UI.Toggle SampleWebView::autoRotationToggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___autoRotationToggle_19;
	// UnityEngine.UI.Dropdown SampleWebView::styleDropdown
	Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* ___styleDropdown_20;
	// UnityEngine.UI.Dropdown SampleWebView::orientationDropdown
	Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* ___orientationDropdown_21;
	// UnityEngine.UI.Dropdown SampleWebView::contentModeDropdown
	Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* ___contentModeDropdown_22;
	// UnityEngine.UI.InputField SampleWebView::popupXInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___popupXInput_23;
	// UnityEngine.UI.InputField SampleWebView::popupYInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___popupYInput_24;
	// UnityEngine.UI.InputField SampleWebView::popupWidthInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___popupWidthInput_25;
	// UnityEngine.UI.InputField SampleWebView::popupHeightInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___popupHeightInput_26;
	// UnityEngine.UI.InputField SampleWebView::popupMarginsLeftInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___popupMarginsLeftInput_27;
	// UnityEngine.UI.InputField SampleWebView::popupMarginsTopInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___popupMarginsTopInput_28;
	// UnityEngine.UI.InputField SampleWebView::popupMarginsRightInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___popupMarginsRightInput_29;
	// UnityEngine.UI.InputField SampleWebView::popupMarginsBottomInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___popupMarginsBottomInput_30;
	// UnityEngine.UI.InputField SampleWebView::userAgentStringInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___userAgentStringInput_31;
	// UnityEngine.UI.InputField SampleWebView::javascriptInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___javascriptInput_32;
	// UnityEngine.UI.InputField SampleWebView::safeBrowsingNavigationBarColor
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___safeBrowsingNavigationBarColor_33;
	// UnityEngine.UI.InputField SampleWebView::safeBrowsingNavigationTextColor
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___safeBrowsingNavigationTextColor_34;
	// UnityEngine.UI.InputField SampleWebView::output
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___output_35;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
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
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Template_20;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_CaptionText_21;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_CaptionImage_22;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_ItemText_23;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_ItemImage_24;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_25;
	// UnityEngine.UI.Dropdown/OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96* ___m_Options_26;
	// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* ___m_OnValueChanged_27;
	// System.Single UnityEngine.UI.Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_28;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Dropdown_29;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Blocker_30;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E* ___m_Items_31;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B* ___m_AlphaTweenRunner_32;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_33;
};

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextComponent_23;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_24;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_25;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_26;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_27;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_28;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_29;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_30;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_31;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_32;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnSubmit
	SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D* ___m_OnSubmit_33;
	// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::m_OnDidEndEdit
	EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* ___m_OnDidEndEdit_34;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* ___m_OnValueChanged_35;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* ___m_OnValidateInput_36;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_37;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_38;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_39;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_40;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_41;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_42;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_43;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_44;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_45;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_46;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_47;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_48;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_InputTextCache_49;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_50;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_51;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_52;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_53;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_54;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_55;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_56;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_59;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_60;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_61;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_62;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_63;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_64;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_65;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_66;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_67;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_68;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_69;
	// System.Boolean UnityEngine.UI.InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_70;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_73;
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// Gpm.WebView.Internal.DefaultWebView

// Gpm.WebView.Internal.DefaultWebView

// Gpm.WebView.GpmOrientation

// Gpm.WebView.GpmOrientation

// Gpm.WebView.GpmWebView

// Gpm.WebView.GpmWebView

// Gpm.WebView.GpmWebViewCallback

// Gpm.WebView.GpmWebViewCallback

// Gpm.WebView.GpmWebViewContentMode

// Gpm.WebView.GpmWebViewContentMode

// Gpm.WebView.GpmWebViewCustomSchemeCommand

// Gpm.WebView.GpmWebViewCustomSchemeCommand

// Gpm.WebView.GpmWebViewError

// Gpm.WebView.GpmWebViewError

// Gpm.WebView.GpmWebViewErrorCode

// Gpm.WebView.GpmWebViewErrorCode

// Gpm.WebView.GpmWebViewRequest

// Gpm.WebView.GpmWebViewRequest

// Gpm.WebView.GpmWebViewSafeBrowsing

// Gpm.WebView.GpmWebViewSafeBrowsing

// Gpm.WebView.GpmWebViewStyle

// Gpm.WebView.GpmWebViewStyle

// Gpm.WebView.Internal.NativeCallbackHandler
struct NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_StaticFields
{
	// System.Int32 Gpm.WebView.Internal.NativeCallbackHandler::handle
	int32_t ___handle_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Object> Gpm.WebView.Internal.NativeCallbackHandler::callbackDic
	Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ___callbackDic_1;
};

// Gpm.WebView.Internal.NativeCallbackHandler

// Gpm.WebView.Internal.NativeMessage

// Gpm.WebView.Internal.NativeMessage

// Gpm.WebView.Internal.NativeRequest

// Gpm.WebView.Internal.NativeRequest

// Gpm.WebView.Internal.NativeWebView

// Gpm.WebView.Internal.NativeWebView

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Gpm.WebView.Internal.WebViewImplementation
struct WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_StaticFields
{
	// Gpm.WebView.Internal.WebViewImplementation Gpm.WebView.Internal.WebViewImplementation::instance
	WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* ___instance_0;
};

// Gpm.WebView.Internal.WebViewImplementation

// Gpm.Communicator.GpmCommunicatorVO/Configuration

// Gpm.Communicator.GpmCommunicatorVO/Configuration

// Gpm.Communicator.GpmCommunicatorVO/Message

// Gpm.Communicator.GpmCommunicatorVO/Message

// Gpm.WebView.GpmWebViewRequest/ConfigurationSafeBrowsing

// Gpm.WebView.GpmWebViewRequest/ConfigurationSafeBrowsing

// Gpm.WebView.GpmWebViewRequest/CustomSchemePostCommand

// Gpm.WebView.GpmWebViewRequest/CustomSchemePostCommand

// Gpm.WebView.Internal.NativeRequest/Configuration

// Gpm.WebView.Internal.NativeRequest/Configuration

// Gpm.WebView.Internal.NativeRequest/ConfigurationSafeBrowsing

// Gpm.WebView.Internal.NativeRequest/ConfigurationSafeBrowsing

// Gpm.WebView.Internal.NativeRequest/ExecuteJavaScript

// Gpm.WebView.Internal.NativeRequest/ExecuteJavaScript

// Gpm.WebView.Internal.NativeRequest/Margins

// Gpm.WebView.Internal.NativeRequest/Margins

// Gpm.WebView.Internal.NativeRequest/Position

// Gpm.WebView.Internal.NativeRequest/Position

// Gpm.WebView.Internal.NativeRequest/ShowSafeBrowsing

// Gpm.WebView.Internal.NativeRequest/ShowSafeBrowsing

// Gpm.WebView.Internal.NativeRequest/ShowWebBrowser

// Gpm.WebView.Internal.NativeRequest/ShowWebBrowser

// Gpm.WebView.Internal.NativeRequest/ShowWebView

// Gpm.WebView.Internal.NativeRequest/ShowWebView

// Gpm.WebView.Internal.NativeRequest/Size

// Gpm.WebView.Internal.NativeRequest/Size

// Gpm.WebView.Internal.NativeWebView/ApiScheme

// Gpm.WebView.Internal.NativeWebView/ApiScheme

// Gpm.WebView.Internal.NativeWebView/CallbackScheme

// Gpm.WebView.Internal.NativeWebView/CallbackScheme

// Gpm.WebView.Internal.AndroidWebView

// Gpm.WebView.Internal.AndroidWebView

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// Gpm.WebView.Internal.IOSWebView

// Gpm.WebView.Internal.IOSWebView

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Void

// System.Void

// Gpm.WebView.GpmWebViewRequest/Margins

// Gpm.WebView.GpmWebViewRequest/Margins

// Gpm.WebView.GpmWebViewRequest/Position

// Gpm.WebView.GpmWebViewRequest/Position

// Gpm.WebView.GpmWebViewRequest/Size

// Gpm.WebView.GpmWebViewRequest/Size

// System.Delegate

// System.Delegate

// Gpm.WebView.GpmWebViewRequest/Configuration

// Gpm.WebView.GpmWebViewRequest/Configuration

// System.AsyncCallback

// System.AsyncCallback

// Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback

// Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback

// Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate

// Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// SampleWebView

// SampleWebView

// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_StaticFields
{
	// UnityEngine.UI.Dropdown/OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* ___s_NoOptionData_35;
};

// UnityEngine.UI.Dropdown

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_StaticFields
{
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDevice
	bool ___s_IsQuestDevice_22;
};

// UnityEngine.UI.InputField

// UnityEngine.UI.Toggle

// UnityEngine.UI.Toggle
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
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


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// T Gpm.Common.ThirdParty.LitJson.JsonMapper::ToObject<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_ToObject_TisRuntimeObject_m22A76A93139A43356F4977D050E83F88672E6CF7_gshared (String_t* ___0_json, const RuntimeMethod* method) ;
// T Gpm.WebView.Internal.NativeCallbackHandler::GetCallback<System.Object>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeCallbackHandler_GetCallback_TisRuntimeObject_m5CEF7B609E6CB606307C0933C3AAF59F17DF0CC0_gshared (int32_t ___0_handle, const RuntimeMethod* method) ;

// System.Void UnityEngine.UI.InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// Gpm.WebView.GpmWebViewRequest/Configuration SampleWebView::GetConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* SampleWebView_GetConfiguration_m153B9C62983C5BA0D4BA0D77A9126EE52E9C3F17 (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebViewDelegate__ctor_mEA1F534F671A39D2D8A1C7D8098ABD70C631DB86 (GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.String> SampleWebView::GetCustomSchemeList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* SampleWebView_GetCustomSchemeList_mA5EB6B888F3441BF36A715AB2161EEB66ABC09FF (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.GpmWebView::ShowUrl(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_ShowUrl_m7F773079112A695765E5D072BF1277B58D9011A4 (String_t* ___0_url, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___1_configuration, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___2_callback, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___3_schemeList, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.GpmWebView::ShowHtmlString(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_ShowHtmlString_m04576315F51AA05A32A33F4D0E1FCEEDE1166BB1 (String_t* ___0_htmlString, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___1_configuration, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___2_callback, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___3_schemeList, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.GpmWebViewRequest/ConfigurationSafeBrowsing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationSafeBrowsing__ctor_m99AB150B133C0510E7C1DA8F8984CFB94E357E3F (ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77* __this, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.GpmWebViewSafeBrowsing::ShowSafeBrowsing(System.String,Gpm.WebView.GpmWebViewRequest/ConfigurationSafeBrowsing,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebViewSafeBrowsing_ShowSafeBrowsing_mA5B1D01E29C5231ED040B402A45D5E2953F4C048 (String_t* ___0_url, ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77* ___1_configuration, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___2_callback, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.GpmWebView::ShowWebBrowser(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_ShowWebBrowser_m92D3AF8A9D47956AC9190F0BC5C6D9016CD98B86 (String_t* ___0_url, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.GpmWebViewRequest/CustomSchemePostCommand::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomSchemePostCommand__ctor_mB77999D64C37D95EFFF58511E9425A2AD25BFA94 (CustomSchemePostCommand_tD5519E7A81BD61CCB24370A69469848185793839* __this, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.GpmWebViewRequest/CustomSchemePostCommand::Close(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomSchemePostCommand_Close_mDE45A89AAD6E82F0069C99F63EAE1D0279CB4700 (CustomSchemePostCommand_tD5519E7A81BD61CCB24370A69469848185793839* __this, String_t* ___0_customScheme, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.GpmWebViewRequest/Configuration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration__ctor_m328501DC04AFAC51642C57936EFD0209F87CD282 (Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UI.Dropdown::get_value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) ;
// Gpm.WebView.GpmWebViewRequest/Position SampleWebView::GetConfigurationPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Position_t824C74226386B322C9926FC29B2AFCBECAFE3778 SampleWebView_GetConfigurationPosition_mB68ADEBEDD0203776D7F32D19E0C2AF37115D3C3 (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) ;
// Gpm.WebView.GpmWebViewRequest/Size SampleWebView::GetConfigurationSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F SampleWebView_GetConfigurationSize_m0D8D42722F3E9F761B597B08D5CB15CB36AE5BFA (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) ;
// Gpm.WebView.GpmWebViewRequest/Margins SampleWebView::GetConfigurationMargins()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Margins_t710D98C860962372C9323F82DD766A3977353F85 SampleWebView_GetConfigurationMargins_mB17D4ADCEEE478A8D66138E4835B799DABE0FBEC (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21 (String_t* ___0_s, int32_t* ___1_result, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___0_collection, method);
}
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Boolean Gpm.WebView.GpmWebView::CanGoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GpmWebView_CanGoBack_m98E02FBD459AD35FDB044CDAE5D9704A38554976 (const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.GpmWebView::GoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_GoBack_m68521649053A9230062F68BF8F106E97039587D0 (const RuntimeMethod* method) ;
// System.Boolean Gpm.WebView.GpmWebView::CanGoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GpmWebView_CanGoForward_m8D962415440E76C36B235AFDE02299D9FFD55C56 (const RuntimeMethod* method) ;
// System.Void Gpm.WebView.GpmWebView::GoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_GoForward_m9BD471CEDB00625FBAB793C30D9587F9DE4C11FD (const RuntimeMethod* method) ;
// System.Int32 Gpm.WebView.GpmWebView::GetX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GpmWebView_GetX_mA2A9586E4A3277C3A4DD597D9D9297A60BF13AA8 (const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Int32 Gpm.WebView.GpmWebView::GetY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GpmWebView_GetY_mC78FC17449707CDEFDD8C738DB0C367E30B1F441 (const RuntimeMethod* method) ;
// System.Int32 Gpm.WebView.GpmWebView::GetWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GpmWebView_GetWidth_m436A56DCF9BB9CA039E41FBCE278012C083DBF17 (const RuntimeMethod* method) ;
// System.Int32 Gpm.WebView.GpmWebView::GetHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GpmWebView_GetHeight_mF40F72EDE0C95B2409F92F97B90807A1D5758DF4 (const RuntimeMethod* method) ;
// System.Void Gpm.WebView.GpmWebView::ExecuteJavaScript(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_ExecuteJavaScript_m05F8C90BF6BCE9627A7BAA743BECBA0FF1515920 (String_t* ___0_script, const RuntimeMethod* method) ;
// System.Boolean Gpm.WebView.GpmWebView::IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GpmWebView_IsActive_m6759FAA9A75D5A98452E6DA542CBC741F73E4A92 (const RuntimeMethod* method) ;
// System.Void Gpm.WebView.GpmWebView::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_Close_m385022233D170F97DC7C71F707B9032DFEFCA445 (const RuntimeMethod* method) ;
// System.Void Gpm.WebView.GpmWebView::SetPosition(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_SetPosition_m36B7C83AA6E131287206AC1D142D8E9B5133DBFE (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.GpmWebView::SetSize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_SetSize_mDBEC3C69EFE658258BFBB7741C273A755A594501 (int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.GpmWebView::SetMargins(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_SetMargins_m6D076E3B237F6FB172935AC63640649F447B26BB (int32_t ___0_left, int32_t ___1_top, int32_t ___2_right, int32_t ___3_bottom, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD (String_t* ___0_separator, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// Gpm.WebView.Internal.WebViewImplementation Gpm.WebView.Internal.WebViewImplementation::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* WebViewImplementation_get_Instance_mAA465A7DF422AD5976021BC760B98960F395A35A_inline (const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.WebViewImplementation::ShowUrl(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_ShowUrl_m90001B716013BC325E5AD9B4D57D103932F4CA92 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, String_t* ___0_url, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___1_configuration, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___2_callback, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___3_schemeList, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.WebViewImplementation::ShowHtmlFile(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_ShowHtmlFile_m0C555349C7367635CC8EB1A1BCC19FBBDFABE8C3 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, String_t* ___0_filePath, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___1_configuration, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___2_callback, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___3_schemeList, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.WebViewImplementation::ShowHtmlString(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_ShowHtmlString_mD5BC6025A19B803C5D636E32BD48E94C075CC037 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, String_t* ___0_htmlString, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___1_configuration, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___2_callback, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___3_schemeList, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.WebViewImplementation::ExecuteJavaScript(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_ExecuteJavaScript_m06A9BF182CB8677D0723CD99D0A2EF7DD703AE1D (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, String_t* ___0_script, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.WebViewImplementation::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_Close_mF5109F4C6444C58E236C748A03958664D35415F8 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, const RuntimeMethod* method) ;
// System.Boolean Gpm.WebView.Internal.WebViewImplementation::IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebViewImplementation_IsActive_mF24F3003298AEDF142FC4789C6121900D11A4ED6 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, const RuntimeMethod* method) ;
// System.Boolean Gpm.WebView.Internal.WebViewImplementation::CanGoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebViewImplementation_CanGoBack_m8A76F1B9486AD1EDCEFC6756B35BAE300498AE72 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, const RuntimeMethod* method) ;
// System.Boolean Gpm.WebView.Internal.WebViewImplementation::CanGoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebViewImplementation_CanGoForward_m44EB0D1B9EE59DAEC78DB54276FA3E2459561CA6 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.WebViewImplementation::GoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_GoBack_m8607DCF8EB8D6C40BF1513339A8CAEEBB54C48A5 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.WebViewImplementation::GoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_GoForward_mCC4E4E8439D961640D23DD6EA72BE3C5A1B12B84 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.WebViewImplementation::SetPosition(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_SetPosition_mC3635879998C2D52DC9AB2C2629AD44BE591CAF5 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.WebViewImplementation::SetSize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_SetSize_m1925A4098C82A272C473E4851D7167FDA9D3D889 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.WebViewImplementation::SetMargins(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_SetMargins_mE82F1488E1F3D57457F8D808CA845D79D8116560 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, int32_t ___0_left, int32_t ___1_top, int32_t ___2_right, int32_t ___3_bottom, const RuntimeMethod* method) ;
// System.Int32 Gpm.WebView.Internal.WebViewImplementation::GetX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebViewImplementation_GetX_m104982AE0652FFD82C753FAF0D99E73FF0DE0C64 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, const RuntimeMethod* method) ;
// System.Int32 Gpm.WebView.Internal.WebViewImplementation::GetY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebViewImplementation_GetY_m7208997F6DB23A6CA176AEF398BEC58096D671A7 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, const RuntimeMethod* method) ;
// System.Int32 Gpm.WebView.Internal.WebViewImplementation::GetWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebViewImplementation_GetWidth_m15E991333F67D7603715038BF8D3F0441B7E4C7E (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, const RuntimeMethod* method) ;
// System.Int32 Gpm.WebView.Internal.WebViewImplementation::GetHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebViewImplementation_GetHeight_m44293E3641F96B267C95FAAB0431CA18BF7BC961 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.WebViewImplementation::ShowWebBrowser(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_ShowWebBrowser_mD69C829D3132D076C8C993CA4717243F32D7AD10 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, String_t* ___0_url, const RuntimeMethod* method) ;
// System.String Gpm.Common.ThirdParty.LitJson.JsonMapper::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonMapper_ToJson_m3951B68FD76377CF7E3DE6541DCD45474F2B7159 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.WebViewImplementation::ShowSafeBrowsing(System.String,Gpm.WebView.GpmWebViewRequest/ConfigurationSafeBrowsing,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_ShowSafeBrowsing_mBB2F0C658DD89E2D27C87C53C503203AAEF3390C (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, String_t* ___0_url, ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77* ___1_configuration, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___2_callback, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.IOSWebView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebView__ctor_m68B755C3C7591E207A1D237BA6B8641A0ED03B67 (IOSWebView_tC700A76F2F6219DFF5662D315E0C8B0F226A7CF6* __this, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.WebViewImplementation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation__ctor_mCEF14046B03E72CB091ABECCF7637356CAA085A1 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.NativeWebView::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_Initialize_m4ED8533FBC5F24F24D9C0C7F31E3C7E7C5885C8A (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.NativeWebView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView__ctor_m7D9310A88919A896BA119F727FAECAABA00C6656 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
inline void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared)(__this, ___0_key, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
inline bool Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared)(__this, ___0_key, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
inline void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void Gpm.WebView.Internal.NativeMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16 (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* __this, const RuntimeMethod* method) ;
// Gpm.Communicator.GpmCommunicatorVO/Message Gpm.WebView.Internal.NativeWebView::CallSync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* NativeWebView_CallSync_mD793591BA24DD0227C573464DC73895C9764CA43 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, String_t* ___0_data, String_t* ___1_extra, const RuntimeMethod* method) ;
// System.Boolean System.Convert::ToBoolean(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Convert_ToBoolean_m3DEA64CC166C14DD2B3461A04C227A05BC06DFEC (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Gpm.Communicator.GpmCommunicatorVO/Configuration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration__ctor_m443D394EFCF889D9A526B5B9B187879533FFB8B7 (Configuration_tEEAE0A5D89EB14F9BFA9258745FA65F306DE45DD* __this, const RuntimeMethod* method) ;
// System.Void Gpm.Communicator.GpmCommunicator::InitializeClass(Gpm.Communicator.GpmCommunicatorVO/Configuration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmCommunicator_InitializeClass_m2CCFC459C16E0F0E420D7678243B4F35BC7F9420 (Configuration_tEEAE0A5D89EB14F9BFA9258745FA65F306DE45DD* ___0_configuration, const RuntimeMethod* method) ;
// System.Void Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorCallback__ctor_m586DBDDB8B64710B46280B17DBBC64340DA49FC3 (CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Gpm.Communicator.GpmCommunicator::AddReceiver(System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmCommunicator_AddReceiver_mC9977EF5D63E724F9AB43BA75AE115E97AFF5A75 (String_t* ___0_domain, CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* ___1_callback, const RuntimeMethod* method) ;
// System.Int32 Gpm.WebView.Internal.NativeCallbackHandler::RegisterCallback(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeCallbackHandler_RegisterCallback_m5D91A1A7768C7960711766B5C310B31F8F5FD7D2 (RuntimeObject* ___0_callback, const RuntimeMethod* method) ;
// Gpm.WebView.Internal.NativeRequest/ShowWebView Gpm.WebView.Internal.NativeWebView::MakeShowWebView(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F* NativeWebView_MakeShowWebView_mA0E300170A2DA5CF61C89DD0C6626C8F09C3C60F (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, String_t* ___0_data, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___1_configuration, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___2_schemeList, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.NativeWebView::CallAsync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_CallAsync_mF98E49EFAD6088CD79D61F04BF5A300BF7DFE48E (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, String_t* ___0_data, String_t* ___1_extra, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.NativeRequest/ShowSafeBrowsing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowSafeBrowsing__ctor_mE86B353453E23E789C7AA9979D81AFE56464CD16 (ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1* __this, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.NativeRequest/ConfigurationSafeBrowsing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationSafeBrowsing__ctor_m160B0523793AE3214D810B9664AAE75FF47D71DF (ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3* __this, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.NativeRequest/ExecuteJavaScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecuteJavaScript__ctor_mF20F45EF78D01DF13D2A428A14F64E59751FD4E3 (ExecuteJavaScript_t03445880CE57FF3F8D6A5A50FB18883590BA85CB* __this, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.NativeRequest/ShowWebView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowWebView__ctor_mF7BE177A484595DDE6866DE7FF3AE5DB8053D552 (ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F* __this, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.NativeRequest/Configuration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration__ctor_m95D899D85EAE741464B99462E37D8D0214D652F2 (Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* __this, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.NativeWebView::CheckAutoRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_CheckAutoRotation_mA55A4565B127B657EFDCE3CB7A1ABD9364DC2736 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, const RuntimeMethod* method) ;
// System.Void Gpm.Communicator.GpmCommunicatorVO/Message::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message__ctor_m2B70B60F0703E1EA68F3C44EBC47CE3F2073F864 (Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* __this, const RuntimeMethod* method) ;
// System.Void Gpm.Communicator.GpmCommunicator::CallAsync(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmCommunicator_CallAsync_m7233718BD78C361D0EC0CB8495266B8FFE5B0C6A (Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___0_message, const RuntimeMethod* method) ;
// Gpm.Communicator.GpmCommunicatorVO/Message Gpm.Communicator.GpmCommunicator::CallSync(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* GpmCommunicator_CallSync_m62FB3C82EBCD86B6B7BA2C567CE262D97DD2E104 (Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___0_message, const RuntimeMethod* method) ;
// T Gpm.Common.ThirdParty.LitJson.JsonMapper::ToObject<Gpm.WebView.Internal.NativeMessage>(System.String)
inline NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* JsonMapper_ToObject_TisNativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_m7DFEDA985CA90E137E4D04C66693EF17D1EF9043 (String_t* ___0_json, const RuntimeMethod* method)
{
	return ((  NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* (*) (String_t*, const RuntimeMethod*))JsonMapper_ToObject_TisRuntimeObject_m22A76A93139A43356F4977D050E83F88672E6CF7_gshared)(___0_json, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.NativeWebView::OnWebViewCallback(Gpm.WebView.Internal.NativeMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_OnWebViewCallback_mDC25514EEBC3664DA5E35275047F0EB22F012EB2 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* ___0_nativeMessage, const RuntimeMethod* method) ;
// T Gpm.WebView.Internal.NativeCallbackHandler::GetCallback<Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate>(System.Int32)
inline GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* NativeCallbackHandler_GetCallback_TisGpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F_mCDB845E6A61AAC966710C12EC5D4330CC8335717 (int32_t ___0_handle, const RuntimeMethod* method)
{
	return ((  GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* (*) (int32_t, const RuntimeMethod*))NativeCallbackHandler_GetCallback_TisRuntimeObject_m5CEF7B609E6CB606307C0933C3AAF59F17DF0CC0_gshared)(___0_handle, method);
}
// T Gpm.Common.ThirdParty.LitJson.JsonMapper::ToObject<Gpm.WebView.GpmWebViewError>(System.String)
inline GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* JsonMapper_ToObject_TisGpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84_m00F5206C911E7AA8FE924E1F7520E80CF8D3564F (String_t* ___0_json, const RuntimeMethod* method)
{
	return ((  GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* (*) (String_t*, const RuntimeMethod*))JsonMapper_ToObject_TisRuntimeObject_m22A76A93139A43356F4977D050E83F88672E6CF7_gshared)(___0_json, method);
}
// System.Void Gpm.WebView.Internal.NativeCallbackHandler::UnregisterCallback(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCallbackHandler_UnregisterCallback_m0F4471170AB0ED37A3A5C56CD4C3B47EE1835594 (int32_t ___0_handle, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.NativeWebView::RestoreOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_RestoreOrientation_m36F5349181B51B50CC87DAA51FD74290C0D0ACAE (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate::Invoke(Gpm.WebView.GpmWebViewCallback/CallbackType,System.String,Gpm.WebView.GpmWebViewError)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GpmWebViewDelegate_Invoke_m6B8AEC4C122FCE7350C5E2A1D49D9AEFBF8C2254_inline (GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* __this, int32_t ___0_type, String_t* ___1_data, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* ___2_error, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.NativeRequest/Position::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Position__ctor_m83002433A02C206B83390F73B029DB4461299EDA (Position_t270EA20F5BD7C97729951399753CABF1D1D7140F* __this, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.NativeRequest/Size::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Size__ctor_m6694855F722337B88B9F940DFF032BB327927B8E (Size_t5584C5D0B515D1AB5E8D1D89FBD1EBBC9AF3C57A* __this, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.NativeRequest/Margins::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Margins__ctor_m6A47CCAB0D9055D44527DB26BBA61FCFBFE54B75 (Margins_t461D5F3B2F0F4291936FCF0D7A8DE1EA21F6DEA2* __this, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m0C3F3778B1D646778F41B6912138AEEEE6BEB9D4 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Screen::get_autorotateToPortrait()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Screen_get_autorotateToPortrait_m2B06F698FE88818A94F10E4398E0F2A9E5A4E30D (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Screen::get_autorotateToPortraitUpsideDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Screen_get_autorotateToPortraitUpsideDown_m2CCB06FD6E3E39BF46F966AAF8E3F1B79461C286 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Screen::get_autorotateToLandscapeLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Screen_get_autorotateToLandscapeLeft_m367356230548141540C472295A159C6DF49E4806 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Screen::get_autorotateToLandscapeRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Screen_get_autorotateToLandscapeRight_mE80288BCA1B823796E2142B005F98EC0EAB769F4 (const RuntimeMethod* method) ;
// UnityEngine.ScreenOrientation UnityEngine.Screen::get_orientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_orientation_mA6B22A441187D50831B2B18CA48A8F64BD1BD89E (const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_autorotateToPortrait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_autorotateToPortrait_m42E3A0FB93AB61609F9A1E774B028A90C5791634 (bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_autorotateToPortraitUpsideDown(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_autorotateToPortraitUpsideDown_m322363C3E0347AF6C62240BD814C8719CF54AF12 (bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_autorotateToLandscapeLeft(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_autorotateToLandscapeLeft_mEBF1EEDF3BCD85A85FEF5B59ECEE40D6A73983D0 (bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_autorotateToLandscapeRight(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_autorotateToLandscapeRight_m259F67F2F38E5E28A7A5ABBEA5CFE9650DD7B184 (bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_orientation(UnityEngine.ScreenOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_orientation_mFCC880DDE7D3916DD8DA84E546F4743EEE773C4D (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.NativeRequest/ShowWebBrowser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowWebBrowser__ctor_m2B04FAC5F218BBB7433BBE93AC5EF8322F917C2A (ShowWebBrowser_t5C63CFC890E6EA9F6F7D9419272400EAD1265D0A* __this, const RuntimeMethod* method) ;
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
// System.Void SampleWebView::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_Awake_m09F060B8CA12ABF5D54D2414ADE1E3865A3F6BE8 (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) 
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
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___urlInput_5;
		NullCheck(L_0);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_0, _stringLiteral624680CF43A758F7BA992C7A896E612BF23FA850, NULL);
		// backgroundColorInput.text = "#FFFFFF";
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_1 = __this->___backgroundColorInput_8;
		NullCheck(L_1);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_1, _stringLiteral663488ABE057592166FC68C8A6EF26CBF9C8178E, NULL);
		// navigationColorInput.text = "#4B96E6";
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_2 = __this->___navigationColorInput_9;
		NullCheck(L_2);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_2, _stringLiteralEA68DCEC5DF5C9D1BAB1EB121891A32269876B92, NULL);
		// safeBrowsingNavigationBarColor.text = "#4B96E6";
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_3 = __this->___safeBrowsingNavigationBarColor_33;
		NullCheck(L_3);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_3, _stringLiteralEA68DCEC5DF5C9D1BAB1EB121891A32269876B92, NULL);
		// safeBrowsingNavigationTextColor.text = "#FFFFFF";
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_4 = __this->___safeBrowsingNavigationTextColor_34;
		NullCheck(L_4);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_4, _stringLiteral663488ABE057592166FC68C8A6EF26CBF9C8178E, NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::OpenWebView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_OpenWebView_m5B0D3F2003540B3CEAF1CFE385F338A74B025359 (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SampleWebView_OnWebViewCallback_m28FDC7421A12F3F97F961FFBC9EADA13FE1C36C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE7BA8039B0BAFD01FB42599D4033518FDAC4259);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(urlInput.text) == false)
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___urlInput_5;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_0, NULL);
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		if (L_2)
		{
			goto IL_003b;
		}
	}
	{
		// GpmWebView.ShowUrl(urlInput.text, GetConfiguration(), OnWebViewCallback, GetCustomSchemeList());
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_3 = __this->___urlInput_5;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_3, NULL);
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_5;
		L_5 = SampleWebView_GetConfiguration_m153B9C62983C5BA0D4BA0D77A9126EE52E9C3F17(__this, NULL);
		GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* L_6 = (GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F*)il2cpp_codegen_object_new(GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		GpmWebViewDelegate__ctor_mEA1F534F671A39D2D8A1C7D8098ABD70C631DB86(L_6, __this, (intptr_t)((void*)SampleWebView_OnWebViewCallback_m28FDC7421A12F3F97F961FFBC9EADA13FE1C36C1_RuntimeMethod_var), NULL);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7;
		L_7 = SampleWebView_GetCustomSchemeList_mA5EB6B888F3441BF36A715AB2161EEB66ABC09FF(__this, NULL);
		GpmWebView_ShowUrl_m7F773079112A695765E5D072BF1277B58D9011A4(L_4, L_5, L_6, L_7, NULL);
		return;
	}

IL_003b:
	{
		// Debug.LogError("[SampleWebView] Input url is empty.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralFE7BA8039B0BAFD01FB42599D4033518FDAC4259, NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::OpenWithHTMLString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_OpenWithHTMLString_m32E261CFAB621C79FD146DC9F357062551FA3062 (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SampleWebView_OnWebViewCallback_m28FDC7421A12F3F97F961FFBC9EADA13FE1C36C1_RuntimeMethod_var);
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
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_0;
		L_0 = SampleWebView_GetConfiguration_m153B9C62983C5BA0D4BA0D77A9126EE52E9C3F17(__this, NULL);
		GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* L_1 = (GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F*)il2cpp_codegen_object_new(GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GpmWebViewDelegate__ctor_mEA1F534F671A39D2D8A1C7D8098ABD70C631DB86(L_1, __this, (intptr_t)((void*)SampleWebView_OnWebViewCallback_m28FDC7421A12F3F97F961FFBC9EADA13FE1C36C1_RuntimeMethod_var), NULL);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2;
		L_2 = SampleWebView_GetCustomSchemeList_mA5EB6B888F3441BF36A715AB2161EEB66ABC09FF(__this, NULL);
		GpmWebView_ShowHtmlString_m04576315F51AA05A32A33F4D0E1FCEEDE1166BB1(_stringLiteralC34B23CD76F40324322D49396FD0F04E34128CAB, L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::OpenSafeBrowsing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_OpenSafeBrowsing_m8498648AA6CE84DDF3961524F13ED708E5E73FF6 (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SampleWebView_OnWebViewCallback_m28FDC7421A12F3F97F961FFBC9EADA13FE1C36C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE7BA8039B0BAFD01FB42599D4033518FDAC4259);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(urlInput.text) == false)
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___urlInput_5;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_0, NULL);
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
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
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_3 = __this->___urlInput_5;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_3, NULL);
		ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77* L_5 = (ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77*)il2cpp_codegen_object_new(ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ConfigurationSafeBrowsing__ctor_m99AB150B133C0510E7C1DA8F8984CFB94E357E3F(L_5, NULL);
		ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77* L_6 = L_5;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_7 = __this->___safeBrowsingNavigationBarColor_33;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_7, NULL);
		NullCheck(L_6);
		L_6->___navigationBarColor_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___navigationBarColor_0), (void*)L_8);
		ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77* L_9 = L_6;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_10 = __this->___safeBrowsingNavigationTextColor_34;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_10, NULL);
		NullCheck(L_9);
		L_9->___navigationTextColor_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___navigationTextColor_1), (void*)L_11);
		GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* L_12 = (GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F*)il2cpp_codegen_object_new(GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		GpmWebViewDelegate__ctor_mEA1F534F671A39D2D8A1C7D8098ABD70C631DB86(L_12, __this, (intptr_t)((void*)SampleWebView_OnWebViewCallback_m28FDC7421A12F3F97F961FFBC9EADA13FE1C36C1_RuntimeMethod_var), NULL);
		GpmWebViewSafeBrowsing_ShowSafeBrowsing_mA5B1D01E29C5231ED040B402A45D5E2953F4C048(L_4, L_9, L_12, NULL);
		return;
	}

IL_0056:
	{
		// Debug.LogError("[SampleWebView] Input url is empty.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralFE7BA8039B0BAFD01FB42599D4033518FDAC4259, NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::OpenWebBrowser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_OpenWebBrowser_m174ED0D09BA521595B7AAE98CF3E4A2FB46C48F2 (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE7BA8039B0BAFD01FB42599D4033518FDAC4259);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(urlInput.text) == false)
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___urlInput_5;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_0, NULL);
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		// GpmWebView.ShowWebBrowser(urlInput.text);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_3 = __this->___urlInput_5;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_3, NULL);
		GpmWebView_ShowWebBrowser_m92D3AF8A9D47956AC9190F0BC5C6D9016CD98B86(L_4, NULL);
		return;
	}

IL_0023:
	{
		// Debug.LogError("[SampleWebView] Input url is empty.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralFE7BA8039B0BAFD01FB42599D4033518FDAC4259, NULL);
		// }
		return;
	}
}
// Gpm.WebView.GpmWebViewRequest/Configuration SampleWebView::GetConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* SampleWebView_GetConfiguration_m153B9C62983C5BA0D4BA0D77A9126EE52E9C3F17 (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomSchemePostCommand_tD5519E7A81BD61CCB24370A69469848185793839_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8CBA63A13F1D65A1D993CEFCDA7DE953DA8286C);
		s_Il2CppMethodInitialized = true;
	}
	CustomSchemePostCommand_tD5519E7A81BD61CCB24370A69469848185793839* V_0 = NULL;
	Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* G_B2_0 = NULL;
	Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* G_B2_1 = NULL;
	Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* G_B1_0 = NULL;
	Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* G_B3_1 = NULL;
	Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* G_B3_2 = NULL;
	{
		// GpmWebViewRequest.CustomSchemePostCommand customSchemePostCommand = new GpmWebViewRequest.CustomSchemePostCommand();
		CustomSchemePostCommand_tD5519E7A81BD61CCB24370A69469848185793839* L_0 = (CustomSchemePostCommand_tD5519E7A81BD61CCB24370A69469848185793839*)il2cpp_codegen_object_new(CustomSchemePostCommand_tD5519E7A81BD61CCB24370A69469848185793839_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CustomSchemePostCommand__ctor_mB77999D64C37D95EFFF58511E9425A2AD25BFA94(L_0, NULL);
		V_0 = L_0;
		// customSchemePostCommand.Close("CUSTOM_SCHEME_POST_CLOSE");
		CustomSchemePostCommand_tD5519E7A81BD61CCB24370A69469848185793839* L_1 = V_0;
		NullCheck(L_1);
		CustomSchemePostCommand_Close_mDE45A89AAD6E82F0069C99F63EAE1D0279CB4700(L_1, _stringLiteralD8CBA63A13F1D65A1D993CEFCDA7DE953DA8286C, NULL);
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
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_2 = (Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D*)il2cpp_codegen_object_new(Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Configuration__ctor_m328501DC04AFAC51642C57936EFD0209F87CD282(L_2, NULL);
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_3 = L_2;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_4 = __this->___styleDropdown_20;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_4, NULL);
		NullCheck(L_3);
		L_3->___style_0 = L_5;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_6 = L_3;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_7 = __this->___orientationDropdown_21;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_7, NULL);
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
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_9 = __this->___orientationDropdown_21;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_9, NULL);
		G_B3_0 = ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_10, 1))&((int32_t)31)))));
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
		G_B3_1->___orientation_1 = G_B3_0;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_11 = G_B3_2;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_12 = __this->___clearCookieToggle_10;
		NullCheck(L_12);
		bool L_13;
		L_13 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_12, NULL);
		NullCheck(L_11);
		L_11->___isClearCache_3 = L_13;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_14 = L_11;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_15 = __this->___clearCacheToggle_11;
		NullCheck(L_15);
		bool L_16;
		L_16 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_15, NULL);
		NullCheck(L_14);
		L_14->___isClearCookie_2 = L_16;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_17 = L_14;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_18 = __this->___backgroundColorInput_8;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_18, NULL);
		NullCheck(L_17);
		L_17->___backgroundColor_4 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->___backgroundColor_4), (void*)L_19);
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_20 = L_17;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_21 = __this->___navigationBarVisibleToggle_12;
		NullCheck(L_21);
		bool L_22;
		L_22 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_21, NULL);
		NullCheck(L_20);
		L_20->___isNavigationBarVisible_5 = L_22;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_23 = L_20;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_24 = __this->___navigationColorInput_9;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_24, NULL);
		NullCheck(L_23);
		L_23->___navigationBarColor_6 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&L_23->___navigationBarColor_6), (void*)L_25);
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_26 = L_23;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_27 = __this->___titleInput_6;
		NullCheck(L_27);
		String_t* L_28;
		L_28 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_27, NULL);
		NullCheck(L_26);
		L_26->___title_7 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&L_26->___title_7), (void*)L_28);
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_29 = L_26;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_30 = __this->___backButtonVisibleToggle_13;
		NullCheck(L_30);
		bool L_31;
		L_31 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_30, NULL);
		NullCheck(L_29);
		L_29->___isBackButtonVisible_8 = L_31;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_32 = L_29;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_33 = __this->___forwardButtonVisibleToggle_14;
		NullCheck(L_33);
		bool L_34;
		L_34 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_33, NULL);
		NullCheck(L_32);
		L_32->___isForwardButtonVisible_9 = L_34;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_35 = L_32;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_36 = __this->___closeButtonVisibleToggle_15;
		NullCheck(L_36);
		bool L_37;
		L_37 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_36, NULL);
		NullCheck(L_35);
		L_35->___isCloseButtonVisible_10 = L_37;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_38 = L_35;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_39 = __this->___supportMultipleWindowToggle_16;
		NullCheck(L_39);
		bool L_40;
		L_40 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_39, NULL);
		NullCheck(L_38);
		L_38->___supportMultipleWindows_11 = L_40;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_41 = L_38;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_42 = __this->___userAgentStringInput_31;
		NullCheck(L_42);
		String_t* L_43;
		L_43 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_42, NULL);
		NullCheck(L_41);
		L_41->___userAgentString_12 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&L_41->___userAgentString_12), (void*)L_43);
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_44 = L_41;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_45 = __this->___javascriptInput_32;
		NullCheck(L_45);
		String_t* L_46;
		L_46 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_45, NULL);
		NullCheck(L_44);
		L_44->___addJavascript_13 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&L_44->___addJavascript_13), (void*)L_46);
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_47 = L_44;
		CustomSchemePostCommand_tD5519E7A81BD61CCB24370A69469848185793839* L_48 = V_0;
		NullCheck(L_47);
		L_47->___customSchemePostCommand_14 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&L_47->___customSchemePostCommand_14), (void*)L_48);
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_49 = L_47;
		Position_t824C74226386B322C9926FC29B2AFCBECAFE3778 L_50;
		L_50 = SampleWebView_GetConfigurationPosition_mB68ADEBEDD0203776D7F32D19E0C2AF37115D3C3(__this, NULL);
		NullCheck(L_49);
		L_49->___position_15 = L_50;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_51 = L_49;
		Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F L_52;
		L_52 = SampleWebView_GetConfigurationSize_m0D8D42722F3E9F761B597B08D5CB15CB36AE5BFA(__this, NULL);
		NullCheck(L_51);
		L_51->___size_16 = L_52;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_53 = L_51;
		Margins_t710D98C860962372C9323F82DD766A3977353F85 L_54;
		L_54 = SampleWebView_GetConfigurationMargins_mB17D4ADCEEE478A8D66138E4835B799DABE0FBEC(__this, NULL);
		NullCheck(L_53);
		L_53->___margins_17 = L_54;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_55 = L_53;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_56 = __this->___backButtonCloseCallbackUsedToggle_17;
		NullCheck(L_56);
		bool L_57;
		L_57 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_56, NULL);
		NullCheck(L_55);
		L_55->___isBackButtonCloseCallbackUsed_18 = L_57;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_58 = L_55;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_59 = __this->___contentModeDropdown_22;
		NullCheck(L_59);
		int32_t L_60;
		L_60 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_59, NULL);
		NullCheck(L_58);
		L_58->___contentMode_19 = L_60;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_61 = L_58;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_62 = __this->___maskViewVisibleToggle_18;
		NullCheck(L_62);
		bool L_63;
		L_63 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_62, NULL);
		NullCheck(L_61);
		L_61->___isMaskViewVisible_20 = L_63;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_64 = L_61;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_65 = __this->___autoRotationToggle_19;
		NullCheck(L_65);
		bool L_66;
		L_66 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_65, NULL);
		NullCheck(L_64);
		L_64->___isAutoRotation_21 = L_66;
		return L_64;
	}
}
// Gpm.WebView.GpmWebViewRequest/Position SampleWebView::GetConfigurationPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Position_t824C74226386B322C9926FC29B2AFCBECAFE3778 SampleWebView_GetConfigurationPosition_mB68ADEBEDD0203776D7F32D19E0C2AF37115D3C3 (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Position_t824C74226386B322C9926FC29B2AFCBECAFE3778 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// bool hasValue = false;
		V_0 = (bool)0;
		// if (string.IsNullOrEmpty(popupXInput.text) == false && string.IsNullOrEmpty(popupYInput.text) == false)
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___popupXInput_23;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_0, NULL);
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_3 = __this->___popupYInput_24;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_3, NULL);
		bool L_5;
		L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
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
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_6 = __this->___popupXInput_23;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_6, NULL);
		bool L_8;
		L_8 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_7, (&V_1), NULL);
		// int y = 0;
		V_2 = 0;
		// int.TryParse(popupYInput.text, out y);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_9 = __this->___popupYInput_24;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_9, NULL);
		bool L_11;
		L_11 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_10, (&V_2), NULL);
		// return new GpmWebViewRequest.Position
		// {
		//     hasValue = hasValue,
		//     x = x,
		//     y = y
		// };
		il2cpp_codegen_initobj((&V_3), sizeof(Position_t824C74226386B322C9926FC29B2AFCBECAFE3778));
		bool L_12 = V_0;
		(&V_3)->___hasValue_0 = L_12;
		int32_t L_13 = V_1;
		(&V_3)->___x_1 = L_13;
		int32_t L_14 = V_2;
		(&V_3)->___y_2 = L_14;
		Position_t824C74226386B322C9926FC29B2AFCBECAFE3778 L_15 = V_3;
		return L_15;
	}
}
// Gpm.WebView.GpmWebViewRequest/Size SampleWebView::GetConfigurationSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F SampleWebView_GetConfigurationSize_m0D8D42722F3E9F761B597B08D5CB15CB36AE5BFA (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// bool hasValue = false;
		V_0 = (bool)0;
		// if (string.IsNullOrEmpty(popupWidthInput.text) == false && string.IsNullOrEmpty(popupHeightInput.text) == false)
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___popupWidthInput_25;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_0, NULL);
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_3 = __this->___popupHeightInput_26;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_3, NULL);
		bool L_5;
		L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
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
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_6 = __this->___popupWidthInput_25;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_6, NULL);
		bool L_8;
		L_8 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_7, (&V_1), NULL);
		// int height = 0;
		V_2 = 0;
		// int.TryParse(popupHeightInput.text, out height);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_9 = __this->___popupHeightInput_26;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_9, NULL);
		bool L_11;
		L_11 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_10, (&V_2), NULL);
		// return new GpmWebViewRequest.Size
		// {
		//     hasValue = hasValue,
		//     width = width,
		//     height = height
		// };
		il2cpp_codegen_initobj((&V_3), sizeof(Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F));
		bool L_12 = V_0;
		(&V_3)->___hasValue_0 = L_12;
		int32_t L_13 = V_1;
		(&V_3)->___width_1 = L_13;
		int32_t L_14 = V_2;
		(&V_3)->___height_2 = L_14;
		Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F L_15 = V_3;
		return L_15;
	}
}
// Gpm.WebView.GpmWebViewRequest/Margins SampleWebView::GetConfigurationMargins()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Margins_t710D98C860962372C9323F82DD766A3977353F85 SampleWebView_GetConfigurationMargins_mB17D4ADCEEE478A8D66138E4835B799DABE0FBEC (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Margins_t710D98C860962372C9323F82DD766A3977353F85 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// bool hasValue = false;
		V_0 = (bool)0;
		// if (string.IsNullOrEmpty(popupMarginsLeftInput.text) == false &&
		//     string.IsNullOrEmpty(popupMarginsTopInput.text) == false &&
		//     string.IsNullOrEmpty(popupMarginsRightInput.text) == false &&
		//     string.IsNullOrEmpty(popupMarginsBottomInput.text) == false)
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___popupMarginsLeftInput_27;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_0, NULL);
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		if (L_2)
		{
			goto IL_004c;
		}
	}
	{
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_3 = __this->___popupMarginsTopInput_28;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_3, NULL);
		bool L_5;
		L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
		if (L_5)
		{
			goto IL_004c;
		}
	}
	{
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_6 = __this->___popupMarginsRightInput_29;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_6, NULL);
		bool L_8;
		L_8 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_7, NULL);
		if (L_8)
		{
			goto IL_004c;
		}
	}
	{
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_9 = __this->___popupMarginsBottomInput_30;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_9, NULL);
		bool L_11;
		L_11 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_10, NULL);
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
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_12 = __this->___popupMarginsLeftInput_27;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_12, NULL);
		bool L_14;
		L_14 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_13, (&V_1), NULL);
		// int marginTop = 0;
		V_2 = 0;
		// int.TryParse(popupMarginsTopInput.text, out marginTop);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_15 = __this->___popupMarginsTopInput_28;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_15, NULL);
		bool L_17;
		L_17 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_16, (&V_2), NULL);
		// int marginRight = 0;
		V_3 = 0;
		// int.TryParse(popupMarginsRightInput.text, out marginRight);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_18 = __this->___popupMarginsRightInput_29;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_18, NULL);
		bool L_20;
		L_20 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_19, (&V_3), NULL);
		// int marginBottom = 0;
		V_4 = 0;
		// int.TryParse(popupMarginsBottomInput.text, out marginBottom);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_21 = __this->___popupMarginsBottomInput_30;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_21, NULL);
		bool L_23;
		L_23 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_22, (&V_4), NULL);
		// return new GpmWebViewRequest.Margins
		// {
		//     hasValue = hasValue,
		//     left = marginLeft,
		//     top = marginTop,
		//     right = marginRight,
		//     bottom = marginBottom
		// };
		il2cpp_codegen_initobj((&V_5), sizeof(Margins_t710D98C860962372C9323F82DD766A3977353F85));
		bool L_24 = V_0;
		(&V_5)->___hasValue_0 = L_24;
		int32_t L_25 = V_1;
		(&V_5)->___left_1 = L_25;
		int32_t L_26 = V_2;
		(&V_5)->___top_2 = L_26;
		int32_t L_27 = V_3;
		(&V_5)->___right_3 = L_27;
		int32_t L_28 = V_4;
		(&V_5)->___bottom_4 = L_28;
		Margins_t710D98C860962372C9323F82DD766A3977353F85 L_29 = V_5;
		return L_29;
	}
}
// System.Collections.Generic.List`1<System.String> SampleWebView::GetCustomSchemeList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* SampleWebView_GetCustomSchemeList_mA5EB6B888F3441BF36A715AB2161EEB66ABC09FF (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	{
		// List<string> customSchemeList = null;
		V_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)NULL;
		// if (string.IsNullOrEmpty(customSchemeInput.text) == false)
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___customSchemeInput_7;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_0, NULL);
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		if (L_2)
		{
			goto IL_002d;
		}
	}
	{
		// string[] schemes = customSchemeInput.text.Split(',');
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_3 = __this->___customSchemeInput_7;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_3, NULL);
		NullCheck(L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5;
		L_5 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_4, ((int32_t)44), 0, NULL);
		// customSchemeList = new List<string>(schemes);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC(L_6, (RuntimeObject*)L_5, List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
		V_0 = L_6;
	}

IL_002d:
	{
		// return customSchemeList;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = V_0;
		return L_7;
	}
}
// System.Void SampleWebView::OnWebViewCallback(Gpm.WebView.GpmWebViewCallback/CallbackType,System.String,Gpm.WebView.GpmWebViewError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_OnWebViewCallback_m28FDC7421A12F3F97F961FFBC9EADA13FE1C36C1 (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, int32_t ___0_callbackType, String_t* ___1_data, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* ___2_error, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackType_t0014D0BBC86D12814581740EF23008F3ABA89E2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
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
		Il2CppFakeBox<int32_t> L_0(CallbackType_t0014D0BBC86D12814581740EF23008F3ABA89E2A_il2cpp_TypeInfo_var, (&___0_callbackType));
		String_t* L_1;
		L_1 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_0), NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3353FE40126F6A90AE70941B74EDAC7A246A6819, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		int32_t L_3 = ___0_callbackType;
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
		GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* L_4 = ___2_error;
		if (!L_4)
		{
			goto IL_0117;
		}
	}
	{
		// Debug.LogFormat("Fail to open WebView. Error:{0}", error);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* L_7 = ___2_error;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteral9819B2ADE3033816812B6476FC3144B46A0E4301, L_6, NULL);
		// break;
		return;
	}

IL_0066:
	{
		// if (error != null)
		GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* L_8 = ___2_error;
		if (!L_8)
		{
			goto IL_0117;
		}
	}
	{
		// Debug.LogFormat("Fail to close WebView. Error:{0}", error);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
		GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* L_11 = ___2_error;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_11);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteral0B241CB3EEE5D589CA19710ABBF0C7D1B11EB9A3, L_10, NULL);
		// break;
		return;
	}

IL_0081:
	{
		// if (string.IsNullOrEmpty(data) == false)
		String_t* L_12 = ___1_data;
		bool L_13;
		L_13 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_12, NULL);
		if (L_13)
		{
			goto IL_0117;
		}
	}
	{
		// Debug.LogFormat("PageStarted Url : {0}", data);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_14;
		String_t* L_16 = ___1_data;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_16);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteralAEB3364828FCCCEE79F6A49E9F6DEA464771F96B, L_15, NULL);
		// break;
		return;
	}

IL_00a1:
	{
		// if (string.IsNullOrEmpty(data) == false)
		String_t* L_17 = ___1_data;
		bool L_18;
		L_18 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_17, NULL);
		if (L_18)
		{
			goto IL_0117;
		}
	}
	{
		// Debug.LogFormat("Loaded Page:{0}", data);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_19;
		String_t* L_21 = ___1_data;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_21);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteral4EF917734AC14033FA41F53D00974CA539F0C445, L_20, NULL);
		// break;
		return;
	}

IL_00be:
	{
		// Debug.Log("MultiWindowOpen");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralFDA796685120EA50A129C055DDF20DF3D99D95DB, NULL);
		// break;
		return;
	}

IL_00c9:
	{
		// Debug.Log("MultiWindowClose");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral04F8834E37A04F4BBCA017B29A65B35423675447, NULL);
		// break;
		return;
	}

IL_00d4:
	{
		// Debug.LogFormat("Scheme:{0}", data);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_22;
		String_t* L_24 = ___1_data;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_24);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteral2F788246CC4B1F56C30416BB4828AB5DFE1D7571, L_23, NULL);
		// break;
		return;
	}

IL_00e9:
	{
		// Debug.Log("GoBack");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral6F5DC295F8AA395185E978B7D6DE85F3427EDEA0, NULL);
		// break;
		return;
	}

IL_00f4:
	{
		// Debug.Log("GoForward");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralDF1C4D8BF6C22738F012A325F6F14CD7E5F8C9FD, NULL);
		// break;
		return;
	}

IL_00ff:
	{
		// Debug.LogFormat("ExecuteJavascript data : {0}, error : {1}", data, error);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = L_25;
		String_t* L_27 = ___1_data;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_27);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_27);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = L_26;
		GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* L_29 = ___2_error;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_29);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_29);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteral392253FBD9663E091C33F0EFE13CDA2BA1CBEAD9, L_28, NULL);
	}

IL_0117:
	{
		// }
		return;
	}
}
// System.Void SampleWebView::CanGoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_CanGoBack_m727EFB93C407EAF57698CBD1CA9D7CAF132502DB (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// bool value = GpmWebView.CanGoBack();
		bool L_0;
		L_0 = GpmWebView_CanGoBack_m98E02FBD459AD35FDB044CDAE5D9704A38554976(NULL);
		V_0 = L_0;
		// output.text = value.ToString();
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_1 = __this->___output_35;
		String_t* L_2;
		L_2 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_0), NULL);
		NullCheck(L_1);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::GoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_GoBack_mFB65A249845185D43893FA74C9D715541CE2FF5E (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) 
{
	{
		// GpmWebView.GoBack();
		GpmWebView_GoBack_m68521649053A9230062F68BF8F106E97039587D0(NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::CanGoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_CanGoForward_m59A86780FB554B4E50F6A184CB1EEBEEC8399537 (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// bool value = GpmWebView.CanGoForward();
		bool L_0;
		L_0 = GpmWebView_CanGoForward_m8D962415440E76C36B235AFDE02299D9FFD55C56(NULL);
		V_0 = L_0;
		// output.text = value.ToString();
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_1 = __this->___output_35;
		String_t* L_2;
		L_2 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_0), NULL);
		NullCheck(L_1);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::GoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_GoForward_m9A31AB07C35DE4B6CFFBDFDCDD648BE00312555D (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) 
{
	{
		// GpmWebView.GoForward();
		GpmWebView_GoForward_m9BD471CEDB00625FBAB793C30D9587F9DE4C11FD(NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::GetX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_GetX_m7F82F517AEE48D73657CCC85E72A87678B4D7F75 (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int value = GpmWebView.GetX();
		int32_t L_0;
		L_0 = GpmWebView_GetX_mA2A9586E4A3277C3A4DD597D9D9297A60BF13AA8(NULL);
		V_0 = L_0;
		// output.text = value.ToString();
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_1 = __this->___output_35;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_1);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::GetY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_GetY_mFAA2E86FCDBEB7B20F405629B242E0EEAACCFB21 (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int value = GpmWebView.GetY();
		int32_t L_0;
		L_0 = GpmWebView_GetY_mC78FC17449707CDEFDD8C738DB0C367E30B1F441(NULL);
		V_0 = L_0;
		// output.text = value.ToString();
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_1 = __this->___output_35;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_1);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::GetWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_GetWidth_mDB45C8589E119A1C3581828399893C8C916D3892 (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int value = GpmWebView.GetWidth();
		int32_t L_0;
		L_0 = GpmWebView_GetWidth_m436A56DCF9BB9CA039E41FBCE278012C083DBF17(NULL);
		V_0 = L_0;
		// output.text = value.ToString();
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_1 = __this->___output_35;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_1);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::GetHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_GetHeight_mCB24617E5F691A9016E2E984DEE3ED07795DDE02 (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int value = GpmWebView.GetHeight();
		int32_t L_0;
		L_0 = GpmWebView_GetHeight_mF40F72EDE0C95B2409F92F97B90807A1D5758DF4(NULL);
		V_0 = L_0;
		// output.text = value.ToString();
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_1 = __this->___output_35;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_1);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::ExecuteJavascript()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_ExecuteJavascript_mD1285456AAFA9F27BA1D4D2489A7812D3EF40426 (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) 
{
	{
		// GpmWebView.ExecuteJavaScript(javascriptInput.text);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___javascriptInput_32;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_0, NULL);
		GpmWebView_ExecuteJavaScript_m05F8C90BF6BCE9627A7BAA743BECBA0FF1515920(L_1, NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_IsActive_m5FB9129193BE320D1C58300129550890798EA40F (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// bool value = GpmWebView.IsActive();
		bool L_0;
		L_0 = GpmWebView_IsActive_m6759FAA9A75D5A98452E6DA542CBC741F73E4A92(NULL);
		V_0 = L_0;
		// output.text = value.ToString();
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_1 = __this->___output_35;
		String_t* L_2;
		L_2 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_0), NULL);
		NullCheck(L_1);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_Close_mE314A5D754CB4BE6A43F3A598D62459E3BC5B4DB (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) 
{
	{
		// GpmWebView.Close();
		GpmWebView_Close_m385022233D170F97DC7C71F707B9032DFEFCA445(NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::SetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_SetPosition_m2C47D69B77CF27DCFF0D15030F595FF1873A4580 (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int x = 0;
		V_0 = 0;
		// int y = 0;
		V_1 = 0;
		// int.TryParse(popupXInput.text, out x);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___popupXInput_23;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_0, NULL);
		bool L_2;
		L_2 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_1, (&V_0), NULL);
		// int.TryParse(popupYInput.text, out y);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_3 = __this->___popupYInput_24;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_3, NULL);
		bool L_5;
		L_5 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_4, (&V_1), NULL);
		// GpmWebView.SetPosition(x, y);
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		GpmWebView_SetPosition_m36B7C83AA6E131287206AC1D142D8E9B5133DBFE(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::SetSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_SetSize_m25C5100044B0D9DAC9934D09825A2B46DE260F6F (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int width = 0;
		V_0 = 0;
		// int height = 0;
		V_1 = 0;
		// int.TryParse(popupWidthInput.text, out width);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___popupWidthInput_25;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_0, NULL);
		bool L_2;
		L_2 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_1, (&V_0), NULL);
		// int.TryParse(popupHeightInput.text, out height);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_3 = __this->___popupHeightInput_26;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_3, NULL);
		bool L_5;
		L_5 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_4, (&V_1), NULL);
		// GpmWebView.SetSize(width, height);
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		GpmWebView_SetSize_mDBEC3C69EFE658258BFBB7741C273A755A594501(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::SetMargins()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_SetMargins_m7BDAE74793166A873DF8EB8FBC025B42AA6B316F (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) 
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
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___popupMarginsLeftInput_27;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_0, NULL);
		bool L_2;
		L_2 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_1, (&V_0), NULL);
		// int.TryParse(popupMarginsTopInput.text, out top);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_3 = __this->___popupMarginsTopInput_28;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_3, NULL);
		bool L_5;
		L_5 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_4, (&V_1), NULL);
		// int.TryParse(popupMarginsRightInput.text, out right);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_6 = __this->___popupMarginsRightInput_29;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_6, NULL);
		bool L_8;
		L_8 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_7, (&V_2), NULL);
		// int.TryParse(popupMarginsBottomInput.text, out bottom);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_9 = __this->___popupMarginsBottomInput_30;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_9, NULL);
		bool L_11;
		L_11 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_10, (&V_3), NULL);
		// GpmWebView.SetMargins(left, top, right, bottom);
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		GpmWebView_SetMargins_m6D076E3B237F6FB172935AC63640649F447B26BB(L_12, L_13, L_14, L_15, NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::ResetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_ResetPosition_mFB5E81724504792F81208C98D13C9207D1149525 (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// popupXInput.text = string.Empty;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___popupXInput_23;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_0);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_0, L_1, NULL);
		// popupYInput.text = string.Empty;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_2 = __this->___popupYInput_24;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_2);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::ResetSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_ResetSize_m9392F42FBC369E990893BBD7936B080F55A05D67 (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// popupWidthInput.text = string.Empty;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___popupWidthInput_25;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_0);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_0, L_1, NULL);
		// popupHeightInput.text = string.Empty;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_2 = __this->___popupHeightInput_26;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_2);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::ResetMargins()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_ResetMargins_mE527807E4170CE224D943892BC14309D5391F3CC (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// popupMarginsLeftInput.text = string.Empty;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___popupMarginsLeftInput_27;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_0);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_0, L_1, NULL);
		// popupMarginsTopInput.text = string.Empty;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_2 = __this->___popupMarginsTopInput_28;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_2);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_2, L_3, NULL);
		// popupMarginsRightInput.text = string.Empty;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_4 = __this->___popupMarginsRightInput_29;
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_4);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_4, L_5, NULL);
		// popupMarginsBottomInput.text = string.Empty;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_6 = __this->___popupMarginsBottomInput_30;
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_6);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView__ctor_m156AB2ACD0F4CFAB34D3122F8D1C885D565D69B9 (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) 
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
// Conversion methods for marshalling of: Gpm.WebView.GpmWebViewRequest/Position
IL2CPP_EXTERN_C void Position_t824C74226386B322C9926FC29B2AFCBECAFE3778_marshal_pinvoke(const Position_t824C74226386B322C9926FC29B2AFCBECAFE3778& unmarshaled, Position_t824C74226386B322C9926FC29B2AFCBECAFE3778_marshaled_pinvoke& marshaled)
{
	marshaled.___hasValue_0 = static_cast<int32_t>(unmarshaled.___hasValue_0);
	marshaled.___x_1 = unmarshaled.___x_1;
	marshaled.___y_2 = unmarshaled.___y_2;
}
IL2CPP_EXTERN_C void Position_t824C74226386B322C9926FC29B2AFCBECAFE3778_marshal_pinvoke_back(const Position_t824C74226386B322C9926FC29B2AFCBECAFE3778_marshaled_pinvoke& marshaled, Position_t824C74226386B322C9926FC29B2AFCBECAFE3778& unmarshaled)
{
	bool unmarshaledhasValue_temp_0 = false;
	unmarshaledhasValue_temp_0 = static_cast<bool>(marshaled.___hasValue_0);
	unmarshaled.___hasValue_0 = unmarshaledhasValue_temp_0;
	int32_t unmarshaledx_temp_1 = 0;
	unmarshaledx_temp_1 = marshaled.___x_1;
	unmarshaled.___x_1 = unmarshaledx_temp_1;
	int32_t unmarshaledy_temp_2 = 0;
	unmarshaledy_temp_2 = marshaled.___y_2;
	unmarshaled.___y_2 = unmarshaledy_temp_2;
}
// Conversion method for clean up from marshalling of: Gpm.WebView.GpmWebViewRequest/Position
IL2CPP_EXTERN_C void Position_t824C74226386B322C9926FC29B2AFCBECAFE3778_marshal_pinvoke_cleanup(Position_t824C74226386B322C9926FC29B2AFCBECAFE3778_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Gpm.WebView.GpmWebViewRequest/Position
IL2CPP_EXTERN_C void Position_t824C74226386B322C9926FC29B2AFCBECAFE3778_marshal_com(const Position_t824C74226386B322C9926FC29B2AFCBECAFE3778& unmarshaled, Position_t824C74226386B322C9926FC29B2AFCBECAFE3778_marshaled_com& marshaled)
{
	marshaled.___hasValue_0 = static_cast<int32_t>(unmarshaled.___hasValue_0);
	marshaled.___x_1 = unmarshaled.___x_1;
	marshaled.___y_2 = unmarshaled.___y_2;
}
IL2CPP_EXTERN_C void Position_t824C74226386B322C9926FC29B2AFCBECAFE3778_marshal_com_back(const Position_t824C74226386B322C9926FC29B2AFCBECAFE3778_marshaled_com& marshaled, Position_t824C74226386B322C9926FC29B2AFCBECAFE3778& unmarshaled)
{
	bool unmarshaledhasValue_temp_0 = false;
	unmarshaledhasValue_temp_0 = static_cast<bool>(marshaled.___hasValue_0);
	unmarshaled.___hasValue_0 = unmarshaledhasValue_temp_0;
	int32_t unmarshaledx_temp_1 = 0;
	unmarshaledx_temp_1 = marshaled.___x_1;
	unmarshaled.___x_1 = unmarshaledx_temp_1;
	int32_t unmarshaledy_temp_2 = 0;
	unmarshaledy_temp_2 = marshaled.___y_2;
	unmarshaled.___y_2 = unmarshaledy_temp_2;
}
// Conversion method for clean up from marshalling of: Gpm.WebView.GpmWebViewRequest/Position
IL2CPP_EXTERN_C void Position_t824C74226386B322C9926FC29B2AFCBECAFE3778_marshal_com_cleanup(Position_t824C74226386B322C9926FC29B2AFCBECAFE3778_marshaled_com& marshaled)
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
IL2CPP_EXTERN_C void Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F_marshal_pinvoke(const Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F& unmarshaled, Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F_marshaled_pinvoke& marshaled)
{
	marshaled.___hasValue_0 = static_cast<int32_t>(unmarshaled.___hasValue_0);
	marshaled.___width_1 = unmarshaled.___width_1;
	marshaled.___height_2 = unmarshaled.___height_2;
}
IL2CPP_EXTERN_C void Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F_marshal_pinvoke_back(const Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F_marshaled_pinvoke& marshaled, Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F& unmarshaled)
{
	bool unmarshaledhasValue_temp_0 = false;
	unmarshaledhasValue_temp_0 = static_cast<bool>(marshaled.___hasValue_0);
	unmarshaled.___hasValue_0 = unmarshaledhasValue_temp_0;
	int32_t unmarshaledwidth_temp_1 = 0;
	unmarshaledwidth_temp_1 = marshaled.___width_1;
	unmarshaled.___width_1 = unmarshaledwidth_temp_1;
	int32_t unmarshaledheight_temp_2 = 0;
	unmarshaledheight_temp_2 = marshaled.___height_2;
	unmarshaled.___height_2 = unmarshaledheight_temp_2;
}
// Conversion method for clean up from marshalling of: Gpm.WebView.GpmWebViewRequest/Size
IL2CPP_EXTERN_C void Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F_marshal_pinvoke_cleanup(Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Gpm.WebView.GpmWebViewRequest/Size
IL2CPP_EXTERN_C void Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F_marshal_com(const Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F& unmarshaled, Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F_marshaled_com& marshaled)
{
	marshaled.___hasValue_0 = static_cast<int32_t>(unmarshaled.___hasValue_0);
	marshaled.___width_1 = unmarshaled.___width_1;
	marshaled.___height_2 = unmarshaled.___height_2;
}
IL2CPP_EXTERN_C void Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F_marshal_com_back(const Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F_marshaled_com& marshaled, Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F& unmarshaled)
{
	bool unmarshaledhasValue_temp_0 = false;
	unmarshaledhasValue_temp_0 = static_cast<bool>(marshaled.___hasValue_0);
	unmarshaled.___hasValue_0 = unmarshaledhasValue_temp_0;
	int32_t unmarshaledwidth_temp_1 = 0;
	unmarshaledwidth_temp_1 = marshaled.___width_1;
	unmarshaled.___width_1 = unmarshaledwidth_temp_1;
	int32_t unmarshaledheight_temp_2 = 0;
	unmarshaledheight_temp_2 = marshaled.___height_2;
	unmarshaled.___height_2 = unmarshaledheight_temp_2;
}
// Conversion method for clean up from marshalling of: Gpm.WebView.GpmWebViewRequest/Size
IL2CPP_EXTERN_C void Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F_marshal_com_cleanup(Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F_marshaled_com& marshaled)
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
// Conversion methods for marshalling of: Gpm.WebView.GpmWebViewRequest/Margins
IL2CPP_EXTERN_C void Margins_t710D98C860962372C9323F82DD766A3977353F85_marshal_pinvoke(const Margins_t710D98C860962372C9323F82DD766A3977353F85& unmarshaled, Margins_t710D98C860962372C9323F82DD766A3977353F85_marshaled_pinvoke& marshaled)
{
	marshaled.___hasValue_0 = static_cast<int32_t>(unmarshaled.___hasValue_0);
	marshaled.___left_1 = unmarshaled.___left_1;
	marshaled.___top_2 = unmarshaled.___top_2;
	marshaled.___right_3 = unmarshaled.___right_3;
	marshaled.___bottom_4 = unmarshaled.___bottom_4;
}
IL2CPP_EXTERN_C void Margins_t710D98C860962372C9323F82DD766A3977353F85_marshal_pinvoke_back(const Margins_t710D98C860962372C9323F82DD766A3977353F85_marshaled_pinvoke& marshaled, Margins_t710D98C860962372C9323F82DD766A3977353F85& unmarshaled)
{
	bool unmarshaledhasValue_temp_0 = false;
	unmarshaledhasValue_temp_0 = static_cast<bool>(marshaled.___hasValue_0);
	unmarshaled.___hasValue_0 = unmarshaledhasValue_temp_0;
	int32_t unmarshaledleft_temp_1 = 0;
	unmarshaledleft_temp_1 = marshaled.___left_1;
	unmarshaled.___left_1 = unmarshaledleft_temp_1;
	int32_t unmarshaledtop_temp_2 = 0;
	unmarshaledtop_temp_2 = marshaled.___top_2;
	unmarshaled.___top_2 = unmarshaledtop_temp_2;
	int32_t unmarshaledright_temp_3 = 0;
	unmarshaledright_temp_3 = marshaled.___right_3;
	unmarshaled.___right_3 = unmarshaledright_temp_3;
	int32_t unmarshaledbottom_temp_4 = 0;
	unmarshaledbottom_temp_4 = marshaled.___bottom_4;
	unmarshaled.___bottom_4 = unmarshaledbottom_temp_4;
}
// Conversion method for clean up from marshalling of: Gpm.WebView.GpmWebViewRequest/Margins
IL2CPP_EXTERN_C void Margins_t710D98C860962372C9323F82DD766A3977353F85_marshal_pinvoke_cleanup(Margins_t710D98C860962372C9323F82DD766A3977353F85_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Gpm.WebView.GpmWebViewRequest/Margins
IL2CPP_EXTERN_C void Margins_t710D98C860962372C9323F82DD766A3977353F85_marshal_com(const Margins_t710D98C860962372C9323F82DD766A3977353F85& unmarshaled, Margins_t710D98C860962372C9323F82DD766A3977353F85_marshaled_com& marshaled)
{
	marshaled.___hasValue_0 = static_cast<int32_t>(unmarshaled.___hasValue_0);
	marshaled.___left_1 = unmarshaled.___left_1;
	marshaled.___top_2 = unmarshaled.___top_2;
	marshaled.___right_3 = unmarshaled.___right_3;
	marshaled.___bottom_4 = unmarshaled.___bottom_4;
}
IL2CPP_EXTERN_C void Margins_t710D98C860962372C9323F82DD766A3977353F85_marshal_com_back(const Margins_t710D98C860962372C9323F82DD766A3977353F85_marshaled_com& marshaled, Margins_t710D98C860962372C9323F82DD766A3977353F85& unmarshaled)
{
	bool unmarshaledhasValue_temp_0 = false;
	unmarshaledhasValue_temp_0 = static_cast<bool>(marshaled.___hasValue_0);
	unmarshaled.___hasValue_0 = unmarshaledhasValue_temp_0;
	int32_t unmarshaledleft_temp_1 = 0;
	unmarshaledleft_temp_1 = marshaled.___left_1;
	unmarshaled.___left_1 = unmarshaledleft_temp_1;
	int32_t unmarshaledtop_temp_2 = 0;
	unmarshaledtop_temp_2 = marshaled.___top_2;
	unmarshaled.___top_2 = unmarshaledtop_temp_2;
	int32_t unmarshaledright_temp_3 = 0;
	unmarshaledright_temp_3 = marshaled.___right_3;
	unmarshaled.___right_3 = unmarshaledright_temp_3;
	int32_t unmarshaledbottom_temp_4 = 0;
	unmarshaledbottom_temp_4 = marshaled.___bottom_4;
	unmarshaled.___bottom_4 = unmarshaledbottom_temp_4;
}
// Conversion method for clean up from marshalling of: Gpm.WebView.GpmWebViewRequest/Margins
IL2CPP_EXTERN_C void Margins_t710D98C860962372C9323F82DD766A3977353F85_marshal_com_cleanup(Margins_t710D98C860962372C9323F82DD766A3977353F85_marshaled_com& marshaled)
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
// System.Void Gpm.WebView.GpmWebViewRequest/Configuration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration__ctor_m328501DC04AFAC51642C57936EFD0209F87CD282 (Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* __this, const RuntimeMethod* method) 
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
		__this->___backgroundColor_4 = _stringLiteral663488ABE057592166FC68C8A6EF26CBF9C8178E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___backgroundColor_4), (void*)_stringLiteral663488ABE057592166FC68C8A6EF26CBF9C8178E);
		// public string navigationBarColor = "#4B96E6";
		__this->___navigationBarColor_6 = _stringLiteralEA68DCEC5DF5C9D1BAB1EB121891A32269876B92;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___navigationBarColor_6), (void*)_stringLiteralEA68DCEC5DF5C9D1BAB1EB121891A32269876B92);
		// public string userAgentString = "";
		__this->___userAgentString_12 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___userAgentString_12), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string addJavascript = "";
		__this->___addJavascript_13 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___addJavascript_13), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
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
// System.Void Gpm.WebView.GpmWebViewRequest/ConfigurationSafeBrowsing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationSafeBrowsing__ctor_m99AB150B133C0510E7C1DA8F8984CFB94E357E3F (ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77* __this, const RuntimeMethod* method) 
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
		__this->___navigationBarColor_0 = _stringLiteralEA68DCEC5DF5C9D1BAB1EB121891A32269876B92;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___navigationBarColor_0), (void*)_stringLiteralEA68DCEC5DF5C9D1BAB1EB121891A32269876B92);
		// public string navigationTextColor = "#FFFFFF";
		__this->___navigationTextColor_1 = _stringLiteral663488ABE057592166FC68C8A6EF26CBF9C8178E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___navigationTextColor_1), (void*)_stringLiteral663488ABE057592166FC68C8A6EF26CBF9C8178E);
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
// System.Void Gpm.WebView.GpmWebViewRequest/CustomSchemePostCommand::Close(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomSchemePostCommand_Close_mDE45A89AAD6E82F0069C99F63EAE1D0279CB4700 (CustomSchemePostCommand_tD5519E7A81BD61CCB24370A69469848185793839* __this, String_t* ___0_customScheme, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral093507DEB05FB14DD8659BC619825EC3274FD8C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		s_Il2CppMethodInitialized = true;
	}
	{
		// commandList.Add(string.Join(GpmWebViewCustomSchemeCommand.SEPARATOR, customScheme, GpmWebViewCustomSchemeCommand.COMMAND_CLOSE));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___commandList_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		String_t* L_3 = ___0_customScheme;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral093507DEB05FB14DD8659BC619825EC3274FD8C6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral093507DEB05FB14DD8659BC619825EC3274FD8C6);
		String_t* L_5;
		L_5 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, L_4, NULL);
		NullCheck(L_0);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_0, L_5, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Gpm.WebView.GpmWebViewRequest/CustomSchemePostCommand::LoadUrl(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomSchemePostCommand_LoadUrl_mE8FCBC1630C5B9D714D55CA6E130BD7051C2F569 (CustomSchemePostCommand_tD5519E7A81BD61CCB24370A69469848185793839* __this, String_t* ___0_customScheme, String_t* ___1_url, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral376A5604328B846CD33630B4AFA7D547D0BD69BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		s_Il2CppMethodInitialized = true;
	}
	{
		// commandList.Add(string.Join(GpmWebViewCustomSchemeCommand.SEPARATOR, customScheme, GpmWebViewCustomSchemeCommand.COMMAND_LOAD_URL, url));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___commandList_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		String_t* L_3 = ___0_customScheme;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral376A5604328B846CD33630B4AFA7D547D0BD69BE);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral376A5604328B846CD33630B4AFA7D547D0BD69BE);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		String_t* L_6 = ___1_url;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_6);
		String_t* L_7;
		L_7 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, L_5, NULL);
		NullCheck(L_0);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_0, L_7, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Gpm.WebView.GpmWebViewRequest/CustomSchemePostCommand::ExecuteJavascript(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomSchemePostCommand_ExecuteJavascript_mA5A9DD87687D8C3013715F575EA92168335A1524 (CustomSchemePostCommand_tD5519E7A81BD61CCB24370A69469848185793839* __this, String_t* ___0_customScheme, String_t* ___1_script, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB55FBB16F1E36A507754DAF6FEBD2C683933A109);
		s_Il2CppMethodInitialized = true;
	}
	{
		// commandList.Add(string.Join(GpmWebViewCustomSchemeCommand.SEPARATOR, customScheme, GpmWebViewCustomSchemeCommand.COMMAND_EXECUTE_JAVASCRIPT, script));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___commandList_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		String_t* L_3 = ___0_customScheme;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralB55FBB16F1E36A507754DAF6FEBD2C683933A109);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralB55FBB16F1E36A507754DAF6FEBD2C683933A109);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		String_t* L_6 = ___1_script;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_6);
		String_t* L_7;
		L_7 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, L_5, NULL);
		NullCheck(L_0);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_0, L_7, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Gpm.WebView.GpmWebViewRequest/CustomSchemePostCommand::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomSchemePostCommand__ctor_mB77999D64C37D95EFFF58511E9425A2AD25BFA94 (CustomSchemePostCommand_tD5519E7A81BD61CCB24370A69469848185793839* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<string> commandList = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___commandList_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___commandList_0), (void*)L_0);
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
// System.Void Gpm.WebView.GpmWebView::ShowUrl(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_ShowUrl_m7F773079112A695765E5D072BF1277B58D9011A4 (String_t* ___0_url, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___1_configuration, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___2_callback, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___3_schemeList, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebViewImplementation.Instance.ShowUrl(url, configuration, callback, schemeList);
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0;
		L_0 = WebViewImplementation_get_Instance_mAA465A7DF422AD5976021BC760B98960F395A35A_inline(NULL);
		String_t* L_1 = ___0_url;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_2 = ___1_configuration;
		GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* L_3 = ___2_callback;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = ___3_schemeList;
		NullCheck(L_0);
		WebViewImplementation_ShowUrl_m90001B716013BC325E5AD9B4D57D103932F4CA92(L_0, L_1, L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.GpmWebView::ShowHtmlFile(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_ShowHtmlFile_mE2487B8C0C91DAF6A949A6562E83845C1310EEE8 (String_t* ___0_filePath, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___1_configuration, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___2_callback, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___3_schemeList, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebViewImplementation.Instance.ShowHtmlFile(filePath, configuration, callback, schemeList);
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0;
		L_0 = WebViewImplementation_get_Instance_mAA465A7DF422AD5976021BC760B98960F395A35A_inline(NULL);
		String_t* L_1 = ___0_filePath;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_2 = ___1_configuration;
		GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* L_3 = ___2_callback;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = ___3_schemeList;
		NullCheck(L_0);
		WebViewImplementation_ShowHtmlFile_m0C555349C7367635CC8EB1A1BCC19FBBDFABE8C3(L_0, L_1, L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.GpmWebView::ShowHtmlString(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_ShowHtmlString_m04576315F51AA05A32A33F4D0E1FCEEDE1166BB1 (String_t* ___0_htmlString, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___1_configuration, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___2_callback, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___3_schemeList, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebViewImplementation.Instance.ShowHtmlString(htmlString, configuration, callback, schemeList);
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0;
		L_0 = WebViewImplementation_get_Instance_mAA465A7DF422AD5976021BC760B98960F395A35A_inline(NULL);
		String_t* L_1 = ___0_htmlString;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_2 = ___1_configuration;
		GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* L_3 = ___2_callback;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = ___3_schemeList;
		NullCheck(L_0);
		WebViewImplementation_ShowHtmlString_mD5BC6025A19B803C5D636E32BD48E94C075CC037(L_0, L_1, L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.GpmWebView::ExecuteJavaScript(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_ExecuteJavaScript_m05F8C90BF6BCE9627A7BAA743BECBA0FF1515920 (String_t* ___0_script, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebViewImplementation.Instance.ExecuteJavaScript(script);
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0;
		L_0 = WebViewImplementation_get_Instance_mAA465A7DF422AD5976021BC760B98960F395A35A_inline(NULL);
		String_t* L_1 = ___0_script;
		NullCheck(L_0);
		WebViewImplementation_ExecuteJavaScript_m06A9BF182CB8677D0723CD99D0A2EF7DD703AE1D(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.GpmWebView::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_Close_m385022233D170F97DC7C71F707B9032DFEFCA445 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebViewImplementation.Instance.Close();
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0;
		L_0 = WebViewImplementation_get_Instance_mAA465A7DF422AD5976021BC760B98960F395A35A_inline(NULL);
		NullCheck(L_0);
		WebViewImplementation_Close_mF5109F4C6444C58E236C748A03958664D35415F8(L_0, NULL);
		// }
		return;
	}
}
// System.Boolean Gpm.WebView.GpmWebView::IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GpmWebView_IsActive_m6759FAA9A75D5A98452E6DA542CBC741F73E4A92 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return WebViewImplementation.Instance.IsActive();
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0;
		L_0 = WebViewImplementation_get_Instance_mAA465A7DF422AD5976021BC760B98960F395A35A_inline(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = WebViewImplementation_IsActive_mF24F3003298AEDF142FC4789C6121900D11A4ED6(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Gpm.WebView.GpmWebView::CanGoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GpmWebView_CanGoBack_m98E02FBD459AD35FDB044CDAE5D9704A38554976 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return WebViewImplementation.Instance.CanGoBack();
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0;
		L_0 = WebViewImplementation_get_Instance_mAA465A7DF422AD5976021BC760B98960F395A35A_inline(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = WebViewImplementation_CanGoBack_m8A76F1B9486AD1EDCEFC6756B35BAE300498AE72(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Gpm.WebView.GpmWebView::CanGoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GpmWebView_CanGoForward_m8D962415440E76C36B235AFDE02299D9FFD55C56 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return WebViewImplementation.Instance.CanGoForward();
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0;
		L_0 = WebViewImplementation_get_Instance_mAA465A7DF422AD5976021BC760B98960F395A35A_inline(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = WebViewImplementation_CanGoForward_m44EB0D1B9EE59DAEC78DB54276FA3E2459561CA6(L_0, NULL);
		return L_1;
	}
}
// System.Void Gpm.WebView.GpmWebView::GoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_GoBack_m68521649053A9230062F68BF8F106E97039587D0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebViewImplementation.Instance.GoBack();
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0;
		L_0 = WebViewImplementation_get_Instance_mAA465A7DF422AD5976021BC760B98960F395A35A_inline(NULL);
		NullCheck(L_0);
		WebViewImplementation_GoBack_m8607DCF8EB8D6C40BF1513339A8CAEEBB54C48A5(L_0, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.GpmWebView::GoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_GoForward_m9BD471CEDB00625FBAB793C30D9587F9DE4C11FD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebViewImplementation.Instance.GoForward();
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0;
		L_0 = WebViewImplementation_get_Instance_mAA465A7DF422AD5976021BC760B98960F395A35A_inline(NULL);
		NullCheck(L_0);
		WebViewImplementation_GoForward_mCC4E4E8439D961640D23DD6EA72BE3C5A1B12B84(L_0, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.GpmWebView::SetPosition(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_SetPosition_m36B7C83AA6E131287206AC1D142D8E9B5133DBFE (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebViewImplementation.Instance.SetPosition(x, y);
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0;
		L_0 = WebViewImplementation_get_Instance_mAA465A7DF422AD5976021BC760B98960F395A35A_inline(NULL);
		int32_t L_1 = ___0_x;
		int32_t L_2 = ___1_y;
		NullCheck(L_0);
		WebViewImplementation_SetPosition_mC3635879998C2D52DC9AB2C2629AD44BE591CAF5(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.GpmWebView::SetSize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_SetSize_mDBEC3C69EFE658258BFBB7741C273A755A594501 (int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebViewImplementation.Instance.SetSize(width, height);
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0;
		L_0 = WebViewImplementation_get_Instance_mAA465A7DF422AD5976021BC760B98960F395A35A_inline(NULL);
		int32_t L_1 = ___0_width;
		int32_t L_2 = ___1_height;
		NullCheck(L_0);
		WebViewImplementation_SetSize_m1925A4098C82A272C473E4851D7167FDA9D3D889(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.GpmWebView::SetMargins(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_SetMargins_m6D076E3B237F6FB172935AC63640649F447B26BB (int32_t ___0_left, int32_t ___1_top, int32_t ___2_right, int32_t ___3_bottom, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebViewImplementation.Instance.SetMargins(left, top, right, bottom);
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0;
		L_0 = WebViewImplementation_get_Instance_mAA465A7DF422AD5976021BC760B98960F395A35A_inline(NULL);
		int32_t L_1 = ___0_left;
		int32_t L_2 = ___1_top;
		int32_t L_3 = ___2_right;
		int32_t L_4 = ___3_bottom;
		NullCheck(L_0);
		WebViewImplementation_SetMargins_mE82F1488E1F3D57457F8D808CA845D79D8116560(L_0, L_1, L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Int32 Gpm.WebView.GpmWebView::GetX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GpmWebView_GetX_mA2A9586E4A3277C3A4DD597D9D9297A60BF13AA8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return WebViewImplementation.Instance.GetX();
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0;
		L_0 = WebViewImplementation_get_Instance_mAA465A7DF422AD5976021BC760B98960F395A35A_inline(NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = WebViewImplementation_GetX_m104982AE0652FFD82C753FAF0D99E73FF0DE0C64(L_0, NULL);
		return L_1;
	}
}
// System.Int32 Gpm.WebView.GpmWebView::GetY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GpmWebView_GetY_mC78FC17449707CDEFDD8C738DB0C367E30B1F441 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return WebViewImplementation.Instance.GetY();
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0;
		L_0 = WebViewImplementation_get_Instance_mAA465A7DF422AD5976021BC760B98960F395A35A_inline(NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = WebViewImplementation_GetY_m7208997F6DB23A6CA176AEF398BEC58096D671A7(L_0, NULL);
		return L_1;
	}
}
// System.Int32 Gpm.WebView.GpmWebView::GetWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GpmWebView_GetWidth_m436A56DCF9BB9CA039E41FBCE278012C083DBF17 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return WebViewImplementation.Instance.GetWidth();
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0;
		L_0 = WebViewImplementation_get_Instance_mAA465A7DF422AD5976021BC760B98960F395A35A_inline(NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = WebViewImplementation_GetWidth_m15E991333F67D7603715038BF8D3F0441B7E4C7E(L_0, NULL);
		return L_1;
	}
}
// System.Int32 Gpm.WebView.GpmWebView::GetHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GpmWebView_GetHeight_mF40F72EDE0C95B2409F92F97B90807A1D5758DF4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return WebViewImplementation.Instance.GetHeight();
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0;
		L_0 = WebViewImplementation_get_Instance_mAA465A7DF422AD5976021BC760B98960F395A35A_inline(NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = WebViewImplementation_GetHeight_m44293E3641F96B267C95FAAB0431CA18BF7BC961(L_0, NULL);
		return L_1;
	}
}
// System.Void Gpm.WebView.GpmWebView::ShowWebBrowser(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_ShowWebBrowser_m92D3AF8A9D47956AC9190F0BC5C6D9016CD98B86 (String_t* ___0_url, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebViewImplementation.Instance.ShowWebBrowser(url);
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0;
		L_0 = WebViewImplementation_get_Instance_mAA465A7DF422AD5976021BC760B98960F395A35A_inline(NULL);
		String_t* L_1 = ___0_url;
		NullCheck(L_0);
		WebViewImplementation_ShowWebBrowser_mD69C829D3132D076C8C993CA4717243F32D7AD10(L_0, L_1, NULL);
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
void GpmWebViewDelegate_Invoke_m6B8AEC4C122FCE7350C5E2A1D49D9AEFBF8C2254_Multicast(GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* __this, int32_t ___0_type, String_t* ___1_data, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* ___2_error, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* currentDelegate = reinterpret_cast<GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, String_t*, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_type, ___1_data, ___2_error, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void GpmWebViewDelegate_Invoke_m6B8AEC4C122FCE7350C5E2A1D49D9AEFBF8C2254_OpenInst(GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* __this, int32_t ___0_type, String_t* ___1_data, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* ___2_error, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, String_t*, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_type, ___1_data, ___2_error, method);
}
void GpmWebViewDelegate_Invoke_m6B8AEC4C122FCE7350C5E2A1D49D9AEFBF8C2254_OpenStatic(GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* __this, int32_t ___0_type, String_t* ___1_data, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* ___2_error, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, String_t*, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_type, ___1_data, ___2_error, method);
}
void GpmWebViewDelegate_Invoke_m6B8AEC4C122FCE7350C5E2A1D49D9AEFBF8C2254_OpenStaticInvoker(GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* __this, int32_t ___0_type, String_t* ___1_data, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* ___2_error, const RuntimeMethod* method)
{
	InvokerActionInvoker3< int32_t, String_t*, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_type, ___1_data, ___2_error);
}
void GpmWebViewDelegate_Invoke_m6B8AEC4C122FCE7350C5E2A1D49D9AEFBF8C2254_ClosedStaticInvoker(GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* __this, int32_t ___0_type, String_t* ___1_data, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* ___2_error, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, int32_t, String_t*, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_type, ___1_data, ___2_error);
}
// System.Void Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebViewDelegate__ctor_mEA1F534F671A39D2D8A1C7D8098ABD70C631DB86 (GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GpmWebViewDelegate_Invoke_m6B8AEC4C122FCE7350C5E2A1D49D9AEFBF8C2254_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GpmWebViewDelegate_Invoke_m6B8AEC4C122FCE7350C5E2A1D49D9AEFBF8C2254_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GpmWebViewDelegate_Invoke_m6B8AEC4C122FCE7350C5E2A1D49D9AEFBF8C2254_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&GpmWebViewDelegate_Invoke_m6B8AEC4C122FCE7350C5E2A1D49D9AEFBF8C2254_Multicast;
}
// System.Void Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate::Invoke(Gpm.WebView.GpmWebViewCallback/CallbackType,System.String,Gpm.WebView.GpmWebViewError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebViewDelegate_Invoke_m6B8AEC4C122FCE7350C5E2A1D49D9AEFBF8C2254 (GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* __this, int32_t ___0_type, String_t* ___1_data, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* ___2_error, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, String_t*, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_type, ___1_data, ___2_error, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate::BeginInvoke(Gpm.WebView.GpmWebViewCallback/CallbackType,System.String,Gpm.WebView.GpmWebViewError,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GpmWebViewDelegate_BeginInvoke_m9C11DB50EB6382E41046BE3B5272D90E30F31D67 (GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* __this, int32_t ___0_type, String_t* ___1_data, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* ___2_error, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackType_t0014D0BBC86D12814581740EF23008F3ABA89E2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(CallbackType_t0014D0BBC86D12814581740EF23008F3ABA89E2A_il2cpp_TypeInfo_var, &___0_type);
	__d_args[1] = ___1_data;
	__d_args[2] = ___2_error;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebViewDelegate_EndInvoke_mC0916E69EFCDBE2E0D9983F4FF67F981BA51DE64 (GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
// System.String Gpm.WebView.GpmWebViewError::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GpmWebViewError_ToString_mF9DEC4674F6DC6475F10662DB628CD9E9D8AE807 (GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return JsonMapper.ToJson(this);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = JsonMapper_ToJson_m3951B68FD76377CF7E3DE6541DCD45474F2B7159(__this, NULL);
		return L_0;
	}
}
// System.Void Gpm.WebView.GpmWebViewError::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebViewError__ctor_mD37FE76BD17CA6207C8FC409DBD5728FDC4749F5 (GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* __this, const RuntimeMethod* method) 
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
// System.Void Gpm.WebView.GpmWebViewSafeBrowsing::ShowSafeBrowsing(System.String,Gpm.WebView.GpmWebViewRequest/ConfigurationSafeBrowsing,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebViewSafeBrowsing_ShowSafeBrowsing_mA5B1D01E29C5231ED040B402A45D5E2953F4C048 (String_t* ___0_url, ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77* ___1_configuration, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___2_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebViewImplementation.Instance.ShowSafeBrowsing(url, configuration, callback);
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0;
		L_0 = WebViewImplementation_get_Instance_mAA465A7DF422AD5976021BC760B98960F395A35A_inline(NULL);
		String_t* L_1 = ___0_url;
		ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77* L_2 = ___1_configuration;
		GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* L_3 = ___2_callback;
		NullCheck(L_0);
		WebViewImplementation_ShowSafeBrowsing_mBB2F0C658DD89E2D27C87C53C503203AAEF3390C(L_0, L_1, L_2, L_3, NULL);
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
// Gpm.WebView.Internal.WebViewImplementation Gpm.WebView.Internal.WebViewImplementation::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* WebViewImplementation_get_Instance_mAA465A7DF422AD5976021BC760B98960F395A35A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return instance; }
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0 = ((WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_StaticFields*)il2cpp_codegen_static_fields_for(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var))->___instance_0;
		return L_0;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation__ctor_mCEF14046B03E72CB091ABECCF7637356CAA085A1 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOSWebView_tC700A76F2F6219DFF5662D315E0C8B0F226A7CF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private WebViewImplementation()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// webview = new IOSWebView();
		IOSWebView_tC700A76F2F6219DFF5662D315E0C8B0F226A7CF6* L_0 = (IOSWebView_tC700A76F2F6219DFF5662D315E0C8B0F226A7CF6*)il2cpp_codegen_object_new(IOSWebView_tC700A76F2F6219DFF5662D315E0C8B0F226A7CF6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		IOSWebView__ctor_m68B755C3C7591E207A1D237BA6B8641A0ED03B67(L_0, NULL);
		__this->___webview_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___webview_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::ShowUrl(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_ShowUrl_m90001B716013BC325E5AD9B4D57D103932F4CA92 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, String_t* ___0_url, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___1_configuration, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___2_callback, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___3_schemeList, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// webview.ShowUrl(url, configuration, callback, schemeList);
		RuntimeObject* L_0 = __this->___webview_1;
		String_t* L_1 = ___0_url;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_2 = ___1_configuration;
		GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* L_3 = ___2_callback;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = ___3_schemeList;
		NullCheck(L_0);
		InterfaceActionInvoker4< String_t*, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D*, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F*, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* >::Invoke(0 /* System.Void Gpm.WebView.Internal.IWebView::ShowUrl(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>) */, IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::ShowHtmlFile(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_ShowHtmlFile_m0C555349C7367635CC8EB1A1BCC19FBBDFABE8C3 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, String_t* ___0_filePath, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___1_configuration, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___2_callback, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___3_schemeList, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// webview.ShowHtmlFile(filePath, configuration, callback, schemeList);
		RuntimeObject* L_0 = __this->___webview_1;
		String_t* L_1 = ___0_filePath;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_2 = ___1_configuration;
		GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* L_3 = ___2_callback;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = ___3_schemeList;
		NullCheck(L_0);
		InterfaceActionInvoker4< String_t*, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D*, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F*, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* >::Invoke(1 /* System.Void Gpm.WebView.Internal.IWebView::ShowHtmlFile(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>) */, IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::ShowHtmlString(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_ShowHtmlString_mD5BC6025A19B803C5D636E32BD48E94C075CC037 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, String_t* ___0_htmlString, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___1_configuration, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___2_callback, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___3_schemeList, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// webview.ShowHtmlString(htmlString, configuration, callback, schemeList);
		RuntimeObject* L_0 = __this->___webview_1;
		String_t* L_1 = ___0_htmlString;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_2 = ___1_configuration;
		GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* L_3 = ___2_callback;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = ___3_schemeList;
		NullCheck(L_0);
		InterfaceActionInvoker4< String_t*, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D*, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F*, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* >::Invoke(2 /* System.Void Gpm.WebView.Internal.IWebView::ShowHtmlString(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>) */, IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::ShowSafeBrowsing(System.String,Gpm.WebView.GpmWebViewRequest/ConfigurationSafeBrowsing,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_ShowSafeBrowsing_mBB2F0C658DD89E2D27C87C53C503203AAEF3390C (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, String_t* ___0_url, ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77* ___1_configuration, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___2_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// webview.ShowSafeBrowsing(url, configuration, callback);
		RuntimeObject* L_0 = __this->___webview_1;
		String_t* L_1 = ___0_url;
		ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77* L_2 = ___1_configuration;
		GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* L_3 = ___2_callback;
		NullCheck(L_0);
		InterfaceActionInvoker3< String_t*, ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77*, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* >::Invoke(3 /* System.Void Gpm.WebView.Internal.IWebView::ShowSafeBrowsing(System.String,Gpm.WebView.GpmWebViewRequest/ConfigurationSafeBrowsing,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate) */, IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_Close_mF5109F4C6444C58E236C748A03958664D35415F8 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// webview.Close();
		RuntimeObject* L_0 = __this->___webview_1;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(4 /* System.Void Gpm.WebView.Internal.IWebView::Close() */, IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Boolean Gpm.WebView.Internal.WebViewImplementation::IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebViewImplementation_IsActive_mF24F3003298AEDF142FC4789C6121900D11A4ED6 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return webview.IsActive();
		RuntimeObject* L_0 = __this->___webview_1;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean Gpm.WebView.Internal.IWebView::IsActive() */, IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::ExecuteJavaScript(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_ExecuteJavaScript_m06A9BF182CB8677D0723CD99D0A2EF7DD703AE1D (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, String_t* ___0_script, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// webview.ExecuteJavaScript(script);
		RuntimeObject* L_0 = __this->___webview_1;
		String_t* L_1 = ___0_script;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(6 /* System.Void Gpm.WebView.Internal.IWebView::ExecuteJavaScript(System.String) */, IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::SetFileDownloadPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_SetFileDownloadPath_m0DDF57A0353ECFCB6514C1C3AAB830593E0A65CE (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// webview.SetFileDownloadPath(path);
		RuntimeObject* L_0 = __this->___webview_1;
		String_t* L_1 = ___0_path;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(7 /* System.Void Gpm.WebView.Internal.IWebView::SetFileDownloadPath(System.String) */, IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Boolean Gpm.WebView.Internal.WebViewImplementation::CanGoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebViewImplementation_CanGoBack_m8A76F1B9486AD1EDCEFC6756B35BAE300498AE72 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return webview.CanGoBack;
		RuntimeObject* L_0 = __this->___webview_1;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(8 /* System.Boolean Gpm.WebView.Internal.IWebView::get_CanGoBack() */, IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean Gpm.WebView.Internal.WebViewImplementation::CanGoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebViewImplementation_CanGoForward_m44EB0D1B9EE59DAEC78DB54276FA3E2459561CA6 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return webview.CanGoForward;
		RuntimeObject* L_0 = __this->___webview_1;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(9 /* System.Boolean Gpm.WebView.Internal.IWebView::get_CanGoForward() */, IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::GoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_GoBack_m8607DCF8EB8D6C40BF1513339A8CAEEBB54C48A5 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// webview.GoBack();
		RuntimeObject* L_0 = __this->___webview_1;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(10 /* System.Void Gpm.WebView.Internal.IWebView::GoBack() */, IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::GoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_GoForward_mCC4E4E8439D961640D23DD6EA72BE3C5A1B12B84 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// webview.GoForward();
		RuntimeObject* L_0 = __this->___webview_1;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(11 /* System.Void Gpm.WebView.Internal.IWebView::GoForward() */, IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::SetPosition(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_SetPosition_mC3635879998C2D52DC9AB2C2629AD44BE591CAF5 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// webview.SetPosition(x, y);
		RuntimeObject* L_0 = __this->___webview_1;
		int32_t L_1 = ___0_x;
		int32_t L_2 = ___1_y;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, int32_t >::Invoke(12 /* System.Void Gpm.WebView.Internal.IWebView::SetPosition(System.Int32,System.Int32) */, IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::SetSize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_SetSize_m1925A4098C82A272C473E4851D7167FDA9D3D889 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// webview.SetSize(width, height);
		RuntimeObject* L_0 = __this->___webview_1;
		int32_t L_1 = ___0_width;
		int32_t L_2 = ___1_height;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, int32_t >::Invoke(13 /* System.Void Gpm.WebView.Internal.IWebView::SetSize(System.Int32,System.Int32) */, IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::SetMargins(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_SetMargins_mE82F1488E1F3D57457F8D808CA845D79D8116560 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, int32_t ___0_left, int32_t ___1_top, int32_t ___2_right, int32_t ___3_bottom, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// webview.SetMargins(left, top, right, bottom);
		RuntimeObject* L_0 = __this->___webview_1;
		int32_t L_1 = ___0_left;
		int32_t L_2 = ___1_top;
		int32_t L_3 = ___2_right;
		int32_t L_4 = ___3_bottom;
		NullCheck(L_0);
		InterfaceActionInvoker4< int32_t, int32_t, int32_t, int32_t >::Invoke(14 /* System.Void Gpm.WebView.Internal.IWebView::SetMargins(System.Int32,System.Int32,System.Int32,System.Int32) */, IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4);
		// }
		return;
	}
}
// System.Int32 Gpm.WebView.Internal.WebViewImplementation::GetX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebViewImplementation_GetX_m104982AE0652FFD82C753FAF0D99E73FF0DE0C64 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return webview.GetX();
		RuntimeObject* L_0 = __this->___webview_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 Gpm.WebView.Internal.IWebView::GetX() */, IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Int32 Gpm.WebView.Internal.WebViewImplementation::GetY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebViewImplementation_GetY_m7208997F6DB23A6CA176AEF398BEC58096D671A7 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return webview.GetY();
		RuntimeObject* L_0 = __this->___webview_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 Gpm.WebView.Internal.IWebView::GetY() */, IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Int32 Gpm.WebView.Internal.WebViewImplementation::GetWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebViewImplementation_GetWidth_m15E991333F67D7603715038BF8D3F0441B7E4C7E (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return webview.GetWidth();
		RuntimeObject* L_0 = __this->___webview_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 Gpm.WebView.Internal.IWebView::GetWidth() */, IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Int32 Gpm.WebView.Internal.WebViewImplementation::GetHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebViewImplementation_GetHeight_m44293E3641F96B267C95FAAB0431CA18BF7BC961 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return webview.GetHeight();
		RuntimeObject* L_0 = __this->___webview_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 Gpm.WebView.Internal.IWebView::GetHeight() */, IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::ShowWebBrowser(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_ShowWebBrowser_mD69C829D3132D076C8C993CA4717243F32D7AD10 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, String_t* ___0_url, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// webview.ShowWebBrowser(url);
		RuntimeObject* L_0 = __this->___webview_1;
		String_t* L_1 = ___0_url;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(19 /* System.Void Gpm.WebView.Internal.IWebView::ShowWebBrowser(System.String) */, IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation__cctor_mF8334D4DFFBBAE5BDEFA48981F1C395FD3B2780E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly WebViewImplementation instance = new WebViewImplementation();
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0 = (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D*)il2cpp_codegen_object_new(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WebViewImplementation__ctor_mCEF14046B03E72CB091ABECCF7637356CAA085A1(L_0, NULL);
		((WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_StaticFields*)il2cpp_codegen_static_fields_for(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var))->___instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_StaticFields*)il2cpp_codegen_static_fields_for(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var))->___instance_0), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultWebView_get_CanGoBack_m854E079E6687016097D0298F4AC5667EA2A5470A (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, const RuntimeMethod* method) 
{
	{
		// public bool CanGoBack => false;
		return (bool)0;
	}
}
// System.Boolean Gpm.WebView.Internal.DefaultWebView::get_CanGoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultWebView_get_CanGoForward_mCE6937BB09E8534B4027FAF37B016A479EAC0CE1 (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, const RuntimeMethod* method) 
{
	{
		// public bool CanGoForward => false;
		return (bool)0;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::ShowUrl(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView_ShowUrl_mCF441723DE578B44344EC5D97646A0F385A691F2 (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, String_t* ___0_url, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___1_configuration, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___2_callback, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___3_schemeList, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::ShowHtmlFile(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView_ShowHtmlFile_m301400295A4FC9039968AA7668F744FD861306B5 (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, String_t* ___0_fileName, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___1_configuration, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___2_callback, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___3_schemeList, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::ShowHtmlString(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView_ShowHtmlString_mE851D2175EE59271B168F1B06216F2DB00ED9907 (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, String_t* ___0_source, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___1_configuration, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___2_callback, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___3_schemeList, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::ShowSafeBrowsing(System.String,Gpm.WebView.GpmWebViewRequest/ConfigurationSafeBrowsing,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView_ShowSafeBrowsing_m0680976D34911712F31FAA39D002F5DD3FC102CB (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, String_t* ___0_url, ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77* ___1_configuration, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___2_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView_Close_m7DBD7730101BF9EB527E80E4774D1358469B8421 (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, NULL);
		// }
		return;
	}
}
// System.Boolean Gpm.WebView.Internal.DefaultWebView::IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultWebView_IsActive_m3A6782372FA2C7E458C7C17E1BDEE5EE201F0930 (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, NULL);
		// return false;
		return (bool)0;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::ExecuteJavaScript(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView_ExecuteJavaScript_m2F5EDCD7F925D298ED9B6F8AA38D702BEB7AB7FA (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, String_t* ___0_script, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::SetFileDownloadPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView_SetFileDownloadPath_m914813174AD98A43AD572030EE81CE1FC1F87729 (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::GoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView_GoBack_m566DB67C1F9907C15BE8D56110DE46D91E651238 (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::GoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView_GoForward_m669A383443C7676DE6643FCF5F7E2D5FE499051A (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::SetPosition(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView_SetPosition_mC8C872F670328339B7D7BF62A3334A294D099789 (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::SetSize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView_SetSize_m2CDA3DAE468291A161D88A44E7265DEA87F55B07 (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::SetMargins(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView_SetMargins_m5D04C807721D8DD26B6D30BF7E8A1BD0D41C291D (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, int32_t ___0_left, int32_t ___1_top, int32_t ___2_right, int32_t ___3_bottom, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, NULL);
		// }
		return;
	}
}
// System.Int32 Gpm.WebView.Internal.DefaultWebView::GetX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultWebView_GetX_mA79E429C3635E6BA68FD55D31F8184C5F333F98D (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, NULL);
		// return 0;
		return 0;
	}
}
// System.Int32 Gpm.WebView.Internal.DefaultWebView::GetY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultWebView_GetY_mDE503EBF41411BC4D517C6CC74F02927547FF802 (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, NULL);
		// return 0;
		return 0;
	}
}
// System.Int32 Gpm.WebView.Internal.DefaultWebView::GetWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultWebView_GetWidth_m450ACBC599532AFAEBC122E5FEF573305A9A335B (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, NULL);
		// return 0;
		return 0;
	}
}
// System.Int32 Gpm.WebView.Internal.DefaultWebView::GetHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultWebView_GetHeight_m86EBCE4CBF4B19BCC7984939550682A5B7995B79 (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, NULL);
		// return 0;
		return 0;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::ShowWebBrowser(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView_ShowWebBrowser_m8F33A9336CDA0B58067D491143E6ED4E33131547 (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, String_t* ___0_url, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView__ctor_m64DA6C67A89069588C9A9C2527632BE5BFF67407 (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, const RuntimeMethod* method) 
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
// System.Void Gpm.WebView.Internal.AndroidWebView::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidWebView_Initialize_m155DE367AC3EA8985E07BDBE7DB3FEE742618AD4 (AndroidWebView_t13C2327FF836CB164C20B04AA2E6187520077004* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBC6A109B31082B93DBCD3AEF08F4F4B18A8D860);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CLASS_NAME = ANDROID_CLASS_NAME;
		((NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA*)__this)->___CLASS_NAME_3 = _stringLiteralEBC6A109B31082B93DBCD3AEF08F4F4B18A8D860;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA*)__this)->___CLASS_NAME_3), (void*)_stringLiteralEBC6A109B31082B93DBCD3AEF08F4F4B18A8D860);
		// base.Initialize();
		NativeWebView_Initialize_m4ED8533FBC5F24F24D9C0C7F31E3C7E7C5885C8A(__this, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.AndroidWebView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidWebView__ctor_m5E20360A47EC583F65BC3EDF549535B4656CBD97 (AndroidWebView_t13C2327FF836CB164C20B04AA2E6187520077004* __this, const RuntimeMethod* method) 
{
	{
		NativeWebView__ctor_m7D9310A88919A896BA119F727FAECAABA00C6656(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16 (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* __this, const RuntimeMethod* method) 
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Gpm.WebView.Internal.NativeRequest/Configuration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration__ctor_m95D899D85EAE741464B99462E37D8D0214D652F2 (Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* __this, const RuntimeMethod* method) 
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
// System.Void Gpm.WebView.Internal.NativeRequest/ConfigurationSafeBrowsing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationSafeBrowsing__ctor_m160B0523793AE3214D810B9664AAE75FF47D71DF (ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3* __this, const RuntimeMethod* method) 
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
		__this->___navigationBarColor_0 = _stringLiteralEA68DCEC5DF5C9D1BAB1EB121891A32269876B92;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___navigationBarColor_0), (void*)_stringLiteralEA68DCEC5DF5C9D1BAB1EB121891A32269876B92);
		// public string navigationTextColor = "#FFFFFF";
		__this->___navigationTextColor_1 = _stringLiteral663488ABE057592166FC68C8A6EF26CBF9C8178E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___navigationTextColor_1), (void*)_stringLiteral663488ABE057592166FC68C8A6EF26CBF9C8178E);
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
// System.Void Gpm.WebView.Internal.NativeRequest/ShowWebView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowWebView__ctor_mF7BE177A484595DDE6866DE7FF3AE5DB8053D552 (ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F* __this, const RuntimeMethod* method) 
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
// System.Void Gpm.WebView.Internal.NativeRequest/ShowSafeBrowsing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowSafeBrowsing__ctor_mE86B353453E23E789C7AA9979D81AFE56464CD16 (ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1* __this, const RuntimeMethod* method) 
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
// System.Void Gpm.WebView.Internal.NativeRequest/ExecuteJavaScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecuteJavaScript__ctor_mF20F45EF78D01DF13D2A428A14F64E59751FD4E3 (ExecuteJavaScript_t03445880CE57FF3F8D6A5A50FB18883590BA85CB* __this, const RuntimeMethod* method) 
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
// System.Void Gpm.WebView.Internal.NativeRequest/Position::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Position__ctor_m83002433A02C206B83390F73B029DB4461299EDA (Position_t270EA20F5BD7C97729951399753CABF1D1D7140F* __this, const RuntimeMethod* method) 
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
// System.Void Gpm.WebView.Internal.NativeRequest/Size::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Size__ctor_m6694855F722337B88B9F940DFF032BB327927B8E (Size_t5584C5D0B515D1AB5E8D1D89FBD1EBBC9AF3C57A* __this, const RuntimeMethod* method) 
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
// System.Void Gpm.WebView.Internal.NativeRequest/Margins::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Margins__ctor_m6A47CCAB0D9055D44527DB26BBA61FCFBFE54B75 (Margins_t461D5F3B2F0F4291936FCF0D7A8DE1EA21F6DEA2* __this, const RuntimeMethod* method) 
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
// System.Void Gpm.WebView.Internal.NativeRequest/ShowWebBrowser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowWebBrowser__ctor_m2B04FAC5F218BBB7433BBE93AC5EF8322F917C2A (ShowWebBrowser_t5C63CFC890E6EA9F6F7D9419272400EAD1265D0A* __this, const RuntimeMethod* method) 
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
// System.Void Gpm.WebView.Internal.IOSWebView::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebView_Initialize_mC5FD36E5498E8BD0045C9ED581AB7A9E075BD6D6 (IOSWebView_tC700A76F2F6219DFF5662D315E0C8B0F226A7CF6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F6FEC0B16C8B98098A911F6CB65DC2E44F58856);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CLASS_NAME = IOS_CLASS_NAME;
		((NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA*)__this)->___CLASS_NAME_3 = _stringLiteral9F6FEC0B16C8B98098A911F6CB65DC2E44F58856;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA*)__this)->___CLASS_NAME_3), (void*)_stringLiteral9F6FEC0B16C8B98098A911F6CB65DC2E44F58856);
		// base.Initialize();
		NativeWebView_Initialize_m4ED8533FBC5F24F24D9C0C7F31E3C7E7C5885C8A(__this, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.IOSWebView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebView__ctor_m68B755C3C7591E207A1D237BA6B8641A0ED03B67 (IOSWebView_tC700A76F2F6219DFF5662D315E0C8B0F226A7CF6* __this, const RuntimeMethod* method) 
{
	{
		NativeWebView__ctor_m7D9310A88919A896BA119F727FAECAABA00C6656(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeCallbackHandler_RegisterCallback_m5D91A1A7768C7960711766B5C310B31F8F5FD7D2 (RuntimeObject* ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (callback == null)
		RuntimeObject* L_0 = ___0_callback;
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
		il2cpp_codegen_runtime_class_init_inline(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* L_1 = ((NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_StaticFields*)il2cpp_codegen_static_fields_for(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var))->___callbackDic_1;
		int32_t L_2 = ((NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_StaticFields*)il2cpp_codegen_static_fields_for(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var))->___handle_0;
		RuntimeObject* L_3 = ___0_callback;
		NullCheck(L_1);
		Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD(L_1, L_2, L_3, Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_RuntimeMethod_var);
		// return handle++;
		int32_t L_4 = ((NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_StaticFields*)il2cpp_codegen_static_fields_for(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var))->___handle_0;
		int32_t L_5 = L_4;
		((NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_StaticFields*)il2cpp_codegen_static_fields_for(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var))->___handle_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return L_5;
	}
}
// System.Void Gpm.WebView.Internal.NativeCallbackHandler::UnregisterCallback(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCallbackHandler_UnregisterCallback_m0F4471170AB0ED37A3A5C56CD4C3B47EE1835594 (int32_t ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (callbackDic.ContainsKey(handle) == true)
		il2cpp_codegen_runtime_class_init_inline(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* L_0 = ((NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_StaticFields*)il2cpp_codegen_static_fields_for(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var))->___callbackDic_1;
		int32_t L_1 = ___0_handle;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25(L_0, L_1, Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// callbackDic.Remove(handle);
		il2cpp_codegen_runtime_class_init_inline(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* L_3 = ((NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_StaticFields*)il2cpp_codegen_static_fields_for(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var))->___callbackDic_1;
		int32_t L_4 = ___0_handle;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4(L_3, L_4, Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_RuntimeMethod_var);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeCallbackHandler::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCallbackHandler__cctor_m77515C89F073EA0EF8E4FD4BA6F4AD90A3065583 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static int handle = 0;
		((NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_StaticFields*)il2cpp_codegen_static_fields_for(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var))->___handle_0 = 0;
		// private static Dictionary<int, object> callbackDic = new Dictionary<int, object>();
		Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* L_0 = (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*)il2cpp_codegen_object_new(Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7(L_0, Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_RuntimeMethod_var);
		((NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_StaticFields*)il2cpp_codegen_static_fields_for(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var))->___callbackDic_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_StaticFields*)il2cpp_codegen_static_fields_for(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var))->___callbackDic_1), (void*)L_0);
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
// System.Boolean Gpm.WebView.Internal.NativeWebView::get_CanGoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeWebView_get_CanGoBack_m43FF2D0F7695CCB0BB24F609B79E937BD483093E (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3537900A966F6526B545496171B453540EA156E2);
		s_Il2CppMethodInitialized = true;
	}
	NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* V_0 = NULL;
	{
		// NativeMessage message = new NativeMessage()
		// {
		//     scheme = ApiScheme.CAN_GO_BACK
		// };
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1*)il2cpp_codegen_object_new(NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16(L_0, NULL);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___scheme_0 = _stringLiteral3537900A966F6526B545496171B453540EA156E2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___scheme_0), (void*)_stringLiteral3537900A966F6526B545496171B453540EA156E2);
		V_0 = L_1;
		// var resultMessage = CallSync(JsonMapper.ToJson(message), string.Empty);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonMapper_ToJson_m3951B68FD76377CF7E3DE6541DCD45474F2B7159(L_2, NULL);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_5;
		L_5 = NativeWebView_CallSync_mD793591BA24DD0227C573464DC73895C9764CA43(__this, L_3, L_4, NULL);
		// return Convert.ToBoolean(resultMessage.data);
		NullCheck(L_5);
		String_t* L_6 = L_5->___data_1;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Convert_ToBoolean_m3DEA64CC166C14DD2B3461A04C227A05BC06DFEC(L_6, NULL);
		return L_7;
	}
}
// System.Boolean Gpm.WebView.Internal.NativeWebView::get_CanGoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeWebView_get_CanGoForward_mCC248C4A917F13C902767848324F6DDB4708750A (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF24E270202456BA0B227B1CABB006E5064AB3192);
		s_Il2CppMethodInitialized = true;
	}
	NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* V_0 = NULL;
	{
		// NativeMessage message = new NativeMessage()
		// {
		//     scheme = ApiScheme.CAN_GO_FORWARD
		// };
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1*)il2cpp_codegen_object_new(NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16(L_0, NULL);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___scheme_0 = _stringLiteralF24E270202456BA0B227B1CABB006E5064AB3192;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___scheme_0), (void*)_stringLiteralF24E270202456BA0B227B1CABB006E5064AB3192);
		V_0 = L_1;
		// var resultMessage = CallSync(JsonMapper.ToJson(message), string.Empty);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonMapper_ToJson_m3951B68FD76377CF7E3DE6541DCD45474F2B7159(L_2, NULL);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_5;
		L_5 = NativeWebView_CallSync_mD793591BA24DD0227C573464DC73895C9764CA43(__this, L_3, L_4, NULL);
		// return Convert.ToBoolean(resultMessage.data);
		NullCheck(L_5);
		String_t* L_6 = L_5->___data_1;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Convert_ToBoolean_m3DEA64CC166C14DD2B3461A04C227A05BC06DFEC(L_6, NULL);
		return L_7;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView__ctor_m7D9310A88919A896BA119F727FAECAABA00C6656 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected string CLASS_NAME = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___CLASS_NAME_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CLASS_NAME_3), (void*)L_0);
		// public NativeWebView()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Initialize();
		VirtualActionInvoker0::Invoke(24 /* System.Void Gpm.WebView.Internal.NativeWebView::Initialize() */, __this);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_Initialize_m4ED8533FBC5F24F24D9C0C7F31E3C7E7C5885C8A (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Configuration_tEEAE0A5D89EB14F9BFA9258745FA65F306DE45DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeWebView_OnAsyncEvent_m9CD74DA600AA91607C4835F1C35059459F27FF76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral981BC9EBC76493CC8A6BEEC0CEF767E026141833);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GpmCommunicatorVO.Configuration configuration = new GpmCommunicatorVO.Configuration()
		// {
		//     className = CLASS_NAME
		// };
		Configuration_tEEAE0A5D89EB14F9BFA9258745FA65F306DE45DD* L_0 = (Configuration_tEEAE0A5D89EB14F9BFA9258745FA65F306DE45DD*)il2cpp_codegen_object_new(Configuration_tEEAE0A5D89EB14F9BFA9258745FA65F306DE45DD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Configuration__ctor_m443D394EFCF889D9A526B5B9B187879533FFB8B7(L_0, NULL);
		Configuration_tEEAE0A5D89EB14F9BFA9258745FA65F306DE45DD* L_1 = L_0;
		String_t* L_2 = __this->___CLASS_NAME_3;
		NullCheck(L_1);
		L_1->___className_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___className_0), (void*)L_2);
		// GpmCommunicator.InitializeClass(configuration);
		GpmCommunicator_InitializeClass_m2CCFC459C16E0F0E420D7678243B4F35BC7F9420(L_1, NULL);
		// GpmCommunicator.AddReceiver(DOMAIN, OnAsyncEvent);
		CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* L_3 = (CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9*)il2cpp_codegen_object_new(CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		CommunicatorCallback__ctor_m586DBDDB8B64710B46280B17DBBC64340DA49FC3(L_3, __this, (intptr_t)((void*)NativeWebView_OnAsyncEvent_m9CD74DA600AA91607C4835F1C35059459F27FF76_RuntimeMethod_var), NULL);
		GpmCommunicator_AddReceiver_mC9977EF5D63E724F9AB43BA75AE115E97AFF5A75(_stringLiteral981BC9EBC76493CC8A6BEEC0CEF767E026141833, L_3, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::ShowUrl(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_ShowUrl_mE445DC42D9C829D5753BF6DC8EA4D55A7FB90CEF (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, String_t* ___0_url, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___1_configuration, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___2_callback, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___3_schemeList, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B00FE2C21F21764BB277C1BEE12004F53874EB5);
		s_Il2CppMethodInitialized = true;
	}
	NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* V_0 = NULL;
	ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F* V_1 = NULL;
	{
		// NativeMessage nativeMessage = new NativeMessage
		// {
		//     scheme = ApiScheme.SHOW_URL,
		//     callback = NativeCallbackHandler.RegisterCallback(callback)
		// };
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1*)il2cpp_codegen_object_new(NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16(L_0, NULL);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___scheme_0 = _stringLiteral5B00FE2C21F21764BB277C1BEE12004F53874EB5;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___scheme_0), (void*)_stringLiteral5B00FE2C21F21764BB277C1BEE12004F53874EB5);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_2 = L_1;
		GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* L_3 = ___2_callback;
		il2cpp_codegen_runtime_class_init_inline(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = NativeCallbackHandler_RegisterCallback_m5D91A1A7768C7960711766B5C310B31F8F5FD7D2(L_3, NULL);
		NullCheck(L_2);
		L_2->___callback_4 = L_4;
		V_0 = L_2;
		// NativeRequest.ShowWebView showWebView = MakeShowWebView(url, configuration, schemeList);
		String_t* L_5 = ___0_url;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_6 = ___1_configuration;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = ___3_schemeList;
		ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F* L_8;
		L_8 = NativeWebView_MakeShowWebView_mA0E300170A2DA5CF61C89DD0C6626C8F09C3C60F(__this, L_5, L_6, L_7, NULL);
		V_1 = L_8;
		// nativeMessage.data = JsonMapper.ToJson(showWebView);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_9 = V_0;
		ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F* L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_11;
		L_11 = JsonMapper_ToJson_m3951B68FD76377CF7E3DE6541DCD45474F2B7159(L_10, NULL);
		NullCheck(L_9);
		L_9->___data_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___data_2), (void*)L_11);
		// CallAsync(JsonMapper.ToJson(nativeMessage), null);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_12 = V_0;
		String_t* L_13;
		L_13 = JsonMapper_ToJson_m3951B68FD76377CF7E3DE6541DCD45474F2B7159(L_12, NULL);
		NativeWebView_CallAsync_mF98E49EFAD6088CD79D61F04BF5A300BF7DFE48E(__this, L_13, (String_t*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::ShowHtmlFile(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_ShowHtmlFile_m78D47146F39FCA17DB13A6890C02A8827FADE592 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, String_t* ___0_filePath, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___1_configuration, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___2_callback, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___3_schemeList, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70B7395C88F8552F75F2CAE166CC33435A494E23);
		s_Il2CppMethodInitialized = true;
	}
	NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* V_0 = NULL;
	ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F* V_1 = NULL;
	{
		// NativeMessage nativeMessage = new NativeMessage
		// {
		//     scheme = ApiScheme.SHOW_HTML_FILE,
		//     callback = NativeCallbackHandler.RegisterCallback(callback)
		// };
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1*)il2cpp_codegen_object_new(NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16(L_0, NULL);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___scheme_0 = _stringLiteral70B7395C88F8552F75F2CAE166CC33435A494E23;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___scheme_0), (void*)_stringLiteral70B7395C88F8552F75F2CAE166CC33435A494E23);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_2 = L_1;
		GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* L_3 = ___2_callback;
		il2cpp_codegen_runtime_class_init_inline(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = NativeCallbackHandler_RegisterCallback_m5D91A1A7768C7960711766B5C310B31F8F5FD7D2(L_3, NULL);
		NullCheck(L_2);
		L_2->___callback_4 = L_4;
		V_0 = L_2;
		// NativeRequest.ShowWebView showWebView = MakeShowWebView(filePath, configuration, schemeList);
		String_t* L_5 = ___0_filePath;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_6 = ___1_configuration;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = ___3_schemeList;
		ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F* L_8;
		L_8 = NativeWebView_MakeShowWebView_mA0E300170A2DA5CF61C89DD0C6626C8F09C3C60F(__this, L_5, L_6, L_7, NULL);
		V_1 = L_8;
		// nativeMessage.data = JsonMapper.ToJson(showWebView);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_9 = V_0;
		ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F* L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_11;
		L_11 = JsonMapper_ToJson_m3951B68FD76377CF7E3DE6541DCD45474F2B7159(L_10, NULL);
		NullCheck(L_9);
		L_9->___data_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___data_2), (void*)L_11);
		// CallAsync(JsonMapper.ToJson(nativeMessage), null);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_12 = V_0;
		String_t* L_13;
		L_13 = JsonMapper_ToJson_m3951B68FD76377CF7E3DE6541DCD45474F2B7159(L_12, NULL);
		NativeWebView_CallAsync_mF98E49EFAD6088CD79D61F04BF5A300BF7DFE48E(__this, L_13, (String_t*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::ShowHtmlString(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_ShowHtmlString_m09C99B9FEA9F06CFA9BE617F11ECA6461AEB137B (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, String_t* ___0_htmlString, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___1_configuration, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___2_callback, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___3_schemeList, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE782499A8125F334C5753700BDD39AD31E382E9);
		s_Il2CppMethodInitialized = true;
	}
	NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* V_0 = NULL;
	ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F* V_1 = NULL;
	{
		// NativeMessage nativeMessage = new NativeMessage
		// {
		//     scheme = ApiScheme.SHOW_HTML_STRING,
		//     callback = NativeCallbackHandler.RegisterCallback(callback)
		// };
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1*)il2cpp_codegen_object_new(NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16(L_0, NULL);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___scheme_0 = _stringLiteralCE782499A8125F334C5753700BDD39AD31E382E9;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___scheme_0), (void*)_stringLiteralCE782499A8125F334C5753700BDD39AD31E382E9);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_2 = L_1;
		GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* L_3 = ___2_callback;
		il2cpp_codegen_runtime_class_init_inline(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = NativeCallbackHandler_RegisterCallback_m5D91A1A7768C7960711766B5C310B31F8F5FD7D2(L_3, NULL);
		NullCheck(L_2);
		L_2->___callback_4 = L_4;
		V_0 = L_2;
		// NativeRequest.ShowWebView showWebView = MakeShowWebView(htmlString, configuration, schemeList);
		String_t* L_5 = ___0_htmlString;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_6 = ___1_configuration;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = ___3_schemeList;
		ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F* L_8;
		L_8 = NativeWebView_MakeShowWebView_mA0E300170A2DA5CF61C89DD0C6626C8F09C3C60F(__this, L_5, L_6, L_7, NULL);
		V_1 = L_8;
		// nativeMessage.data = JsonMapper.ToJson(showWebView);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_9 = V_0;
		ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F* L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_11;
		L_11 = JsonMapper_ToJson_m3951B68FD76377CF7E3DE6541DCD45474F2B7159(L_10, NULL);
		NullCheck(L_9);
		L_9->___data_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___data_2), (void*)L_11);
		// CallAsync(JsonMapper.ToJson(nativeMessage), null);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_12 = V_0;
		String_t* L_13;
		L_13 = JsonMapper_ToJson_m3951B68FD76377CF7E3DE6541DCD45474F2B7159(L_12, NULL);
		NativeWebView_CallAsync_mF98E49EFAD6088CD79D61F04BF5A300BF7DFE48E(__this, L_13, (String_t*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::ShowSafeBrowsing(System.String,Gpm.WebView.GpmWebViewRequest/ConfigurationSafeBrowsing,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_ShowSafeBrowsing_mB1FDEED1304F54FFF2889F14D58ED39D7A5ED05B (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, String_t* ___0_url, ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77* ___1_configuration, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___2_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1065F5D308E0AFAFE334CE09E95A7A2669A83F98);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral663488ABE057592166FC68C8A6EF26CBF9C8178E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA68DCEC5DF5C9D1BAB1EB121891A32269876B92);
		s_Il2CppMethodInitialized = true;
	}
	NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* V_0 = NULL;
	ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1* V_1 = NULL;
	ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3* G_B2_0 = NULL;
	ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3* G_B2_1 = NULL;
	ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1* G_B2_2 = NULL;
	ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1* G_B2_3 = NULL;
	ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3* G_B1_0 = NULL;
	ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3* G_B1_1 = NULL;
	ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1* G_B1_2 = NULL;
	ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3* G_B3_1 = NULL;
	ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3* G_B3_2 = NULL;
	ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1* G_B3_3 = NULL;
	ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1* G_B3_4 = NULL;
	ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3* G_B5_0 = NULL;
	ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3* G_B5_1 = NULL;
	ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1* G_B5_2 = NULL;
	ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1* G_B5_3 = NULL;
	ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3* G_B4_0 = NULL;
	ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3* G_B4_1 = NULL;
	ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1* G_B4_2 = NULL;
	ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3* G_B6_1 = NULL;
	ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3* G_B6_2 = NULL;
	ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1* G_B6_3 = NULL;
	ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1* G_B6_4 = NULL;
	{
		// NativeMessage nativeMessage = new NativeMessage
		// {
		//     scheme = ApiScheme.SHOW_SAFE_BROWSING,
		//     callback = NativeCallbackHandler.RegisterCallback(callback)
		// };
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1*)il2cpp_codegen_object_new(NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16(L_0, NULL);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___scheme_0 = _stringLiteral1065F5D308E0AFAFE334CE09E95A7A2669A83F98;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___scheme_0), (void*)_stringLiteral1065F5D308E0AFAFE334CE09E95A7A2669A83F98);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_2 = L_1;
		GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* L_3 = ___2_callback;
		il2cpp_codegen_runtime_class_init_inline(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = NativeCallbackHandler_RegisterCallback_m5D91A1A7768C7960711766B5C310B31F8F5FD7D2(L_3, NULL);
		NullCheck(L_2);
		L_2->___callback_4 = L_4;
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
		ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1* L_5 = (ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1*)il2cpp_codegen_object_new(ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ShowSafeBrowsing__ctor_mE86B353453E23E789C7AA9979D81AFE56464CD16(L_5, NULL);
		ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1* L_6 = L_5;
		String_t* L_7 = ___0_url;
		NullCheck(L_6);
		L_6->___url_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___url_0), (void*)L_7);
		ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1* L_8 = L_6;
		ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3* L_9 = (ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3*)il2cpp_codegen_object_new(ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ConfigurationSafeBrowsing__ctor_m160B0523793AE3214D810B9664AAE75FF47D71DF(L_9, NULL);
		ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3* L_10 = L_9;
		ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77* L_11 = ___1_configuration;
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
		ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77* L_12 = ___1_configuration;
		NullCheck(L_12);
		String_t* L_13 = L_12->___navigationBarColor_0;
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
		G_B3_1->___navigationBarColor_0 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___navigationBarColor_0), (void*)G_B3_0);
		ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3* L_14 = G_B3_2;
		ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77* L_15 = ___1_configuration;
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
		ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77* L_16 = ___1_configuration;
		NullCheck(L_16);
		String_t* L_17 = L_16->___navigationTextColor_1;
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
		G_B6_1->___navigationTextColor_1 = G_B6_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B6_1->___navigationTextColor_1), (void*)G_B6_0);
		NullCheck(G_B6_3);
		G_B6_3->___configuration_1 = G_B6_2;
		Il2CppCodeGenWriteBarrier((void**)(&G_B6_3->___configuration_1), (void*)G_B6_2);
		V_1 = G_B6_4;
		// nativeMessage.data = JsonMapper.ToJson(showSafeBrowsing);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_18 = V_0;
		ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1* L_19 = V_1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_20;
		L_20 = JsonMapper_ToJson_m3951B68FD76377CF7E3DE6541DCD45474F2B7159(L_19, NULL);
		NullCheck(L_18);
		L_18->___data_2 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___data_2), (void*)L_20);
		// CallAsync(JsonMapper.ToJson(nativeMessage), null);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_21 = V_0;
		String_t* L_22;
		L_22 = JsonMapper_ToJson_m3951B68FD76377CF7E3DE6541DCD45474F2B7159(L_21, NULL);
		NativeWebView_CallAsync_mF98E49EFAD6088CD79D61F04BF5A300BF7DFE48E(__this, L_22, (String_t*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_Close_mF485EFC37F65B03FF8514B015E40E0A0E5B163F2 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFED5871C0F55B10B28297D7D6F16B57A7B4C72A9);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// NativeMessage nativeMessage = new NativeMessage
		// {
		//     scheme = ApiScheme.CLOSE
		// };
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1*)il2cpp_codegen_object_new(NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16(L_0, NULL);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___scheme_0 = _stringLiteralFED5871C0F55B10B28297D7D6F16B57A7B4C72A9;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___scheme_0), (void*)_stringLiteralFED5871C0F55B10B28297D7D6F16B57A7B4C72A9);
		// string jsonData = JsonMapper.ToJson(nativeMessage);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = JsonMapper_ToJson_m3951B68FD76377CF7E3DE6541DCD45474F2B7159(L_1, NULL);
		V_0 = L_2;
		// CallAsync(jsonData, null);
		String_t* L_3 = V_0;
		NativeWebView_CallAsync_mF98E49EFAD6088CD79D61F04BF5A300BF7DFE48E(__this, L_3, (String_t*)NULL, NULL);
		// }
		return;
	}
}
// System.Boolean Gpm.WebView.Internal.NativeWebView::IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeWebView_IsActive_mF320CBD27749B56920F07DFCB6A5D4A0186F904D (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD98E2640FCC4873264BAE9F62528D696400D87F);
		s_Il2CppMethodInitialized = true;
	}
	NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* V_0 = NULL;
	{
		// NativeMessage message = new NativeMessage()
		// {
		//     scheme = ApiScheme.IS_ACTIVE
		// };
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1*)il2cpp_codegen_object_new(NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16(L_0, NULL);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___scheme_0 = _stringLiteralBD98E2640FCC4873264BAE9F62528D696400D87F;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___scheme_0), (void*)_stringLiteralBD98E2640FCC4873264BAE9F62528D696400D87F);
		V_0 = L_1;
		// var resultMessage = CallSync(JsonMapper.ToJson(message), string.Empty);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonMapper_ToJson_m3951B68FD76377CF7E3DE6541DCD45474F2B7159(L_2, NULL);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_5;
		L_5 = NativeWebView_CallSync_mD793591BA24DD0227C573464DC73895C9764CA43(__this, L_3, L_4, NULL);
		// return Convert.ToBoolean(resultMessage.data);
		NullCheck(L_5);
		String_t* L_6 = L_5->___data_1;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Convert_ToBoolean_m3DEA64CC166C14DD2B3461A04C227A05BC06DFEC(L_6, NULL);
		return L_7;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::ExecuteJavaScript(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_ExecuteJavaScript_m1886DEE361866A15A509653857BB9924A137533E (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, String_t* ___0_script, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteJavaScript_t03445880CE57FF3F8D6A5A50FB18883590BA85CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B8116384BF7900DF0AF76D78296BB5986E60B67);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// NativeMessage nativeMessage = new NativeMessage
		// {
		//     scheme = ApiScheme.EXECUTE_JAVASCRIPT
		// };
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1*)il2cpp_codegen_object_new(NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16(L_0, NULL);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___scheme_0 = _stringLiteral2B8116384BF7900DF0AF76D78296BB5986E60B67;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___scheme_0), (void*)_stringLiteral2B8116384BF7900DF0AF76D78296BB5986E60B67);
		// nativeMessage.data = JsonMapper.ToJson(new NativeRequest.ExecuteJavaScript
		// {
		//     script = script
		// });
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_2 = L_1;
		ExecuteJavaScript_t03445880CE57FF3F8D6A5A50FB18883590BA85CB* L_3 = (ExecuteJavaScript_t03445880CE57FF3F8D6A5A50FB18883590BA85CB*)il2cpp_codegen_object_new(ExecuteJavaScript_t03445880CE57FF3F8D6A5A50FB18883590BA85CB_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ExecuteJavaScript__ctor_mF20F45EF78D01DF13D2A428A14F64E59751FD4E3(L_3, NULL);
		ExecuteJavaScript_t03445880CE57FF3F8D6A5A50FB18883590BA85CB* L_4 = L_3;
		String_t* L_5 = ___0_script;
		NullCheck(L_4);
		L_4->___script_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___script_0), (void*)L_5);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = JsonMapper_ToJson_m3951B68FD76377CF7E3DE6541DCD45474F2B7159(L_4, NULL);
		NullCheck(L_2);
		L_2->___data_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___data_2), (void*)L_6);
		// string jsonData = JsonMapper.ToJson(nativeMessage);
		String_t* L_7;
		L_7 = JsonMapper_ToJson_m3951B68FD76377CF7E3DE6541DCD45474F2B7159(L_2, NULL);
		V_0 = L_7;
		// CallAsync(jsonData, null);
		String_t* L_8 = V_0;
		NativeWebView_CallAsync_mF98E49EFAD6088CD79D61F04BF5A300BF7DFE48E(__this, L_8, (String_t*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::SetFileDownloadPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_SetFileDownloadPath_m15D5FA1ED0AC947A4D03DDEBC866CDC0434B10B8 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E3C626060D5B82A6EA09D2EE983D7C449F4F249);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// NativeMessage nativeMessage = new NativeMessage
		// {
		//     scheme = ApiScheme.SET_FILE_DOWNLOAD_PATH
		// };
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1*)il2cpp_codegen_object_new(NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16(L_0, NULL);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___scheme_0 = _stringLiteral4E3C626060D5B82A6EA09D2EE983D7C449F4F249;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___scheme_0), (void*)_stringLiteral4E3C626060D5B82A6EA09D2EE983D7C449F4F249);
		// string jsonData = JsonMapper.ToJson(nativeMessage);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = JsonMapper_ToJson_m3951B68FD76377CF7E3DE6541DCD45474F2B7159(L_1, NULL);
		V_0 = L_2;
		// CallAsync(jsonData, null);
		String_t* L_3 = V_0;
		NativeWebView_CallAsync_mF98E49EFAD6088CD79D61F04BF5A300BF7DFE48E(__this, L_3, (String_t*)NULL, NULL);
		// }
		return;
	}
}
// Gpm.WebView.Internal.NativeRequest/ShowWebView Gpm.WebView.Internal.NativeWebView::MakeShowWebView(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F* NativeWebView_MakeShowWebView_mA0E300170A2DA5CF61C89DD0C6626C8F09C3C60F (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, String_t* ___0_data, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___1_configuration, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___2_schemeList, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	{
		// List<string> schemeCommandList = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_0;
		// if (configuration.customSchemePostCommand != null)
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_1 = ___1_configuration;
		NullCheck(L_1);
		CustomSchemePostCommand_tD5519E7A81BD61CCB24370A69469848185793839* L_2 = L_1->___customSchemePostCommand_14;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// schemeCommandList = configuration.customSchemePostCommand.commandList;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_3 = ___1_configuration;
		NullCheck(L_3);
		CustomSchemePostCommand_tD5519E7A81BD61CCB24370A69469848185793839* L_4 = L_3->___customSchemePostCommand_14;
		NullCheck(L_4);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = L_4->___commandList_0;
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
		ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F* L_6 = (ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F*)il2cpp_codegen_object_new(ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ShowWebView__ctor_mF7BE177A484595DDE6866DE7FF3AE5DB8053D552(L_6, NULL);
		ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F* L_7 = L_6;
		String_t* L_8 = ___0_data;
		NullCheck(L_7);
		L_7->___data_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___data_0), (void*)L_8);
		ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F* L_9 = L_7;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_10 = ___2_schemeList;
		NullCheck(L_9);
		L_9->___schemeList_2 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___schemeList_2), (void*)L_10);
		ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F* L_11 = L_9;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_12 = (Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191*)il2cpp_codegen_object_new(Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Configuration__ctor_m95D899D85EAE741464B99462E37D8D0214D652F2(L_12, NULL);
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_13 = L_12;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_14 = ___1_configuration;
		NullCheck(L_14);
		int32_t L_15 = L_14->___style_0;
		NullCheck(L_13);
		L_13->___style_0 = L_15;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_16 = L_13;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_17 = ___1_configuration;
		NullCheck(L_17);
		int32_t L_18 = L_17->___orientation_1;
		NullCheck(L_16);
		L_16->___orientation_1 = L_18;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_19 = L_16;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_20 = ___1_configuration;
		NullCheck(L_20);
		bool L_21 = L_20->___isClearCookie_2;
		NullCheck(L_19);
		L_19->___isClearCookie_2 = L_21;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_22 = L_19;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_23 = ___1_configuration;
		NullCheck(L_23);
		bool L_24 = L_23->___isClearCache_3;
		NullCheck(L_22);
		L_22->___isClearCache_3 = L_24;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_25 = L_22;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_26 = ___1_configuration;
		NullCheck(L_26);
		String_t* L_27 = L_26->___backgroundColor_4;
		NullCheck(L_25);
		L_25->___backgroundColor_4 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&L_25->___backgroundColor_4), (void*)L_27);
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_28 = L_25;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_29 = ___1_configuration;
		NullCheck(L_29);
		bool L_30 = L_29->___isNavigationBarVisible_5;
		NullCheck(L_28);
		L_28->___isNavigationBarVisible_5 = L_30;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_31 = L_28;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_32 = ___1_configuration;
		NullCheck(L_32);
		String_t* L_33 = L_32->___navigationBarColor_6;
		NullCheck(L_31);
		L_31->___navigationBarColor_6 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&L_31->___navigationBarColor_6), (void*)L_33);
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_34 = L_31;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_35 = ___1_configuration;
		NullCheck(L_35);
		String_t* L_36 = L_35->___title_7;
		NullCheck(L_34);
		L_34->___title_7 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&L_34->___title_7), (void*)L_36);
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_37 = L_34;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_38 = ___1_configuration;
		NullCheck(L_38);
		bool L_39 = L_38->___isBackButtonVisible_8;
		NullCheck(L_37);
		L_37->___isBackButtonVisible_8 = L_39;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_40 = L_37;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_41 = ___1_configuration;
		NullCheck(L_41);
		bool L_42 = L_41->___isForwardButtonVisible_9;
		NullCheck(L_40);
		L_40->___isForwardButtonVisible_9 = L_42;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_43 = L_40;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_44 = ___1_configuration;
		NullCheck(L_44);
		bool L_45 = L_44->___isCloseButtonVisible_10;
		NullCheck(L_43);
		L_43->___isCloseButtonVisible_10 = L_45;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_46 = L_43;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_47 = ___1_configuration;
		NullCheck(L_47);
		bool L_48 = L_47->___supportMultipleWindows_11;
		NullCheck(L_46);
		L_46->___supportMultipleWindows_11 = L_48;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_49 = L_46;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_50 = ___1_configuration;
		NullCheck(L_50);
		String_t* L_51 = L_50->___userAgentString_12;
		NullCheck(L_49);
		L_49->___userAgentString_12 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&L_49->___userAgentString_12), (void*)L_51);
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_52 = L_49;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_53 = ___1_configuration;
		NullCheck(L_53);
		String_t* L_54 = L_53->___addJavascript_13;
		NullCheck(L_52);
		L_52->___addJavascript_13 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&L_52->___addJavascript_13), (void*)L_54);
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_55 = L_52;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_56 = ___1_configuration;
		NullCheck(L_56);
		Position_t824C74226386B322C9926FC29B2AFCBECAFE3778* L_57 = (Position_t824C74226386B322C9926FC29B2AFCBECAFE3778*)(&L_56->___position_15);
		bool L_58 = L_57->___hasValue_0;
		NullCheck(L_55);
		L_55->___hasPosition_14 = L_58;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_59 = L_55;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_60 = ___1_configuration;
		NullCheck(L_60);
		Position_t824C74226386B322C9926FC29B2AFCBECAFE3778* L_61 = (Position_t824C74226386B322C9926FC29B2AFCBECAFE3778*)(&L_60->___position_15);
		int32_t L_62 = L_61->___x_1;
		NullCheck(L_59);
		L_59->___positionX_15 = L_62;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_63 = L_59;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_64 = ___1_configuration;
		NullCheck(L_64);
		Position_t824C74226386B322C9926FC29B2AFCBECAFE3778* L_65 = (Position_t824C74226386B322C9926FC29B2AFCBECAFE3778*)(&L_64->___position_15);
		int32_t L_66 = L_65->___y_2;
		NullCheck(L_63);
		L_63->___positionY_16 = L_66;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_67 = L_63;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_68 = ___1_configuration;
		NullCheck(L_68);
		Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F* L_69 = (Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F*)(&L_68->___size_16);
		bool L_70 = L_69->___hasValue_0;
		NullCheck(L_67);
		L_67->___hasSize_17 = L_70;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_71 = L_67;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_72 = ___1_configuration;
		NullCheck(L_72);
		Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F* L_73 = (Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F*)(&L_72->___size_16);
		int32_t L_74 = L_73->___width_1;
		NullCheck(L_71);
		L_71->___sizeWidth_18 = L_74;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_75 = L_71;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_76 = ___1_configuration;
		NullCheck(L_76);
		Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F* L_77 = (Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F*)(&L_76->___size_16);
		int32_t L_78 = L_77->___height_2;
		NullCheck(L_75);
		L_75->___sizeHeight_19 = L_78;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_79 = L_75;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_80 = ___1_configuration;
		NullCheck(L_80);
		Margins_t710D98C860962372C9323F82DD766A3977353F85* L_81 = (Margins_t710D98C860962372C9323F82DD766A3977353F85*)(&L_80->___margins_17);
		bool L_82 = L_81->___hasValue_0;
		NullCheck(L_79);
		L_79->___hasMargins_20 = L_82;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_83 = L_79;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_84 = ___1_configuration;
		NullCheck(L_84);
		Margins_t710D98C860962372C9323F82DD766A3977353F85* L_85 = (Margins_t710D98C860962372C9323F82DD766A3977353F85*)(&L_84->___margins_17);
		int32_t L_86 = L_85->___left_1;
		NullCheck(L_83);
		L_83->___marginsLeft_21 = L_86;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_87 = L_83;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_88 = ___1_configuration;
		NullCheck(L_88);
		Margins_t710D98C860962372C9323F82DD766A3977353F85* L_89 = (Margins_t710D98C860962372C9323F82DD766A3977353F85*)(&L_88->___margins_17);
		int32_t L_90 = L_89->___top_2;
		NullCheck(L_87);
		L_87->___marginsTop_22 = L_90;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_91 = L_87;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_92 = ___1_configuration;
		NullCheck(L_92);
		Margins_t710D98C860962372C9323F82DD766A3977353F85* L_93 = (Margins_t710D98C860962372C9323F82DD766A3977353F85*)(&L_92->___margins_17);
		int32_t L_94 = L_93->___right_3;
		NullCheck(L_91);
		L_91->___marginsRight_23 = L_94;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_95 = L_91;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_96 = ___1_configuration;
		NullCheck(L_96);
		Margins_t710D98C860962372C9323F82DD766A3977353F85* L_97 = (Margins_t710D98C860962372C9323F82DD766A3977353F85*)(&L_96->___margins_17);
		int32_t L_98 = L_97->___bottom_4;
		NullCheck(L_95);
		L_95->___marginsBottom_24 = L_98;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_99 = L_95;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_100 = ___1_configuration;
		NullCheck(L_100);
		bool L_101 = L_100->___isBackButtonCloseCallbackUsed_18;
		NullCheck(L_99);
		L_99->___isBackButtonCloseCallbackUsed_25 = L_101;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_102 = L_99;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_103 = ___1_configuration;
		NullCheck(L_103);
		int32_t L_104 = L_103->___contentMode_19;
		NullCheck(L_102);
		L_102->___contentMode_26 = L_104;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_105 = L_102;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_106 = ___1_configuration;
		NullCheck(L_106);
		bool L_107 = L_106->___isMaskViewVisible_20;
		NullCheck(L_105);
		L_105->___isMaskViewVisible_27 = L_107;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_108 = L_105;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_109 = ___1_configuration;
		NullCheck(L_109);
		bool L_110 = L_109->___isAutoRotation_21;
		NullCheck(L_108);
		L_108->___isAutoRotation_28 = L_110;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_111 = L_108;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_112 = V_0;
		NullCheck(L_111);
		L_111->___schemeCommandList_29 = L_112;
		Il2CppCodeGenWriteBarrier((void**)(&L_111->___schemeCommandList_29), (void*)L_112);
		NullCheck(L_11);
		L_11->___configuration_1 = L_111;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___configuration_1), (void*)L_111);
		// CheckAutoRotation();
		NativeWebView_CheckAutoRotation_mA55A4565B127B657EFDCE3CB7A1ABD9364DC2736(__this, NULL);
		// return showWebView;
		return L_11;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::CallAsync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_CallAsync_mF98E49EFAD6088CD79D61F04BF5A300BF7DFE48E (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, String_t* ___0_data, String_t* ___1_extra, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_tFCC9E5F0F507C157748FA34EED0653C32378756A_il2cpp_TypeInfo_var);
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
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_0 = (Message_tFCC9E5F0F507C157748FA34EED0653C32378756A*)il2cpp_codegen_object_new(Message_tFCC9E5F0F507C157748FA34EED0653C32378756A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Message__ctor_m2B70B60F0703E1EA68F3C44EBC47CE3F2073F864(L_0, NULL);
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_1 = L_0;
		NullCheck(L_1);
		L_1->___domain_0 = _stringLiteral981BC9EBC76493CC8A6BEEC0CEF767E026141833;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___domain_0), (void*)_stringLiteral981BC9EBC76493CC8A6BEEC0CEF767E026141833);
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_2 = L_1;
		String_t* L_3 = ___0_data;
		NullCheck(L_2);
		L_2->___data_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___data_1), (void*)L_3);
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_4 = L_2;
		String_t* L_5 = ___1_extra;
		NullCheck(L_4);
		L_4->___extra_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___extra_2), (void*)L_5);
		// GpmCommunicator.CallAsync(message);
		GpmCommunicator_CallAsync_m7233718BD78C361D0EC0CB8495266B8FFE5B0C6A(L_4, NULL);
		// }
		return;
	}
}
// Gpm.Communicator.GpmCommunicatorVO/Message Gpm.WebView.Internal.NativeWebView::CallSync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* NativeWebView_CallSync_mD793591BA24DD0227C573464DC73895C9764CA43 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, String_t* ___0_data, String_t* ___1_extra, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_tFCC9E5F0F507C157748FA34EED0653C32378756A_il2cpp_TypeInfo_var);
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
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_0 = (Message_tFCC9E5F0F507C157748FA34EED0653C32378756A*)il2cpp_codegen_object_new(Message_tFCC9E5F0F507C157748FA34EED0653C32378756A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Message__ctor_m2B70B60F0703E1EA68F3C44EBC47CE3F2073F864(L_0, NULL);
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_1 = L_0;
		NullCheck(L_1);
		L_1->___domain_0 = _stringLiteral981BC9EBC76493CC8A6BEEC0CEF767E026141833;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___domain_0), (void*)_stringLiteral981BC9EBC76493CC8A6BEEC0CEF767E026141833);
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_2 = L_1;
		String_t* L_3 = ___0_data;
		NullCheck(L_2);
		L_2->___data_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___data_1), (void*)L_3);
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_4 = L_2;
		String_t* L_5 = ___1_extra;
		NullCheck(L_4);
		L_4->___extra_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___extra_2), (void*)L_5);
		// return GpmCommunicator.CallSync(message);
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_6;
		L_6 = GpmCommunicator_CallSync_m62FB3C82EBCD86B6B7BA2C567CE262D97DD2E104(L_4, NULL);
		return L_6;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::OnAsyncEvent(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_OnAsyncEvent_m9CD74DA600AA91607C4835F1C35059459F27FF76 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_ToObject_TisNativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_m7DFEDA985CA90E137E4D04C66693EF17D1EF9043_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5275D367BE340B201FADFB2D43BEE76A579C9BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD276C42E9A5561AAE86E99C7DEC52DEAD68ED18);
		s_Il2CppMethodInitialized = true;
	}
	NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* V_0 = NULL;
	{
		// Debug.Log("OnAsyncEvent : " + message.data);
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_0 = ___0_message;
		NullCheck(L_0);
		String_t* L_1 = L_0->___data_1;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralFD276C42E9A5561AAE86E99C7DEC52DEAD68ED18, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// NativeMessage nativeMessage = JsonMapper.ToObject<NativeMessage>(message.data);
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_3 = ___0_message;
		NullCheck(L_3);
		String_t* L_4 = L_3->___data_1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_5;
		L_5 = JsonMapper_ToObject_TisNativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_m7DFEDA985CA90E137E4D04C66693EF17D1EF9043(L_4, JsonMapper_ToObject_TisNativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_m7DFEDA985CA90E137E4D04C66693EF17D1EF9043_RuntimeMethod_var);
		V_0 = L_5;
		// if (nativeMessage == null)
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_6 = V_0;
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
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = L_7->___scheme_0;
		bool L_9;
		L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, _stringLiteralA5275D367BE340B201FADFB2D43BEE76A579C9BA, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		// OnWebViewCallback(nativeMessage);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_10 = V_0;
		NativeWebView_OnWebViewCallback_mDC25514EEBC3664DA5E35275047F0EB22F012EB2(__this, L_10, NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::OnWebViewCallback(Gpm.WebView.Internal.NativeMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_OnWebViewCallback_mDC25514EEBC3664DA5E35275047F0EB22F012EB2 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* ___0_nativeMessage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_ToObject_TisGpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84_m00F5206C911E7AA8FE924E1F7520E80CF8D3564F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCallbackHandler_GetCallback_TisGpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F_mCDB845E6A61AAC966710C12EC5D4330CC8335717_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* V_0 = NULL;
	GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// var callback = NativeCallbackHandler.GetCallback<GpmWebViewCallback.GpmWebViewDelegate>(nativeMessage.callback);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = ___0_nativeMessage;
		NullCheck(L_0);
		int32_t L_1 = L_0->___callback_4;
		il2cpp_codegen_runtime_class_init_inline(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* L_2;
		L_2 = NativeCallbackHandler_GetCallback_TisGpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F_mCDB845E6A61AAC966710C12EC5D4330CC8335717(L_1, NativeCallbackHandler_GetCallback_TisGpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F_mCDB845E6A61AAC966710C12EC5D4330CC8335717_RuntimeMethod_var);
		V_0 = L_2;
		// if (callback != null)
		GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0054;
		}
	}
	{
		// GpmWebViewError error = null;
		V_1 = (GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84*)NULL;
		// if (string.IsNullOrEmpty(nativeMessage.error) == false)
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_4 = ___0_nativeMessage;
		NullCheck(L_4);
		String_t* L_5 = L_4->___error_1;
		bool L_6;
		L_6 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_5, NULL);
		if (L_6)
		{
			goto IL_002a;
		}
	}
	{
		// error = JsonMapper.ToObject<GpmWebViewError>(nativeMessage.error);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_7 = ___0_nativeMessage;
		NullCheck(L_7);
		String_t* L_8 = L_7->___error_1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* L_9;
		L_9 = JsonMapper_ToObject_TisGpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84_m00F5206C911E7AA8FE924E1F7520E80CF8D3564F(L_8, JsonMapper_ToObject_TisGpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84_m00F5206C911E7AA8FE924E1F7520E80CF8D3564F_RuntimeMethod_var);
		V_1 = L_9;
	}

IL_002a:
	{
		// GpmWebViewCallback.CallbackType callbackType = (GpmWebViewCallback.CallbackType)nativeMessage.callbackType;
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_10 = ___0_nativeMessage;
		NullCheck(L_10);
		int32_t L_11 = L_10->___callbackType_5;
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
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_13 = ___0_nativeMessage;
		NullCheck(L_13);
		int32_t L_14 = L_13->___callback_4;
		il2cpp_codegen_runtime_class_init_inline(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		NativeCallbackHandler_UnregisterCallback_m0F4471170AB0ED37A3A5C56CD4C3B47EE1835594(L_14, NULL);
		// RestoreOrientation();
		NativeWebView_RestoreOrientation_m36F5349181B51B50CC87DAA51FD74290C0D0ACAE(__this, NULL);
	}

IL_0046:
	{
		// callback(callbackType, nativeMessage.data, error);
		GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* L_15 = V_0;
		int32_t L_16 = V_2;
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_17 = ___0_nativeMessage;
		NullCheck(L_17);
		String_t* L_18 = L_17->___data_2;
		GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* L_19 = V_1;
		NullCheck(L_15);
		GpmWebViewDelegate_Invoke_m6B8AEC4C122FCE7350C5E2A1D49D9AEFBF8C2254_inline(L_15, L_16, L_18, L_19, NULL);
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::GoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_GoBack_m28DEB5B3C8A62B0F5D46DE66D6EFC7A0B01B1E54 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84445DED3F38F40E166E8658E59ED855104487FA);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// NativeMessage nativeMessage = new NativeMessage
		// {
		//     scheme = ApiScheme.GO_BACK
		// };
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1*)il2cpp_codegen_object_new(NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16(L_0, NULL);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___scheme_0 = _stringLiteral84445DED3F38F40E166E8658E59ED855104487FA;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___scheme_0), (void*)_stringLiteral84445DED3F38F40E166E8658E59ED855104487FA);
		// string jsonData = JsonMapper.ToJson(nativeMessage);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = JsonMapper_ToJson_m3951B68FD76377CF7E3DE6541DCD45474F2B7159(L_1, NULL);
		V_0 = L_2;
		// CallAsync(jsonData, null);
		String_t* L_3 = V_0;
		NativeWebView_CallAsync_mF98E49EFAD6088CD79D61F04BF5A300BF7DFE48E(__this, L_3, (String_t*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::GoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_GoForward_mAD7E7258ED4D6A0E4AC1055333F949B095573BBE (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC5B4F97E6B0EEC7B605538C44266B526CCA0ACE);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// NativeMessage nativeMessage = new NativeMessage
		// {
		//     scheme = ApiScheme.GO_FORWARD
		// };
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1*)il2cpp_codegen_object_new(NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16(L_0, NULL);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___scheme_0 = _stringLiteralBC5B4F97E6B0EEC7B605538C44266B526CCA0ACE;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___scheme_0), (void*)_stringLiteralBC5B4F97E6B0EEC7B605538C44266B526CCA0ACE);
		// string jsonData = JsonMapper.ToJson(nativeMessage);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = JsonMapper_ToJson_m3951B68FD76377CF7E3DE6541DCD45474F2B7159(L_1, NULL);
		V_0 = L_2;
		// CallAsync(jsonData, null);
		String_t* L_3 = V_0;
		NativeWebView_CallAsync_mF98E49EFAD6088CD79D61F04BF5A300BF7DFE48E(__this, L_3, (String_t*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::SetPosition(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_SetPosition_m508B5941E281ED5A01B520FB05559FCC00716892 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Position_t270EA20F5BD7C97729951399753CABF1D1D7140F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral437495827EE2F417C6EF6D171D77428822A383BC);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// NativeMessage nativeMessage = new NativeMessage
		// {
		//     scheme = ApiScheme.SET_POSITION
		// };
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1*)il2cpp_codegen_object_new(NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16(L_0, NULL);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___scheme_0 = _stringLiteral437495827EE2F417C6EF6D171D77428822A383BC;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___scheme_0), (void*)_stringLiteral437495827EE2F417C6EF6D171D77428822A383BC);
		// nativeMessage.data = JsonMapper.ToJson(new NativeRequest.Position
		// {
		//     x = x,
		//     y = y
		// });
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_2 = L_1;
		Position_t270EA20F5BD7C97729951399753CABF1D1D7140F* L_3 = (Position_t270EA20F5BD7C97729951399753CABF1D1D7140F*)il2cpp_codegen_object_new(Position_t270EA20F5BD7C97729951399753CABF1D1D7140F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Position__ctor_m83002433A02C206B83390F73B029DB4461299EDA(L_3, NULL);
		Position_t270EA20F5BD7C97729951399753CABF1D1D7140F* L_4 = L_3;
		int32_t L_5 = ___0_x;
		NullCheck(L_4);
		L_4->___x_0 = L_5;
		Position_t270EA20F5BD7C97729951399753CABF1D1D7140F* L_6 = L_4;
		int32_t L_7 = ___1_y;
		NullCheck(L_6);
		L_6->___y_1 = L_7;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_8;
		L_8 = JsonMapper_ToJson_m3951B68FD76377CF7E3DE6541DCD45474F2B7159(L_6, NULL);
		NullCheck(L_2);
		L_2->___data_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___data_2), (void*)L_8);
		// string jsonData = JsonMapper.ToJson(nativeMessage);
		String_t* L_9;
		L_9 = JsonMapper_ToJson_m3951B68FD76377CF7E3DE6541DCD45474F2B7159(L_2, NULL);
		V_0 = L_9;
		// CallAsync(jsonData, null);
		String_t* L_10 = V_0;
		NativeWebView_CallAsync_mF98E49EFAD6088CD79D61F04BF5A300BF7DFE48E(__this, L_10, (String_t*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::SetSize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_SetSize_mE846086859C8F6E82E009BAC34CE022847CC3576 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Size_t5584C5D0B515D1AB5E8D1D89FBD1EBBC9AF3C57A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA332264C9D57E5DC8F42C16E8FDF8EC8C769CAC1);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// NativeMessage nativeMessage = new NativeMessage
		// {
		//     scheme = ApiScheme.SET_SIZE
		// };
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1*)il2cpp_codegen_object_new(NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16(L_0, NULL);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___scheme_0 = _stringLiteralA332264C9D57E5DC8F42C16E8FDF8EC8C769CAC1;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___scheme_0), (void*)_stringLiteralA332264C9D57E5DC8F42C16E8FDF8EC8C769CAC1);
		// nativeMessage.data = JsonMapper.ToJson(new NativeRequest.Size
		// {
		//     width = width,
		//     height = height
		// });
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_2 = L_1;
		Size_t5584C5D0B515D1AB5E8D1D89FBD1EBBC9AF3C57A* L_3 = (Size_t5584C5D0B515D1AB5E8D1D89FBD1EBBC9AF3C57A*)il2cpp_codegen_object_new(Size_t5584C5D0B515D1AB5E8D1D89FBD1EBBC9AF3C57A_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Size__ctor_m6694855F722337B88B9F940DFF032BB327927B8E(L_3, NULL);
		Size_t5584C5D0B515D1AB5E8D1D89FBD1EBBC9AF3C57A* L_4 = L_3;
		int32_t L_5 = ___0_width;
		NullCheck(L_4);
		L_4->___width_0 = L_5;
		Size_t5584C5D0B515D1AB5E8D1D89FBD1EBBC9AF3C57A* L_6 = L_4;
		int32_t L_7 = ___1_height;
		NullCheck(L_6);
		L_6->___height_1 = L_7;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_8;
		L_8 = JsonMapper_ToJson_m3951B68FD76377CF7E3DE6541DCD45474F2B7159(L_6, NULL);
		NullCheck(L_2);
		L_2->___data_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___data_2), (void*)L_8);
		// string jsonData = JsonMapper.ToJson(nativeMessage);
		String_t* L_9;
		L_9 = JsonMapper_ToJson_m3951B68FD76377CF7E3DE6541DCD45474F2B7159(L_2, NULL);
		V_0 = L_9;
		// CallAsync(jsonData, null);
		String_t* L_10 = V_0;
		NativeWebView_CallAsync_mF98E49EFAD6088CD79D61F04BF5A300BF7DFE48E(__this, L_10, (String_t*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::SetMargins(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_SetMargins_mF01E337AA6CF1AB7D23ECE83828EC7FC34689A05 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, int32_t ___0_left, int32_t ___1_top, int32_t ___2_right, int32_t ___3_bottom, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Margins_t461D5F3B2F0F4291936FCF0D7A8DE1EA21F6DEA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral252117B4E8431D0FCC2658F426AFAD0AEB5F4D04);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// NativeMessage nativeMessage = new NativeMessage
		// {
		//     scheme = ApiScheme.SET_MARGINS
		// };
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1*)il2cpp_codegen_object_new(NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16(L_0, NULL);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___scheme_0 = _stringLiteral252117B4E8431D0FCC2658F426AFAD0AEB5F4D04;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___scheme_0), (void*)_stringLiteral252117B4E8431D0FCC2658F426AFAD0AEB5F4D04);
		// nativeMessage.data = JsonMapper.ToJson(new NativeRequest.Margins
		// {
		//     left = left,
		//     top = top,
		//     right = right,
		//     bottom = bottom
		// });
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_2 = L_1;
		Margins_t461D5F3B2F0F4291936FCF0D7A8DE1EA21F6DEA2* L_3 = (Margins_t461D5F3B2F0F4291936FCF0D7A8DE1EA21F6DEA2*)il2cpp_codegen_object_new(Margins_t461D5F3B2F0F4291936FCF0D7A8DE1EA21F6DEA2_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Margins__ctor_m6A47CCAB0D9055D44527DB26BBA61FCFBFE54B75(L_3, NULL);
		Margins_t461D5F3B2F0F4291936FCF0D7A8DE1EA21F6DEA2* L_4 = L_3;
		int32_t L_5 = ___0_left;
		NullCheck(L_4);
		L_4->___left_0 = L_5;
		Margins_t461D5F3B2F0F4291936FCF0D7A8DE1EA21F6DEA2* L_6 = L_4;
		int32_t L_7 = ___1_top;
		NullCheck(L_6);
		L_6->___top_1 = L_7;
		Margins_t461D5F3B2F0F4291936FCF0D7A8DE1EA21F6DEA2* L_8 = L_6;
		int32_t L_9 = ___2_right;
		NullCheck(L_8);
		L_8->___right_2 = L_9;
		Margins_t461D5F3B2F0F4291936FCF0D7A8DE1EA21F6DEA2* L_10 = L_8;
		int32_t L_11 = ___3_bottom;
		NullCheck(L_10);
		L_10->___bottom_3 = L_11;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_12;
		L_12 = JsonMapper_ToJson_m3951B68FD76377CF7E3DE6541DCD45474F2B7159(L_10, NULL);
		NullCheck(L_2);
		L_2->___data_2 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___data_2), (void*)L_12);
		// string jsonData = JsonMapper.ToJson(nativeMessage);
		String_t* L_13;
		L_13 = JsonMapper_ToJson_m3951B68FD76377CF7E3DE6541DCD45474F2B7159(L_2, NULL);
		V_0 = L_13;
		// CallAsync(jsonData, null);
		String_t* L_14 = V_0;
		NativeWebView_CallAsync_mF98E49EFAD6088CD79D61F04BF5A300BF7DFE48E(__this, L_14, (String_t*)NULL, NULL);
		// }
		return;
	}
}
// System.Int32 Gpm.WebView.Internal.NativeWebView::GetX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeWebView_GetX_mAF1BECEFB3F5590B274594B0E5DF64A34FE17DB5 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral875EA38258012EC0814C5E1E233E2AE18EF8F40F);
		s_Il2CppMethodInitialized = true;
	}
	NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* V_0 = NULL;
	{
		// NativeMessage message = new NativeMessage()
		// {
		//     scheme = ApiScheme.GET_X
		// };
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1*)il2cpp_codegen_object_new(NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16(L_0, NULL);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___scheme_0 = _stringLiteral875EA38258012EC0814C5E1E233E2AE18EF8F40F;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___scheme_0), (void*)_stringLiteral875EA38258012EC0814C5E1E233E2AE18EF8F40F);
		V_0 = L_1;
		// var resultMessage = CallSync(JsonMapper.ToJson(message), string.Empty);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonMapper_ToJson_m3951B68FD76377CF7E3DE6541DCD45474F2B7159(L_2, NULL);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_5;
		L_5 = NativeWebView_CallSync_mD793591BA24DD0227C573464DC73895C9764CA43(__this, L_3, L_4, NULL);
		// return Convert.ToInt32(resultMessage.data);
		NullCheck(L_5);
		String_t* L_6 = L_5->___data_1;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Convert_ToInt32_m0C3F3778B1D646778F41B6912138AEEEE6BEB9D4(L_6, NULL);
		return L_7;
	}
}
// System.Int32 Gpm.WebView.Internal.NativeWebView::GetY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeWebView_GetY_mE1073489BB0BA8A06B81043BB6B47B9FBD41CEA7 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DF4E5E91BB385BD19147E061A8A343416B56593);
		s_Il2CppMethodInitialized = true;
	}
	NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* V_0 = NULL;
	{
		// NativeMessage message = new NativeMessage()
		// {
		//     scheme = ApiScheme.GET_Y
		// };
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1*)il2cpp_codegen_object_new(NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16(L_0, NULL);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___scheme_0 = _stringLiteral0DF4E5E91BB385BD19147E061A8A343416B56593;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___scheme_0), (void*)_stringLiteral0DF4E5E91BB385BD19147E061A8A343416B56593);
		V_0 = L_1;
		// var resultMessage = CallSync(JsonMapper.ToJson(message), string.Empty);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonMapper_ToJson_m3951B68FD76377CF7E3DE6541DCD45474F2B7159(L_2, NULL);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_5;
		L_5 = NativeWebView_CallSync_mD793591BA24DD0227C573464DC73895C9764CA43(__this, L_3, L_4, NULL);
		// return Convert.ToInt32(resultMessage.data);
		NullCheck(L_5);
		String_t* L_6 = L_5->___data_1;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Convert_ToInt32_m0C3F3778B1D646778F41B6912138AEEEE6BEB9D4(L_6, NULL);
		return L_7;
	}
}
// System.Int32 Gpm.WebView.Internal.NativeWebView::GetWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeWebView_GetWidth_mF69BE2F915405850848081D124F81A5F9AFC7F7B (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7071697C1E72CB5E80E775D7964F46C9AB875732);
		s_Il2CppMethodInitialized = true;
	}
	NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* V_0 = NULL;
	{
		// NativeMessage message = new NativeMessage()
		// {
		//     scheme = ApiScheme.GET_WIDTH
		// };
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1*)il2cpp_codegen_object_new(NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16(L_0, NULL);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___scheme_0 = _stringLiteral7071697C1E72CB5E80E775D7964F46C9AB875732;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___scheme_0), (void*)_stringLiteral7071697C1E72CB5E80E775D7964F46C9AB875732);
		V_0 = L_1;
		// var resultMessage = CallSync(JsonMapper.ToJson(message), string.Empty);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonMapper_ToJson_m3951B68FD76377CF7E3DE6541DCD45474F2B7159(L_2, NULL);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_5;
		L_5 = NativeWebView_CallSync_mD793591BA24DD0227C573464DC73895C9764CA43(__this, L_3, L_4, NULL);
		// return Convert.ToInt32(resultMessage.data);
		NullCheck(L_5);
		String_t* L_6 = L_5->___data_1;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Convert_ToInt32_m0C3F3778B1D646778F41B6912138AEEEE6BEB9D4(L_6, NULL);
		return L_7;
	}
}
// System.Int32 Gpm.WebView.Internal.NativeWebView::GetHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeWebView_GetHeight_m4362053C99E0F93486697685BFE553499A5B31AE (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48033893DB25402A6F3FBD3544D34AB02C25E0EF);
		s_Il2CppMethodInitialized = true;
	}
	NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* V_0 = NULL;
	{
		// NativeMessage message = new NativeMessage()
		// {
		//     scheme = ApiScheme.GET_HEIGHT
		// };
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1*)il2cpp_codegen_object_new(NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16(L_0, NULL);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___scheme_0 = _stringLiteral48033893DB25402A6F3FBD3544D34AB02C25E0EF;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___scheme_0), (void*)_stringLiteral48033893DB25402A6F3FBD3544D34AB02C25E0EF);
		V_0 = L_1;
		// var resultMessage = CallSync(JsonMapper.ToJson(message), string.Empty);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonMapper_ToJson_m3951B68FD76377CF7E3DE6541DCD45474F2B7159(L_2, NULL);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_5;
		L_5 = NativeWebView_CallSync_mD793591BA24DD0227C573464DC73895C9764CA43(__this, L_3, L_4, NULL);
		// return Convert.ToInt32(resultMessage.data);
		NullCheck(L_5);
		String_t* L_6 = L_5->___data_1;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Convert_ToInt32_m0C3F3778B1D646778F41B6912138AEEEE6BEB9D4(L_6, NULL);
		return L_7;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::CheckAutoRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_CheckAutoRotation_mA55A4565B127B657EFDCE3CB7A1ABD9364DC2736 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, const RuntimeMethod* method) 
{
	{
		// isAutorotateToPortrait = Screen.autorotateToPortrait;
		bool L_0;
		L_0 = Screen_get_autorotateToPortrait_m2B06F698FE88818A94F10E4398E0F2A9E5A4E30D(NULL);
		__this->___isAutorotateToPortrait_5 = L_0;
		// isAutorotateToPortraitUpsideDown = Screen.autorotateToPortraitUpsideDown;
		bool L_1;
		L_1 = Screen_get_autorotateToPortraitUpsideDown_m2CCB06FD6E3E39BF46F966AAF8E3F1B79461C286(NULL);
		__this->___isAutorotateToPortraitUpsideDown_6 = L_1;
		// isAutorotateToLandscapeLeft = Screen.autorotateToLandscapeLeft;
		bool L_2;
		L_2 = Screen_get_autorotateToLandscapeLeft_m367356230548141540C472295A159C6DF49E4806(NULL);
		__this->___isAutorotateToLandscapeLeft_7 = L_2;
		// isAutorotateToLandscapeRight =Screen.autorotateToLandscapeRight;
		bool L_3;
		L_3 = Screen_get_autorotateToLandscapeRight_mE80288BCA1B823796E2142B005F98EC0EAB769F4(NULL);
		__this->___isAutorotateToLandscapeRight_8 = L_3;
		// defaultOrientation = Screen.orientation;
		int32_t L_4;
		L_4 = Screen_get_orientation_mA6B22A441187D50831B2B18CA48A8F64BD1BD89E(NULL);
		__this->___defaultOrientation_9 = L_4;
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::RestoreOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_RestoreOrientation_m36F5349181B51B50CC87DAA51FD74290C0D0ACAE (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// Screen.autorotateToPortrait = isAutorotateToPortrait;
		bool L_0 = __this->___isAutorotateToPortrait_5;
		Screen_set_autorotateToPortrait_m42E3A0FB93AB61609F9A1E774B028A90C5791634(L_0, NULL);
		// Screen.autorotateToPortraitUpsideDown = isAutorotateToPortraitUpsideDown;
		bool L_1 = __this->___isAutorotateToPortraitUpsideDown_6;
		Screen_set_autorotateToPortraitUpsideDown_m322363C3E0347AF6C62240BD814C8719CF54AF12(L_1, NULL);
		// Screen.autorotateToLandscapeLeft = isAutorotateToLandscapeLeft;
		bool L_2 = __this->___isAutorotateToLandscapeLeft_7;
		Screen_set_autorotateToLandscapeLeft_mEBF1EEDF3BCD85A85FEF5B59ECEE40D6A73983D0(L_2, NULL);
		// Screen.autorotateToLandscapeRight = isAutorotateToLandscapeRight;
		bool L_3 = __this->___isAutorotateToLandscapeRight_8;
		Screen_set_autorotateToLandscapeRight_m259F67F2F38E5E28A7A5ABBEA5CFE9650DD7B184(L_3, NULL);
		// int orientationCount = 0;
		V_0 = 0;
		// if (Screen.autorotateToPortrait == true)
		bool L_4;
		L_4 = Screen_get_autorotateToPortrait_m2B06F698FE88818A94F10E4398E0F2A9E5A4E30D(NULL);
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		// orientationCount++;
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0039:
	{
		// if (Screen.autorotateToPortraitUpsideDown == true)
		bool L_6;
		L_6 = Screen_get_autorotateToPortraitUpsideDown_m2CCB06FD6E3E39BF46F966AAF8E3F1B79461C286(NULL);
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		// orientationCount++;
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0044:
	{
		// if (Screen.autorotateToLandscapeLeft == true)
		bool L_8;
		L_8 = Screen_get_autorotateToLandscapeLeft_m367356230548141540C472295A159C6DF49E4806(NULL);
		if (!L_8)
		{
			goto IL_004f;
		}
	}
	{
		// orientationCount++;
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_004f:
	{
		// if (Screen.autorotateToLandscapeRight == true)
		bool L_10;
		L_10 = Screen_get_autorotateToLandscapeRight_mE80288BCA1B823796E2142B005F98EC0EAB769F4(NULL);
		if (!L_10)
		{
			goto IL_005a;
		}
	}
	{
		// orientationCount++;
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
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
		Screen_set_orientation_mFCC880DDE7D3916DD8DA84E546F4743EEE773C4D(5, NULL);
		return;
	}

IL_0065:
	{
		// Screen.orientation = defaultOrientation;
		int32_t L_13 = __this->___defaultOrientation_9;
		Screen_set_orientation_mFCC880DDE7D3916DD8DA84E546F4743EEE773C4D(L_13, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::UpdateOrientation(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_UpdateOrientation_m2DCBFCE58B94C79B9C34B8960E0F3BA95B96FE92 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, int32_t ___0_orientation, const RuntimeMethod* method) 
{
	{
		// if (orientation == GpmOrientation.PORTRAIT)
		int32_t L_0 = ___0_orientation;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000b;
		}
	}
	{
		// Screen.orientation = ScreenOrientation.Portrait;
		Screen_set_orientation_mFCC880DDE7D3916DD8DA84E546F4743EEE773C4D(1, NULL);
		return;
	}

IL_000b:
	{
		// else if (orientation == GpmOrientation.PORTRAIT_REVERSE)
		int32_t L_1 = ___0_orientation;
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0016;
		}
	}
	{
		// Screen.orientation = ScreenOrientation.PortraitUpsideDown;
		Screen_set_orientation_mFCC880DDE7D3916DD8DA84E546F4743EEE773C4D(2, NULL);
		return;
	}

IL_0016:
	{
		// else if (orientation == GpmOrientation.LANDSCAPE_LEFT)
		int32_t L_2 = ___0_orientation;
		if ((!(((uint32_t)L_2) == ((uint32_t)4))))
		{
			goto IL_0021;
		}
	}
	{
		// Screen.orientation = ScreenOrientation.LandscapeLeft;
		Screen_set_orientation_mFCC880DDE7D3916DD8DA84E546F4743EEE773C4D(3, NULL);
		return;
	}

IL_0021:
	{
		// else if (orientation == GpmOrientation.LANDSCAPE_REVERSE)
		int32_t L_3 = ___0_orientation;
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_002c;
		}
	}
	{
		// Screen.orientation = ScreenOrientation.LandscapeRight;
		Screen_set_orientation_mFCC880DDE7D3916DD8DA84E546F4743EEE773C4D(4, NULL);
		return;
	}

IL_002c:
	{
		// else if (orientation != GpmOrientation.UNSPECIFIED)
		int32_t L_4 = ___0_orientation;
		if (!L_4)
		{
			goto IL_0061;
		}
	}
	{
		// Screen.autorotateToPortrait = (orientation & GpmOrientation.PORTRAIT) == GpmOrientation.PORTRAIT;
		int32_t L_5 = ___0_orientation;
		Screen_set_autorotateToPortrait_m42E3A0FB93AB61609F9A1E774B028A90C5791634((bool)((((int32_t)((int32_t)(L_5&1))) == ((int32_t)1))? 1 : 0), NULL);
		// Screen.autorotateToPortraitUpsideDown = (orientation & GpmOrientation.PORTRAIT_REVERSE) == GpmOrientation.PORTRAIT_REVERSE;
		int32_t L_6 = ___0_orientation;
		Screen_set_autorotateToPortraitUpsideDown_m322363C3E0347AF6C62240BD814C8719CF54AF12((bool)((((int32_t)((int32_t)(L_6&2))) == ((int32_t)2))? 1 : 0), NULL);
		// Screen.autorotateToLandscapeLeft = (orientation & GpmOrientation.LANDSCAPE_LEFT) == GpmOrientation.LANDSCAPE_LEFT;
		int32_t L_7 = ___0_orientation;
		Screen_set_autorotateToLandscapeLeft_mEBF1EEDF3BCD85A85FEF5B59ECEE40D6A73983D0((bool)((((int32_t)((int32_t)(L_7&4))) == ((int32_t)4))? 1 : 0), NULL);
		// Screen.autorotateToLandscapeRight = (orientation & GpmOrientation.LANDSCAPE_REVERSE) == GpmOrientation.LANDSCAPE_REVERSE;
		int32_t L_8 = ___0_orientation;
		Screen_set_autorotateToLandscapeRight_m259F67F2F38E5E28A7A5ABBEA5CFE9650DD7B184((bool)((((int32_t)((int32_t)(L_8&8))) == ((int32_t)8))? 1 : 0), NULL);
		// Screen.orientation = ScreenOrientation.AutoRotation;
		Screen_set_orientation_mFCC880DDE7D3916DD8DA84E546F4743EEE773C4D(5, NULL);
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::ShowWebBrowser(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_ShowWebBrowser_m65EB90B085213324F4952CF6ABD22764B13C8B63 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, String_t* ___0_url, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShowWebBrowser_t5C63CFC890E6EA9F6F7D9419272400EAD1265D0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE28241AB93EF4EDF8C85F2BD33E54A913E960306);
		s_Il2CppMethodInitialized = true;
	}
	NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* V_0 = NULL;
	ShowWebBrowser_t5C63CFC890E6EA9F6F7D9419272400EAD1265D0A* V_1 = NULL;
	{
		// NativeMessage nativeMessage = new NativeMessage
		// {
		//     scheme = ApiScheme.SHOW_WEB_BROWSER
		// };
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1*)il2cpp_codegen_object_new(NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16(L_0, NULL);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___scheme_0 = _stringLiteralE28241AB93EF4EDF8C85F2BD33E54A913E960306;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___scheme_0), (void*)_stringLiteralE28241AB93EF4EDF8C85F2BD33E54A913E960306);
		V_0 = L_1;
		// NativeRequest.ShowWebBrowser showWebBrowser = new NativeRequest.ShowWebBrowser
		// {
		//     url = url
		// };
		ShowWebBrowser_t5C63CFC890E6EA9F6F7D9419272400EAD1265D0A* L_2 = (ShowWebBrowser_t5C63CFC890E6EA9F6F7D9419272400EAD1265D0A*)il2cpp_codegen_object_new(ShowWebBrowser_t5C63CFC890E6EA9F6F7D9419272400EAD1265D0A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ShowWebBrowser__ctor_m2B04FAC5F218BBB7433BBE93AC5EF8322F917C2A(L_2, NULL);
		ShowWebBrowser_t5C63CFC890E6EA9F6F7D9419272400EAD1265D0A* L_3 = L_2;
		String_t* L_4 = ___0_url;
		NullCheck(L_3);
		L_3->___url_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___url_0), (void*)L_4);
		V_1 = L_3;
		// nativeMessage.data = JsonMapper.ToJson(showWebBrowser);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_5 = V_0;
		ShowWebBrowser_t5C63CFC890E6EA9F6F7D9419272400EAD1265D0A* L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = JsonMapper_ToJson_m3951B68FD76377CF7E3DE6541DCD45474F2B7159(L_6, NULL);
		NullCheck(L_5);
		L_5->___data_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___data_2), (void*)L_7);
		// CallAsync(JsonMapper.ToJson(nativeMessage), null);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_8 = V_0;
		String_t* L_9;
		L_9 = JsonMapper_ToJson_m3951B68FD76377CF7E3DE6541DCD45474F2B7159(L_8, NULL);
		NativeWebView_CallAsync_mF98E49EFAD6088CD79D61F04BF5A300BF7DFE48E(__this, L_9, (String_t*)NULL, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) 
{
	{
		// return m_Text;
		String_t* L_0 = __this->___m_Text_40;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) 
{
	{
		// return m_Value;
		int32_t L_0 = __this->___m_Value_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_IsOn; }
		bool L_0 = __this->___m_IsOn_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* WebViewImplementation_get_Instance_mAA465A7DF422AD5976021BC760B98960F395A35A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return instance; }
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0 = ((WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_StaticFields*)il2cpp_codegen_static_fields_for(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var))->___instance_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GpmWebViewDelegate_Invoke_m6B8AEC4C122FCE7350C5E2A1D49D9AEFBF8C2254_inline (GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* __this, int32_t ___0_type, String_t* ___1_data, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* ___2_error, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, String_t*, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_type, ___1_data, ___2_error, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
