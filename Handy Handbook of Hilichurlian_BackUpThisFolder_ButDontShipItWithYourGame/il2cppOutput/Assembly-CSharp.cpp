#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Action`1<System.Threading.Tasks.Task`1<System.Boolean>>
struct Action_1_t12D515BBBDB69A29DC0C4812555D0A8A51D6B856;
// System.Action`1<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Action_1_t72552EB3CFD9D41493135164276F7EE71F1132FC;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int32Enum>>
struct Action_1_tC3BD22662CBF7BCA7CF101E25DD9C3BC0C8058B4;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<UnityEngine.Localization.Settings.LocalizationSettings>
struct AsyncOperationBase_1_tB882B04817F69BD874341E5A35527CE97B20BDB6;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.RemoteConfig.FirebaseRemoteConfig>
struct Dictionary_2_tBBB166A980B2A51C109F02C7D497C158597FBAF7;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.List`1<UnityEngine.UI.Button>
struct List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.Localization.Locale>
struct List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<CheckAnswer/quest>
struct List_1_t3C6B76C8AA1B1D7FE23631F2D73478A9F1B2ED45;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0;
// System.Threading.Tasks.TaskFactory`1<Firebase.DependencyStatus>
struct TaskFactory_1_tA1BF99B45C5D8E4EBA82339084E38BD2DB72E0C1;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
// System.Threading.Tasks.Task`1<Firebase.DependencyStatus>
struct Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF;
// System.Threading.Tasks.Task`1<System.Int32Enum>
struct Task_1_t8DED34447688BFCF5112B0D05D5A80CED94E4BFB;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Localization.Locale[]
struct LocaleU5BU5D_tA72D83EF0A860CBFEFDD5F8CE268C3E7B09C1A12;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// CheckAnswer/quest[]
struct questU5BU5D_t79983FAAF5E188A7D6C7108507A0556DD34AFA3A;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// AnswerButton
struct AnswerButton_tB01BF3A00BADA685D5271D278E95AD0D3168E4D6;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// BackToMenu
struct BackToMenu_tD8E3B8BA9822D00CBD4BA804F41B32438B39E4BC;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// CheckAnswer
struct CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Firebase.RemoteConfig.ConfigInfo
struct ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Firebase.FirebaseApp
struct FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25;
// Firebase.RemoteConfig.FirebaseRemoteConfig
struct FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C;
// Firebase.RemoteConfig.FirebaseRemoteConfigInternal
struct FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7;
// FirstStartMain
struct FirstStartMain_tB03E6F142C198052431054FCB2E7C0503166FD19;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// UnityEngine.Localization.Settings.ILocalesProvider
struct ILocalesProvider_t61A5B94D50A769527BFEF945350EA16D17BAFBB0;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// LessonSetup
struct LessonSetup_t82FC2988828A3FBAD73F9FFC966ECD0D32BB3677;
// UnityEngine.Localization.Locale
struct Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9;
// LocalizationManager
struct LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// MenuFBStarter
struct MenuFBStarter_t5427F4FC813BD9CC370C731F54FA786F929F310A;
// MenuPanel
struct MenuPanel_tF1F2BBE259ECB2D72FD7F1D68EE84A3AE13FEF44;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.Localization.Metadata.MetadataCollection
struct MetadataCollection_t79AF57BE506FF84FEF50E610C73ED4CA6D015CE0;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// CheckAnswer/<GetQuests>d__19
struct U3CGetQuestsU3Ed__19_tE8675C8AE711A959B4CCC9BD1CB2ADCC849E8834;
// FirebaseController/<>c
struct U3CU3Ec_t4467D589A032923A5261C3228D1F2A8D9D8D8AB9;
// FirebaseController/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t9E04F5E73F46ADE4BB0F1AE39A6D0C9E46722FF2;
// FirstStartMain/<LocaleWaiter>d__4
struct U3CLocaleWaiterU3Ed__4_t6276C5C3CF145CCDB4C72741A75AEE47A6CFFA2B;
// LocalizationManager/<SetLocale>d__11
struct U3CSetLocaleU3Ed__11_t49A239E1491C76803FA4D88092DE65ED57C9C213;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// MenuFBStarter/<waitForLessons>d__3
struct U3CwaitForLessonsU3Ed__3_tA7927A1037D7E0A0FD3B4B5B092DD6B2682A12B7;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t12D515BBBDB69A29DC0C4812555D0A8A51D6B856_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t72552EB3CFD9D41493135164276F7EE71F1132FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncOperationHandle_1_t942B32DFBF2792F48E49169E2A65A5E46162395C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DependencyStatus_t9DA2DB2B2AC17E9DA549331B93778091496D8195_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseController_tFAF0A895515920AE41D21D9736E00FEAE8B7DBD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILocalesProvider_t61A5B94D50A769527BFEF945350EA16D17BAFBB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3C6B76C8AA1B1D7FE23631F2D73478A9F1B2ED45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MenuFBStarter_t5427F4FC813BD9CC370C731F54FA786F929F310A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetQuestsU3Ed__19_tE8675C8AE711A959B4CCC9BD1CB2ADCC849E8834_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLocaleWaiterU3Ed__4_t6276C5C3CF145CCDB4C72741A75AEE47A6CFFA2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSetLocaleU3Ed__11_t49A239E1491C76803FA4D88092DE65ED57C9C213_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_t9E04F5E73F46ADE4BB0F1AE39A6D0C9E46722FF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4467D589A032923A5261C3228D1F2A8D9D8D8AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CwaitForLessonsU3Ed__3_tA7927A1037D7E0A0FD3B4B5B092DD6B2682A12B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306;
IL2CPP_EXTERN_C String_t* _stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A;
IL2CPP_EXTERN_C String_t* _stringLiteral0D19CF46F0A7E27123A528965054EDD67AF55062;
IL2CPP_EXTERN_C String_t* _stringLiteral0E9E34245923A0BB21FDAA5FE52670E5EAD09AF1;
IL2CPP_EXTERN_C String_t* _stringLiteral35670CC2F09BA00C212F64B16378DFC291F1C2E6;
IL2CPP_EXTERN_C String_t* _stringLiteral4B805E85BA5CA9EF7718945308872F9D0EE02CED;
IL2CPP_EXTERN_C String_t* _stringLiteral50273888C7E98389B894559E62317ED9A83C9EB5;
IL2CPP_EXTERN_C String_t* _stringLiteral52B74F65D008FEFCAE3744DA354F20AA7F9EDF6E;
IL2CPP_EXTERN_C String_t* _stringLiteral674EF683D8B400F1F0F590BCCA13A350C3C1A25F;
IL2CPP_EXTERN_C String_t* _stringLiteral74B83A50A58269C4EECA165C2ABB62B80AAFC9D0;
IL2CPP_EXTERN_C String_t* _stringLiteral82530C4F208A51DFA97679728CBE5CEA8B45CAB7;
IL2CPP_EXTERN_C String_t* _stringLiteral941BD40FC4B98A9087934E679453B51E56A0715D;
IL2CPP_EXTERN_C String_t* _stringLiteralC5676759D690E122EFEB4C71234B93CCFF2ABD17;
IL2CPP_EXTERN_C String_t* _stringLiteralC5D380D7472DF62C3B0C30B37F7A25C76F3441D5;
IL2CPP_EXTERN_C String_t* _stringLiteralC8B23FD9DAFAC22E763268C645F4274EFEED06E5;
IL2CPP_EXTERN_C String_t* _stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B;
IL2CPP_EXTERN_C String_t* _stringLiteralE3E0BC991DA54A4EBC858D968493D0CB4D55810B;
IL2CPP_EXTERN_C String_t* _stringLiteralEE6710C2A5504C6481A12B6DF20BB09E4D98D4AD;
IL2CPP_EXTERN_C String_t* _stringLiteralF16D88E55A739190BAF70D6B4C6817B6E0EE2778;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_m3D517D98A1F79ED7FC2F00E753779492A06D652E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m575D8B76B20F4968870EFF8234C6FB15F0B65B57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m18FF09A5050B3040B7586482C0EA25CD43F1088D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m27A24332658AFBE50204FF512B9DC346C773FBF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseController_FetchComplete_m02E28419F0D60FD338FBA8987861F0017A5C7189_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLessonSetup_t82FC2988828A3FBAD73F9FFC966ECD0D32BB3677_mD07A93669F8CC82DBFC2A01BFD814DF00BC8F128_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m391D4851BA7E7617CFB6B876ABB6687D2248830B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4F809219B2B92D16365B4B27F60BA2DD8F5A5650_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mDECEA5FEDCE61794B52EBA15F4ECED64BAE19F95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m01D55CEDB27C278AA8BE176D48994C3F8FE27E89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4D243BAC85E1068290E26684B3D93E4BB3BD1E78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBCE3BE1FB943396333E483F66490F0690048CA2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m101F9EFDFA6483195C0E587BDC1224D070F25D6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m371BFB123C54FBBA612036D55FABF370481EFB71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mC5B87AD0943D5F96007B1EE546FEDD2B369AA5EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskExtension_ContinueWithOnMainThread_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9EFE53110BF57BDA0A8D55A9B5C280C5BC03E957_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_mAB52D6D57000543C9DD78F0D45BD7B66F819A0DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m543F02EC56EEA4AAED7101434F488D890414A3DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetQuestsU3Ed__19_System_Collections_IEnumerator_Reset_m9604F9D194FB1E83ECF1A0D4F6D3A7D91D679E32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLocaleWaiterU3Ed__4_System_Collections_IEnumerator_Reset_m922876C45EDE6F770A38F908A9D858EB56D3AB32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSetLocaleU3Ed__11_System_Collections_IEnumerator_Reset_m0C1DDD9BEF371401E93C4895C5A0CE129C8D671A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CFetchCompleteU3Eb__3_0_m5E8B70D78FD6E53BBFFBEADABCE82A8142D78260_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSendRequestU3Eb__1_1_mB18A230102EA68E32B5DF72AFD132B383C0988EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CSendRequestU3Eb__0_m2BBFC09726C8615A532A088CDA041EE819C230A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CwaitForLessonsU3Ed__3_System_Collections_IEnumerator_Reset_mE01ECEB8447644C153D14AA0782260EA077B16BD_RuntimeMethod_var;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct questU5BU5D_t79983FAAF5E188A7D6C7108507A0556DD34AFA3A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
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
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<UnityEngine.UI.Button>
struct List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Localization.Locale>
struct List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	LocaleU5BU5D_tA72D83EF0A860CBFEFDD5F8CE268C3E7B09C1A12* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
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

// System.Collections.Generic.List`1<CheckAnswer/quest>
struct List_1_t3C6B76C8AA1B1D7FE23631F2D73478A9F1B2ED45  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	questU5BU5D_t79983FAAF5E188A7D6C7108507A0556DD34AFA3A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// FirebaseController
struct FirebaseController_tFAF0A895515920AE41D21D9736E00FEAE8B7DBD3  : public RuntimeObject
{
};

// Firebase.RemoteConfig.FirebaseRemoteConfig
struct FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C  : public RuntimeObject
{
	// Firebase.RemoteConfig.FirebaseRemoteConfigInternal Firebase.RemoteConfig.FirebaseRemoteConfig::remoteConfigInternal
	FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* ___remoteConfigInternal_1;
	// Firebase.FirebaseApp Firebase.RemoteConfig.FirebaseRemoteConfig::firebaseApp
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___firebaseApp_2;
	// System.String Firebase.RemoteConfig.FirebaseRemoteConfig::instanceKey
	String_t* ___instanceKey_3;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// CheckAnswer/<GetQuests>d__19
struct U3CGetQuestsU3Ed__19_tE8675C8AE711A959B4CCC9BD1CB2ADCC849E8834  : public RuntimeObject
{
	// System.Int32 CheckAnswer/<GetQuests>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object CheckAnswer/<GetQuests>d__19::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// CheckAnswer CheckAnswer/<GetQuests>d__19::<>4__this
	CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4* ___U3CU3E4__this_2;
};

// FirebaseController/<>c
struct U3CU3Ec_t4467D589A032923A5261C3228D1F2A8D9D8D8AB9  : public RuntimeObject
{
};

// FirebaseController/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t9E04F5E73F46ADE4BB0F1AE39A6D0C9E46722FF2  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> FirebaseController/<>c__DisplayClass1_0::defaults
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___defaults_0;
};

// FirstStartMain/<LocaleWaiter>d__4
struct U3CLocaleWaiterU3Ed__4_t6276C5C3CF145CCDB4C72741A75AEE47A6CFFA2B  : public RuntimeObject
{
	// System.Int32 FirstStartMain/<LocaleWaiter>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object FirstStartMain/<LocaleWaiter>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Boolean FirstStartMain/<LocaleWaiter>d__4::loc
	bool ___loc_2;
	// FirstStartMain FirstStartMain/<LocaleWaiter>d__4::<>4__this
	FirstStartMain_tB03E6F142C198052431054FCB2E7C0503166FD19* ___U3CU3E4__this_3;
};

// LocalizationManager/<SetLocale>d__11
struct U3CSetLocaleU3Ed__11_t49A239E1491C76803FA4D88092DE65ED57C9C213  : public RuntimeObject
{
	// System.Int32 LocalizationManager/<SetLocale>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LocalizationManager/<SetLocale>d__11::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
};

// MenuFBStarter/<waitForLessons>d__3
struct U3CwaitForLessonsU3Ed__3_tA7927A1037D7E0A0FD3B4B5B092DD6B2682A12B7  : public RuntimeObject
{
	// System.Int32 MenuFBStarter/<waitForLessons>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MenuFBStarter/<waitForLessons>d__3::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// MenuFBStarter MenuFBStarter/<waitForLessons>d__3::<>4__this
	MenuFBStarter_t5427F4FC813BD9CC370C731F54FA786F929F310A* ___U3CU3E4__this_2;
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.Localization.Settings.LocalizationSettings>
struct AsyncOperationHandle_1_t942B32DFBF2792F48E49169E2A65A5E46162395C 
{
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_InternalOp
	AsyncOperationBase_1_tB882B04817F69BD874341E5A35527CE97B20BDB6* ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_LocationName
	String_t* ___m_LocationName_2;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_UnloadSceneOpExcludeReleaseCallback
	bool ___m_UnloadSceneOpExcludeReleaseCallback_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Button>
struct Enumerator_t5335AC095F03CC8AE427E31013F4DDE02B8A8A05 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_38;
};

// System.Threading.Tasks.Task`1<Firebase.DependencyStatus>
struct Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_38;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// Firebase.RemoteConfig.ConfigValue
struct ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857 
{
	// System.Byte[] Firebase.RemoteConfig.ConfigValue::<Data>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CDataU3Ek__BackingField_2;
	// Firebase.RemoteConfig.ValueSource Firebase.RemoteConfig.ConfigValue::<Source>k__BackingField
	int32_t ___U3CSourceU3Ek__BackingField_3;
};
// Native definition for P/Invoke marshalling of Firebase.RemoteConfig.ConfigValue
struct ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___U3CDataU3Ek__BackingField_2;
	int32_t ___U3CSourceU3Ek__BackingField_3;
};
// Native definition for COM marshalling of Firebase.RemoteConfig.ConfigValue
struct ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___U3CDataU3Ek__BackingField_2;
	int32_t ___U3CSourceU3Ek__BackingField_3;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
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

// UnityEngine.Localization.LocaleIdentifier
struct LocaleIdentifier_t1C6758D6E05D8D5DBCD7FFEC16E8E55547595C18 
{
	// System.String UnityEngine.Localization.LocaleIdentifier::m_Code
	String_t* ___m_Code_0;
	// System.Globalization.CultureInfo UnityEngine.Localization.LocaleIdentifier::m_CultureInfo
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CultureInfo_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Localization.LocaleIdentifier
struct LocaleIdentifier_t1C6758D6E05D8D5DBCD7FFEC16E8E55547595C18_marshaled_pinvoke
{
	char* ___m_Code_0;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___m_CultureInfo_1;
};
// Native definition for COM marshalling of UnityEngine.Localization.LocaleIdentifier
struct LocaleIdentifier_t1C6758D6E05D8D5DBCD7FFEC16E8E55547595C18_marshaled_com
{
	Il2CppChar* ___m_Code_0;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___m_CultureInfo_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
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

// CheckAnswer/quest
struct quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D 
{
	// System.String CheckAnswer/quest::question
	String_t* ___question_0;
	// System.Collections.Generic.List`1<System.String> CheckAnswer/quest::answers
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___answers_1;
};
// Native definition for P/Invoke marshalling of CheckAnswer/quest
struct quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D_marshaled_pinvoke
{
	char* ___question_0;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___answers_1;
};
// Native definition for COM marshalling of CheckAnswer/quest
struct quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D_marshaled_com
{
	Il2CppChar* ___question_0;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___answers_1;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

// System.Runtime.InteropServices.HandleRef
struct HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F 
{
	// System.Object System.Runtime.InteropServices.HandleRef::_wrapper
	RuntimeObject* ____wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::_handle
	intptr_t ____handle_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Firebase.RemoteConfig.ConfigInfo
struct ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.RemoteConfig.ConfigInfo::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.RemoteConfig.ConfigInfo::swigCMemOwn
	bool ___swigCMemOwn_1;
	// System.DateTime Firebase.RemoteConfig.ConfigInfo::UnixEpochUtc
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpochUtc_2;
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Action`1<System.Threading.Tasks.Task`1<System.Boolean>>
struct Action_1_t12D515BBBDB69A29DC0C4812555D0A8A51D6B856  : public MulticastDelegate_t
{
};

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Action_1_t72552EB3CFD9D41493135164276F7EE71F1132FC  : public MulticastDelegate_t
{
};

// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Localization.Locale
struct Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Localization.LocaleIdentifier UnityEngine.Localization.Locale::m_Identifier
	LocaleIdentifier_t1C6758D6E05D8D5DBCD7FFEC16E8E55547595C18 ___m_Identifier_4;
	// UnityEngine.Localization.Metadata.MetadataCollection UnityEngine.Localization.Locale::m_Metadata
	MetadataCollection_t79AF57BE506FF84FEF50E610C73ED4CA6D015CE0* ___m_Metadata_5;
	// System.String UnityEngine.Localization.Locale::m_LocaleName
	String_t* ___m_LocaleName_6;
	// System.String UnityEngine.Localization.Locale::m_CustomFormatCultureCode
	String_t* ___m_CustomFormatCultureCode_7;
	// System.Boolean UnityEngine.Localization.Locale::m_UseCustomFormatter
	bool ___m_UseCustomFormatter_8;
	// System.UInt16 UnityEngine.Localization.Locale::m_SortOrder
	uint16_t ___m_SortOrder_9;
	// System.IFormatProvider UnityEngine.Localization.Locale::m_Formatter
	RuntimeObject* ___m_Formatter_10;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// AnswerButton
struct AnswerButton_tB01BF3A00BADA685D5271D278E95AD0D3168E4D6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// BackToMenu
struct BackToMenu_tD8E3B8BA9822D00CBD4BA804F41B32438B39E4BC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// CheckAnswer
struct CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject CheckAnswer::ButtonPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ButtonPrefab_4;
	// UnityEngine.GameObject CheckAnswer::win
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___win_6;
	// UnityEngine.GameObject CheckAnswer::lose
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___lose_7;
	// TMPro.TMP_Text CheckAnswer::questText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___questText_11;
	// System.Collections.Generic.List`1<UnityEngine.UI.Button> CheckAnswer::buttons
	List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444* ___buttons_13;
	// System.String CheckAnswer::<winText>k__BackingField
	String_t* ___U3CwinTextU3Ek__BackingField_15;
	// System.String CheckAnswer::lsn
	String_t* ___lsn_16;
};

// FirstStartMain
struct FirstStartMain_tB03E6F142C198052431054FCB2E7C0503166FD19  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button FirstStartMain::ENG
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___ENG_4;
	// UnityEngine.UI.Button FirstStartMain::RU
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___RU_5;
};

// LessonSetup
struct LessonSetup_t82FC2988828A3FBAD73F9FFC966ECD0D32BB3677  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Byte LessonSetup::number
	uint8_t ___number_4;
};

// LocalizationManager
struct LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// MenuFBStarter
struct MenuFBStarter_t5427F4FC813BD9CC370C731F54FA786F929F310A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform MenuFBStarter::canvas
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___canvas_4;
};

// MenuPanel
struct MenuPanel_tF1F2BBE259ECB2D72FD7F1D68EE84A3AE13FEF44  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
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

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.List`1<UnityEngine.UI.Button>
struct List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.UI.Button>

// System.Collections.Generic.List`1<UnityEngine.Localization.Locale>
struct List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	LocaleU5BU5D_tA72D83EF0A860CBFEFDD5F8CE268C3E7B09C1A12* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Localization.Locale>

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

// System.Collections.Generic.List`1<CheckAnswer/quest>
struct List_1_t3C6B76C8AA1B1D7FE23631F2D73478A9F1B2ED45_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	questU5BU5D_t79983FAAF5E188A7D6C7108507A0556DD34AFA3A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<CheckAnswer/quest>

// FirebaseController
struct FirebaseController_tFAF0A895515920AE41D21D9736E00FEAE8B7DBD3_StaticFields
{
	// FirebaseStatus FirebaseController::FbStatus
	int32_t ___FbStatus_0;
};

// FirebaseController

// Firebase.RemoteConfig.FirebaseRemoteConfig
struct FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.RemoteConfig.FirebaseRemoteConfig> Firebase.RemoteConfig.FirebaseRemoteConfig::remoteConfigByInstanceKey
	Dictionary_2_tBBB166A980B2A51C109F02C7D497C158597FBAF7* ___remoteConfigByInstanceKey_0;
};

// Firebase.RemoteConfig.FirebaseRemoteConfig

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
};

// UnityEngine.Events.UnityEventBase

// UnityEngine.Events.UnityEventBase

// System.ValueType

// System.ValueType

// UnityEngine.YieldInstruction

// UnityEngine.YieldInstruction

// CheckAnswer/<GetQuests>d__19

// CheckAnswer/<GetQuests>d__19

// FirebaseController/<>c
struct U3CU3Ec_t4467D589A032923A5261C3228D1F2A8D9D8D8AB9_StaticFields
{
	// FirebaseController/<>c FirebaseController/<>c::<>9
	U3CU3Ec_t4467D589A032923A5261C3228D1F2A8D9D8D8AB9* ___U3CU3E9_0;
	// System.Action`1<System.Threading.Tasks.Task> FirebaseController/<>c::<>9__1_1
	Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* ___U3CU3E9__1_1_1;
	// System.Action`1<System.Threading.Tasks.Task`1<System.Boolean>> FirebaseController/<>c::<>9__3_0
	Action_1_t12D515BBBDB69A29DC0C4812555D0A8A51D6B856* ___U3CU3E9__3_0_2;
};

// FirebaseController/<>c

// FirebaseController/<>c__DisplayClass1_0

// FirebaseController/<>c__DisplayClass1_0

// FirstStartMain/<LocaleWaiter>d__4

// FirstStartMain/<LocaleWaiter>d__4

// LocalizationManager/<SetLocale>d__11

// LocalizationManager/<SetLocale>d__11

// MenuFBStarter/<waitForLessons>d__3

// MenuFBStarter/<waitForLessons>d__3

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.Localization.Settings.LocalizationSettings>

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.Localization.Settings.LocalizationSettings>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Button>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Button>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>

// TMPro.TMP_TextProcessingStack`1<System.Int32>

// TMPro.TMP_TextProcessingStack`1<System.Int32>

// TMPro.TMP_TextProcessingStack`1<System.Single>

// TMPro.TMP_TextProcessingStack`1<System.Single>

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Boolean>

// System.Threading.Tasks.Task`1<Firebase.DependencyStatus>
struct Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tA1BF99B45C5D8E4EBA82339084E38BD2DB72E0C1* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Firebase.DependencyStatus>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

// UnityEngine.Color32

// UnityEngine.Color32

// Firebase.RemoteConfig.ConfigValue
struct ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857_StaticFields
{
	// System.Text.RegularExpressions.Regex Firebase.RemoteConfig.ConfigValue::booleanTruePattern
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___booleanTruePattern_0;
	// System.Text.RegularExpressions.Regex Firebase.RemoteConfig.ConfigValue::booleanFalsePattern
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___booleanFalsePattern_1;
};

// Firebase.RemoteConfig.ConfigValue

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.DateTime

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Localization.LocaleIdentifier

// UnityEngine.Localization.LocaleIdentifier

// TMPro.MaterialReference

// TMPro.MaterialReference

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// UnityEngine.UI.Navigation

// UnityEngine.UI.Navigation

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// UnityEngine.UI.SpriteState

// UnityEngine.UI.SpriteState

// TMPro.TMP_FontStyleStack

// TMPro.TMP_FontStyleStack

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// TMPro.TMP_Offset

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.TimeSpan

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.Vector2
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

// UnityEngine.Vector2

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// UnityEngine.Vector4

// System.Void

// System.Void

// CheckAnswer/quest

// CheckAnswer/quest

// TMPro.TMP_Text/SpecialCharacter

// TMPro.TMP_Text/SpecialCharacter

// TMPro.TMP_Text/TextBackingContainer

// TMPro.TMP_Text/TextBackingContainer

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.UI.ColorBlock

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.Extents

// System.Runtime.InteropServices.HandleRef

// System.Runtime.InteropServices.HandleRef

// TMPro.HighlightState

// TMPro.HighlightState

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// Unity.Profiling.ProfilerMarker

// Unity.Profiling.ProfilerMarker

// TMPro.VertexGradient

// TMPro.VertexGradient

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.UI.Button/ButtonClickedEvent

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>

// UnityEngine.AudioClip

// UnityEngine.AudioClip

// UnityEngine.Component

// UnityEngine.Component

// Firebase.RemoteConfig.ConfigInfo

// Firebase.RemoteConfig.ConfigInfo

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.MulticastDelegate

// System.MulticastDelegate

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// System.SystemException

// System.SystemException

// TMPro.TMP_LineInfo

// TMPro.TMP_LineInfo

// System.Action`1<System.Threading.Tasks.Task`1<System.Boolean>>

// System.Action`1<System.Threading.Tasks.Task`1<System.Boolean>>

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>

// System.Action`1<System.Threading.Tasks.Task>

// System.Action`1<System.Threading.Tasks.Task>

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Localization.Locale

// UnityEngine.Localization.Locale

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Transform

// UnityEngine.Transform

// TMPro.WordWrapState

// TMPro.WordWrapState

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>

// UnityEngine.AudioBehaviour

// UnityEngine.AudioBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// AnswerButton

// AnswerButton

// UnityEngine.AudioSource

// UnityEngine.AudioSource

// BackToMenu

// BackToMenu

// CheckAnswer
struct CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields
{
	// UnityEngine.Transform CheckAnswer::canvas
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___canvas_5;
	// UnityEngine.AudioClip CheckAnswer::winClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___winClip_8;
	// UnityEngine.AudioClip CheckAnswer::loseClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___loseClip_9;
	// UnityEngine.AudioClip CheckAnswer::endClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___endClip_10;
	// CheckAnswer/quest CheckAnswer::current
	quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D ___current_12;
	// System.String CheckAnswer::lsnKey
	String_t* ___lsnKey_14;
	// System.Collections.Generic.List`1<CheckAnswer/quest> CheckAnswer::quests
	List_1_t3C6B76C8AA1B1D7FE23631F2D73478A9F1B2ED45* ___quests_17;
};

// CheckAnswer

// FirstStartMain

// FirstStartMain

// LessonSetup

// LessonSetup

// LocalizationManager
struct LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA_StaticFields
{
	// System.Boolean LocalizationManager::<working>k__BackingField
	bool ___U3CworkingU3Ek__BackingField_4;
	// System.Int32 LocalizationManager::<CurrentLocaleID>k__BackingField
	int32_t ___U3CCurrentLocaleIDU3Ek__BackingField_5;
};

// LocalizationManager

// MenuFBStarter
struct MenuFBStarter_t5427F4FC813BD9CC370C731F54FA786F929F310A_StaticFields
{
	// System.String[] MenuFBStarter::lsns
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___lsns_5;
};

// MenuFBStarter

// MenuPanel

// MenuPanel

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Selectable

// UnityEngine.UI.Button

// UnityEngine.UI.Button

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.MaskableGraphic

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TMP_Text
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
// CheckAnswer/quest[]
struct questU5BU5D_t79983FAAF5E188A7D6C7108507A0556DD34AFA3A  : public RuntimeArray
{
	ALIGN_FIELD (8) quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D m_Items[1];

	inline quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___question_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___answers_1), (void*)NULL);
		#endif
	}
	inline quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___question_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___answers_1), (void*)NULL);
		#endif
	}
};


// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<CheckAnswer/quest>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m101F9EFDFA6483195C0E587BDC1224D070F25D6A_gshared_inline (List_1_t3C6B76C8AA1B1D7FE23631F2D73478A9F1B2ED45* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<CheckAnswer/quest>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D List_1_get_Item_mC5B87AD0943D5F96007B1EE546FEDD2B369AA5EF_gshared (List_1_t3C6B76C8AA1B1D7FE23631F2D73478A9F1B2ED45* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m5F38AE6B74636F569647D545E365C5579E5F59CE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___3_parent, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<CheckAnswer/quest>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m01D55CEDB27C278AA8BE176D48994C3F8FE27E89_gshared (List_1_t3C6B76C8AA1B1D7FE23631F2D73478A9F1B2ED45* __this, quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<CheckAnswer/quest>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m4D243BAC85E1068290E26684B3D93E4BB3BD1E78_gshared (List_1_t3C6B76C8AA1B1D7FE23631F2D73478A9F1B2ED45* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<CheckAnswer/quest>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m391D4851BA7E7617CFB6B876ABB6687D2248830B_gshared_inline (List_1_t3C6B76C8AA1B1D7FE23631F2D73478A9F1B2ED45* __this, quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int32Enum>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_1_ContinueWith_m80CB64874F84DB8EBDB9F3F28F5B6710670B1571_gshared (Task_1_t8DED34447688BFCF5112B0D05D5A80CED94E4BFB* __this, Action_1_tC3BD22662CBF7BCA7CF101E25DD9C3BC0C8058B4* ___0_continuationAction, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Firebase.Extensions.TaskExtension::ContinueWithOnMainThread<System.Boolean>(System.Threading.Tasks.Task`1<T>,System.Action`1<System.Threading.Tasks.Task`1<T>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskExtension_ContinueWithOnMainThread_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9EFE53110BF57BDA0A8D55A9B5C280C5BC03E957_gshared (Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___0_task, Action_1_t12D515BBBDB69A29DC0C4812555D0A8A51D6B856* ___1_continuation, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<System.Int32Enum>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Task_1_get_Result_mF8B724FC6FD57DF2078A1F8927214003AAAC6286_gshared (Task_1_t8DED34447688BFCF5112B0D05D5A80CED94E4BFB* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method) ;

// UnityEngine.Localization.Settings.ILocalesProvider UnityEngine.Localization.Settings.LocalizationSettings::get_AvailableLocales()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LocalizationSettings_get_AvailableLocales_m95587473945EA5E4DF6638412151A0FEE83A0BCC (const RuntimeMethod* method) ;
// System.Int32 LocalizationManager::get_CurrentLocaleID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LocalizationManager_get_CurrentLocaleID_m320D2159C65FE58C4027EE68AB0E542E115F51CC_inline (const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Localization.Locale>::get_Item(System.Int32)
inline Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* List_1_get_Item_m371BFB123C54FBBA612036D55FABF370481EFB71 (List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* (*) (List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// UnityEngine.Localization.LocaleIdentifier UnityEngine.Localization.Locale::get_Identifier()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LocaleIdentifier_t1C6758D6E05D8D5DBCD7FFEC16E8E55547595C18 Locale_get_Identifier_mB725A4E8F29CA5C0544D03E1DD10767B54BCF29F_inline (Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Localization.LocaleIdentifier::get_Code()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LocaleIdentifier_get_Code_mD6E9CE9BCBEFE58DEDD482AA3C6BAC6B9BF68AE5_inline (LocaleIdentifier_t1C6758D6E05D8D5DBCD7FFEC16E8E55547595C18* __this, const RuntimeMethod* method) ;
// System.Boolean LocalizationManager::get_working()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool LocalizationManager_get_working_mC3BAD06E06EF5943C1D382F799109C5D524D37FF_inline (const RuntimeMethod* method) ;
// System.Void LocalizationManager::set_CurrentLocaleID(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LocalizationManager_set_CurrentLocaleID_m4E4C9B802E9F7057A2FEF6518501F089BCA2C510_inline (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Collections.IEnumerator LocalizationManager::SetLocale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LocalizationManager_SetLocale_m322DF254A9B5DB351DD69D29999E8979BCD4880F (const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void LocalizationManager/<SetLocale>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetLocaleU3Ed__11__ctor_mB12BDD0C293128467958E78D4F9BC44AB7060167 (U3CSetLocaleU3Ed__11_t49A239E1491C76803FA4D88092DE65ED57C9C213* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void LocalizationManager::set_working(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LocalizationManager_set_working_m1AF799207AD78A58E03E1DC90234037670431D58_inline (bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.Localization.Settings.LocalizationSettings> UnityEngine.Localization.Settings.LocalizationSettings::get_InitializationOperation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_1_t942B32DFBF2792F48E49169E2A65A5E46162395C LocalizationSettings_get_InitializationOperation_m9ED4C71AA291F24A8045CDC43E38469CA6297808 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Localization.Settings.LocalizationSettings::set_SelectedLocale(UnityEngine.Localization.Locale)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalizationSettings_set_SelectedLocale_m19FDCECD3A7667D216F3CD160E0A9F7078D262A1 (Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948 (String_t* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TMPro.TMP_Text>()
inline TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void CheckAnswer::Check(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAnswer_Check_m85438D4D99B5DC6FAD6BDD98ABA99FF1D8914797 (String_t* ___0_answer, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___0_sceneName, const RuntimeMethod* method) ;
// System.Void FirebaseController::SendRequest(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseController_SendRequest_m08C43F3771A038B08CCFD61F90F5B4A10BF709C1 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_keys, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<UnityEngine.AudioClip>(System.String)
inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78 (String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___0_path, method);
}
// T UnityEngine.Resources::Load<UnityEngine.GameObject>(System.String)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A (String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___0_path, method);
}
// System.Collections.IEnumerator CheckAnswer::GetQuests()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CheckAnswer_GetQuests_m446220EB88CE6D20FCDF9E57CC4EBD3C6F08DFD7 (CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4* __this, const RuntimeMethod* method) ;
// System.Void CheckAnswer/<GetQuests>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetQuestsU3Ed__19__ctor_mF872AF6DC91E5430CDB62FEE241EDD9E9715FB5E (U3CGetQuestsU3Ed__19_tE8675C8AE711A959B4CCC9BD1CB2ADCC849E8834* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<CheckAnswer/quest>::get_Count()
inline int32_t List_1_get_Count_m101F9EFDFA6483195C0E587BDC1224D070F25D6A_inline (List_1_t3C6B76C8AA1B1D7FE23631F2D73478A9F1B2ED45* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3C6B76C8AA1B1D7FE23631F2D73478A9F1B2ED45*, const RuntimeMethod*))List_1_get_Count_m101F9EFDFA6483195C0E587BDC1224D070F25D6A_gshared_inline)(__this, method);
}
// T UnityEngine.Component::GetComponent<CheckAnswer>()
inline CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4* Component_GetComponent_TisCheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_m3D517D98A1F79ED7FC2F00E753779492A06D652E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.String CheckAnswer::get_winText()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CheckAnswer_get_winText_mE4F74A644E2E2414A327DE7670B541894A28A1E8_inline (CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___0_minInclusive, int32_t ___1_maxExclusive, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<CheckAnswer/quest>::get_Item(System.Int32)
inline quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D List_1_get_Item_mC5B87AD0943D5F96007B1EE546FEDD2B369AA5EF (List_1_t3C6B76C8AA1B1D7FE23631F2D73478A9F1B2ED45* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D (*) (List_1_t3C6B76C8AA1B1D7FE23631F2D73478A9F1B2ED45*, int32_t, const RuntimeMethod*))List_1_get_Item_mC5B87AD0943D5F96007B1EE546FEDD2B369AA5EF_gshared)(__this, ___0_index, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___0_collection, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Button>::.ctor()
inline void List_1__ctor_mBCE3BE1FB943396333E483F66490F0690048CA2E (List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Boolean System.Collections.Generic.List`1<System.String>::Remove(T)
inline bool List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___3_parent, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m5F38AE6B74636F569647D545E365C5579E5F59CE_gshared)(___0_original, ___1_position, ___2_rotation, ___3_parent, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Button>::Add(T)
inline void List_1_Add_m4F809219B2B92D16365B4B27F60BA2DD8F5A5650_inline (List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444*, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.Button>::GetEnumerator()
inline Enumerator_t5335AC095F03CC8AE427E31013F4DDE02B8A8A05 List_1_GetEnumerator_mDECEA5FEDCE61794B52EBA15F4ECED64BAE19F95 (List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t5335AC095F03CC8AE427E31013F4DDE02B8A8A05 (*) (List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Button>::Dispose()
inline void Enumerator_Dispose_m575D8B76B20F4968870EFF8234C6FB15F0B65B57 (Enumerator_t5335AC095F03CC8AE427E31013F4DDE02B8A8A05* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t5335AC095F03CC8AE427E31013F4DDE02B8A8A05*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Button>::get_Current()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* Enumerator_get_Current_m27A24332658AFBE50204FF512B9DC346C773FBF1_inline (Enumerator_t5335AC095F03CC8AE427E31013F4DDE02B8A8A05* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (Enumerator_t5335AC095F03CC8AE427E31013F4DDE02B8A8A05*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Button>::MoveNext()
inline bool Enumerator_MoveNext_m18FF09A5050B3040B7586482C0EA25CD43F1088D (Enumerator_t5335AC095F03CC8AE427E31013F4DDE02B8A8A05* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t5335AC095F03CC8AE427E31013F4DDE02B8A8A05*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<CheckAnswer/quest>::Remove(T)
inline bool List_1_Remove_m01D55CEDB27C278AA8BE176D48994C3F8FE27E89 (List_1_t3C6B76C8AA1B1D7FE23631F2D73478A9F1B2ED45* __this, quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t3C6B76C8AA1B1D7FE23631F2D73478A9F1B2ED45*, quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D, const RuntimeMethod*))List_1_Remove_m01D55CEDB27C278AA8BE176D48994C3F8FE27E89_gshared)(__this, ___0_item, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void CheckAnswer::SetQuestions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAnswer_SetQuestions_mA6CADB08186FFF1917A3CDB18FA5CB7BE781E39C (CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<CheckAnswer/quest>::.ctor()
inline void List_1__ctor_m4D243BAC85E1068290E26684B3D93E4BB3BD1E78 (List_1_t3C6B76C8AA1B1D7FE23631F2D73478A9F1B2ED45* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3C6B76C8AA1B1D7FE23631F2D73478A9F1B2ED45*, const RuntimeMethod*))List_1__ctor_m4D243BAC85E1068290E26684B3D93E4BB3BD1E78_gshared)(__this, method);
}
// Firebase.RemoteConfig.FirebaseRemoteConfig Firebase.RemoteConfig.FirebaseRemoteConfig::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* FirebaseRemoteConfig_get_DefaultInstance_mE7F726BCB1E35F348E25ABB83ACDAFA1A4AD495C (const RuntimeMethod* method) ;
// Firebase.RemoteConfig.ConfigValue Firebase.RemoteConfig.FirebaseRemoteConfig::GetValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857 FirebaseRemoteConfig_GetValue_m3FDC4B8924F68E22E5D7478AA0C6D70221D7E974 (FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* __this, String_t* ___0_key, const RuntimeMethod* method) ;
// System.String Firebase.RemoteConfig.ConfigValue::get_StringValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConfigValue_get_StringValue_m5275157ED4BBF3D471E8F39EB79A7BAD782AC047 (ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857* __this, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<CheckAnswer/quest>::Add(T)
inline void List_1_Add_m391D4851BA7E7617CFB6B876ABB6687D2248830B_inline (List_1_t3C6B76C8AA1B1D7FE23631F2D73478A9F1B2ED45* __this, quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3C6B76C8AA1B1D7FE23631F2D73478A9F1B2ED45*, quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D, const RuntimeMethod*))List_1_Add_m391D4851BA7E7617CFB6B876ABB6687D2248830B_gshared_inline)(__this, ___0_item, method);
}
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___0_n, const RuntimeMethod* method) ;
// System.Void FirebaseController/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m14600CFBC8496997268F7B7A44AE2E7DDCD764A0 (U3CU3Ec__DisplayClass1_0_t9E04F5E73F46ADE4BB0F1AE39A6D0C9E46722FF2* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(TKey,TValue)
inline void Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Threading.Tasks.Task`1<Firebase.DependencyStatus> Firebase.FirebaseApp::CheckAndFixDependenciesAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* FirebaseApp_CheckAndFixDependenciesAsync_mB21D0BA4D3C2F6C975D72DB0F2CEFF46A4361557 (const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m4F6B8318AD92B94ABD9C753FFD7CEE0687417DAC (Action_1_t72552EB3CFD9D41493135164276F7EE71F1132FC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t72552EB3CFD9D41493135164276F7EE71F1132FC*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Firebase.DependencyStatus>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<TResult>>)
inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_1_ContinueWith_mAB52D6D57000543C9DD78F0D45BD7B66F819A0DD (Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* __this, Action_1_t72552EB3CFD9D41493135164276F7EE71F1132FC* ___0_continuationAction, const RuntimeMethod* method)
{
	return ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF*, Action_1_t72552EB3CFD9D41493135164276F7EE71F1132FC*, const RuntimeMethod*))Task_1_ContinueWith_m80CB64874F84DB8EBDB9F3F28F5B6710670B1571_gshared)(__this, ___0_continuationAction, method);
}
// System.Threading.Tasks.Task Firebase.RemoteConfig.FirebaseRemoteConfig::FetchAsync(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* FirebaseRemoteConfig_FetchAsync_m2060F6CF9DA839E51C489AD8285EF7C737F48CB4 (FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_cacheExpiration, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Threading.Tasks.Task>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mC25101220D4DFE3C39E1A327AD5B6F29A69776B0 (Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Threading.Tasks.Task Firebase.Extensions.TaskExtension::ContinueWithOnMainThread(System.Threading.Tasks.Task,System.Action`1<System.Threading.Tasks.Task>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskExtension_ContinueWithOnMainThread_m6BDD5EFACC9A21E8AA0A27D6C6BCCA15C000566C (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_task, Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* ___1_continuation, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::get_IsCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCanceled_m96A8D3F85158A9CB3AEA50A00A55BE4E0F0E21FA (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::get_IsFaulted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsFaulted_mC0AD3EA4EAF3B47C1F5FE9624541F0A00B9426D9 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// Firebase.RemoteConfig.ConfigInfo Firebase.RemoteConfig.FirebaseRemoteConfig::get_Info()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39* FirebaseRemoteConfig_get_Info_m54BE3021C99F11C94F78078DA718C2DF4DDA9AC0 (FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* __this, const RuntimeMethod* method) ;
// Firebase.RemoteConfig.LastFetchStatus Firebase.RemoteConfig.ConfigInfo::get_LastFetchStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConfigInfo_get_LastFetchStatus_mA856815199E2A66B688DEFF65792763DA3AD051A (ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<System.Boolean> Firebase.RemoteConfig.FirebaseRemoteConfig::ActivateAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* FirebaseRemoteConfig_ActivateAsync_m4259BC44EA9439B3BE4E27135121314FC61D5FDB (FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Boolean>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m8DB17142BC5CB34C561C3A08FF3390CC83C7D94F (Action_1_t12D515BBBDB69A29DC0C4812555D0A8A51D6B856* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t12D515BBBDB69A29DC0C4812555D0A8A51D6B856*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Threading.Tasks.Task Firebase.Extensions.TaskExtension::ContinueWithOnMainThread<System.Boolean>(System.Threading.Tasks.Task`1<T>,System.Action`1<System.Threading.Tasks.Task`1<T>>)
inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskExtension_ContinueWithOnMainThread_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9EFE53110BF57BDA0A8D55A9B5C280C5BC03E957 (Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___0_task, Action_1_t12D515BBBDB69A29DC0C4812555D0A8A51D6B856* ___1_continuation, const RuntimeMethod* method)
{
	return ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, Action_1_t12D515BBBDB69A29DC0C4812555D0A8A51D6B856*, const RuntimeMethod*))TaskExtension_ContinueWithOnMainThread_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9EFE53110BF57BDA0A8D55A9B5C280C5BC03E957_gshared)(___0_task, ___1_continuation, method);
}
// Firebase.RemoteConfig.FetchFailureReason Firebase.RemoteConfig.ConfigInfo::get_LastFetchFailureReason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConfigInfo_get_LastFetchFailureReason_m8837A463492D13F1CB5DFF86F66D6F022CA91DBC (ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39* __this, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<Firebase.DependencyStatus>::get_Result()
inline int32_t Task_1_get_Result_m543F02EC56EEA4AAED7101434F488D890414A3DA (Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF*, const RuntimeMethod*))Task_1_get_Result_mF8B724FC6FD57DF2078A1F8927214003AAAC6286_gshared)(__this, method);
}
// System.Threading.Tasks.Task Firebase.RemoteConfig.FirebaseRemoteConfig::SetDefaultsAsync(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* FirebaseRemoteConfig_SetDefaultsAsync_mD2E78DAD34846827B38B22038811509155EBAF3F (FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* __this, RuntimeObject* ___0_defaults, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void FirebaseController/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mABF9067E29B884C619D1C543BC0BA2A4B96625B0 (U3CU3Ec_t4467D589A032923A5261C3228D1F2A8D9D8D8AB9* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task FirebaseController::FetchDataAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* FirebaseController_FetchDataAsync_m7A9312A6B48FCD044CCEDC9D1991B524EEE2CCC7 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D (String_t* ___0_key, int32_t ___1_defaultValue, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator FirstStartMain::LocaleWaiter(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FirstStartMain_LocaleWaiter_m8D7BE80608F38E1AFE00E6FA5A603419696FE619 (FirstStartMain_tB03E6F142C198052431054FCB2E7C0503166FD19* __this, bool ___0_loc, const RuntimeMethod* method) ;
// System.Void FirstStartMain/<LocaleWaiter>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLocaleWaiterU3Ed__4__ctor_m0953F2DFE2C716752FF72AFBD73BD848F608EB29 (U3CLocaleWaiterU3Ed__4_t6276C5C3CF145CCDB4C72741A75AEE47A6CFFA2B* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void FirstStartMain::Menu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstStartMain_Menu_mC063679948AD2283C8A34D9F3AF535F21D548A6C (FirstStartMain_tB03E6F142C198052431054FCB2E7C0503166FD19* __this, const RuntimeMethod* method) ;
// System.String System.Byte::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4 (uint8_t* __this, const RuntimeMethod* method) ;
// System.String LocalizationManager::get_CurrentLocaleCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LocalizationManager_get_CurrentLocaleCode_m145A08E471BBD1C5FF08F363472E67E3D1BB2374 (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void MenuFBStarter::DrawButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuFBStarter_DrawButtons_m0FE14E65CAC8995621FCEA8248444CA18B78395E (MenuFBStarter_t5427F4FC813BD9CC370C731F54FA786F929F310A* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator MenuFBStarter::waitForLessons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MenuFBStarter_waitForLessons_mF80464F508D3223F9BA4FC208F1C658E897D41FA (MenuFBStarter_t5427F4FC813BD9CC370C731F54FA786F929F310A* __this, const RuntimeMethod* method) ;
// System.Void MenuFBStarter/<waitForLessons>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwaitForLessonsU3Ed__3__ctor_m46136FF1C4E76AA71162994C46A74AE5D972A524 (U3CwaitForLessonsU3Ed__3_tA7927A1037D7E0A0FD3B4B5B092DD6B2682A12B7* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___0_original, ___1_parent, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<LessonSetup>()
inline LessonSetup_t82FC2988828A3FBAD73F9FFC966ECD0D32BB3677* GameObject_GetComponent_TisLessonSetup_t82FC2988828A3FBAD73F9FFC966ECD0D32BB3677_mD07A93669F8CC82DBFC2A01BFD814DF00BC8F128 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  LessonSetup_t82FC2988828A3FBAD73F9FFC966ECD0D32BB3677* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
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
// System.Boolean LocalizationManager::get_working()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocalizationManager_get_working_mC3BAD06E06EF5943C1D382F799109C5D524D37FF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool working { get; private set; }
		bool L_0 = ((LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA_StaticFields*)il2cpp_codegen_static_fields_for(LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA_il2cpp_TypeInfo_var))->___U3CworkingU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void LocalizationManager::set_working(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalizationManager_set_working_m1AF799207AD78A58E03E1DC90234037670431D58 (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool working { get; private set; }
		bool L_0 = ___0_value;
		((LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA_StaticFields*)il2cpp_codegen_static_fields_for(LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA_il2cpp_TypeInfo_var))->___U3CworkingU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Int32 LocalizationManager::get_CurrentLocaleID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LocalizationManager_get_CurrentLocaleID_m320D2159C65FE58C4027EE68AB0E542E115F51CC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int CurrentLocaleID { get; private set; }
		int32_t L_0 = ((LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA_StaticFields*)il2cpp_codegen_static_fields_for(LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA_il2cpp_TypeInfo_var))->___U3CCurrentLocaleIDU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void LocalizationManager::set_CurrentLocaleID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalizationManager_set_CurrentLocaleID_m4E4C9B802E9F7057A2FEF6518501F089BCA2C510 (int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int CurrentLocaleID { get; private set; }
		int32_t L_0 = ___0_value;
		((LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA_StaticFields*)il2cpp_codegen_static_fields_for(LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA_il2cpp_TypeInfo_var))->___U3CCurrentLocaleIDU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.String LocalizationManager::get_CurrentLocaleCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LocalizationManager_get_CurrentLocaleCode_m145A08E471BBD1C5FF08F363472E67E3D1BB2374 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILocalesProvider_t61A5B94D50A769527BFEF945350EA16D17BAFBB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m371BFB123C54FBBA612036D55FABF370481EFB71_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	LocaleIdentifier_t1C6758D6E05D8D5DBCD7FFEC16E8E55547595C18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return LocalizationSettings.AvailableLocales.Locales[CurrentLocaleID].Identifier.Code;
		RuntimeObject* L_0;
		L_0 = LocalizationSettings_get_AvailableLocales_m95587473945EA5E4DF6638412151A0FEE83A0BCC(NULL);
		NullCheck(L_0);
		List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548* L_1;
		L_1 = InterfaceFuncInvoker0< List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548* >::Invoke(0 /* System.Collections.Generic.List`1<UnityEngine.Localization.Locale> UnityEngine.Localization.Settings.ILocalesProvider::get_Locales() */, ILocalesProvider_t61A5B94D50A769527BFEF945350EA16D17BAFBB0_il2cpp_TypeInfo_var, L_0);
		int32_t L_2;
		L_2 = LocalizationManager_get_CurrentLocaleID_m320D2159C65FE58C4027EE68AB0E542E115F51CC_inline(NULL);
		NullCheck(L_1);
		Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* L_3;
		L_3 = List_1_get_Item_m371BFB123C54FBBA612036D55FABF370481EFB71(L_1, L_2, List_1_get_Item_m371BFB123C54FBBA612036D55FABF370481EFB71_RuntimeMethod_var);
		NullCheck(L_3);
		LocaleIdentifier_t1C6758D6E05D8D5DBCD7FFEC16E8E55547595C18 L_4;
		L_4 = Locale_get_Identifier_mB725A4E8F29CA5C0544D03E1DD10767B54BCF29F_inline(L_3, NULL);
		V_0 = L_4;
		String_t* L_5;
		L_5 = LocaleIdentifier_get_Code_mD6E9CE9BCBEFE58DEDD482AA3C6BAC6B9BF68AE5_inline((&V_0), NULL);
		return L_5;
	}
}
// System.Void LocalizationManager::ChangeLocale(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalizationManager_ChangeLocale_mDAF004C6D2E49371F68E995FC95D3E2C556AB627 (LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* __this, int32_t ___0_localeID, const RuntimeMethod* method) 
{
	{
		// if (working)
		bool L_0;
		L_0 = LocalizationManager_get_working_mC3BAD06E06EF5943C1D382F799109C5D524D37FF_inline(NULL);
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// CurrentLocaleID = localeID;
		int32_t L_1 = ___0_localeID;
		LocalizationManager_set_CurrentLocaleID_m4E4C9B802E9F7057A2FEF6518501F089BCA2C510_inline(L_1, NULL);
		// StartCoroutine(SetLocale());
		RuntimeObject* L_2;
		L_2 = LocalizationManager_SetLocale_m322DF254A9B5DB351DD69D29999E8979BCD4880F(NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator LocalizationManager::SetLocale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LocalizationManager_SetLocale_m322DF254A9B5DB351DD69D29999E8979BCD4880F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSetLocaleU3Ed__11_t49A239E1491C76803FA4D88092DE65ED57C9C213_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSetLocaleU3Ed__11_t49A239E1491C76803FA4D88092DE65ED57C9C213* L_0 = (U3CSetLocaleU3Ed__11_t49A239E1491C76803FA4D88092DE65ED57C9C213*)il2cpp_codegen_object_new(U3CSetLocaleU3Ed__11_t49A239E1491C76803FA4D88092DE65ED57C9C213_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSetLocaleU3Ed__11__ctor_mB12BDD0C293128467958E78D4F9BC44AB7060167(L_0, 0, NULL);
		return L_0;
	}
}
// System.Void LocalizationManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalizationManager__ctor_m4FA456E63F3A78C43C5646C93035BDE0DD1C6DDA (LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* __this, const RuntimeMethod* method) 
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
// System.Void LocalizationManager/<SetLocale>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetLocaleU3Ed__11__ctor_mB12BDD0C293128467958E78D4F9BC44AB7060167 (U3CSetLocaleU3Ed__11_t49A239E1491C76803FA4D88092DE65ED57C9C213* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void LocalizationManager/<SetLocale>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetLocaleU3Ed__11_System_IDisposable_Dispose_mFF6DDD436F6A72C15D0798ADFB4977D6D0C15B4E (U3CSetLocaleU3Ed__11_t49A239E1491C76803FA4D88092DE65ED57C9C213* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean LocalizationManager/<SetLocale>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSetLocaleU3Ed__11_MoveNext_mC0924BC28B53B1CC53468DB4935476E4275D83DF (U3CSetLocaleU3Ed__11_t49A239E1491C76803FA4D88092DE65ED57C9C213* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_t942B32DFBF2792F48E49169E2A65A5E46162395C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILocalesProvider_t61A5B94D50A769527BFEF945350EA16D17BAFBB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m371BFB123C54FBBA612036D55FABF370481EFB71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuFBStarter_t5427F4FC813BD9CC370C731F54FA786F929F310A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3E0BC991DA54A4EBC858D968493D0CB4D55810B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0036;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// working = true;
		LocalizationManager_set_working_m1AF799207AD78A58E03E1DC90234037670431D58_inline((bool)1, NULL);
		// yield return LocalizationSettings.InitializationOperation;
		AsyncOperationHandle_1_t942B32DFBF2792F48E49169E2A65A5E46162395C L_3;
		L_3 = LocalizationSettings_get_InitializationOperation_m9ED4C71AA291F24A8045CDC43E38469CA6297808(NULL);
		AsyncOperationHandle_1_t942B32DFBF2792F48E49169E2A65A5E46162395C L_4 = L_3;
		RuntimeObject* L_5 = Box(AsyncOperationHandle_1_t942B32DFBF2792F48E49169E2A65A5E46162395C_il2cpp_TypeInfo_var, &L_4);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0036:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// LocalizationSettings.SelectedLocale = LocalizationSettings.AvailableLocales.Locales[CurrentLocaleID];
		RuntimeObject* L_6;
		L_6 = LocalizationSettings_get_AvailableLocales_m95587473945EA5E4DF6638412151A0FEE83A0BCC(NULL);
		NullCheck(L_6);
		List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548* L_7;
		L_7 = InterfaceFuncInvoker0< List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548* >::Invoke(0 /* System.Collections.Generic.List`1<UnityEngine.Localization.Locale> UnityEngine.Localization.Settings.ILocalesProvider::get_Locales() */, ILocalesProvider_t61A5B94D50A769527BFEF945350EA16D17BAFBB0_il2cpp_TypeInfo_var, L_6);
		int32_t L_8;
		L_8 = LocalizationManager_get_CurrentLocaleID_m320D2159C65FE58C4027EE68AB0E542E115F51CC_inline(NULL);
		NullCheck(L_7);
		Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* L_9;
		L_9 = List_1_get_Item_m371BFB123C54FBBA612036D55FABF370481EFB71(L_7, L_8, List_1_get_Item_m371BFB123C54FBBA612036D55FABF370481EFB71_RuntimeMethod_var);
		LocalizationSettings_set_SelectedLocale_m19FDCECD3A7667D216F3CD160E0A9F7078D262A1(L_9, NULL);
		// PlayerPrefs.SetInt("Locale", CurrentLocaleID);
		int32_t L_10;
		L_10 = LocalizationManager_get_CurrentLocaleID_m320D2159C65FE58C4027EE68AB0E542E115F51CC_inline(NULL);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteralE3E0BC991DA54A4EBC858D968493D0CB4D55810B, L_10, NULL);
		// MenuFBStarter.lsns = null;
		((MenuFBStarter_t5427F4FC813BD9CC370C731F54FA786F929F310A_StaticFields*)il2cpp_codegen_static_fields_for(MenuFBStarter_t5427F4FC813BD9CC370C731F54FA786F929F310A_il2cpp_TypeInfo_var))->___lsns_5 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((MenuFBStarter_t5427F4FC813BD9CC370C731F54FA786F929F310A_StaticFields*)il2cpp_codegen_static_fields_for(MenuFBStarter_t5427F4FC813BD9CC370C731F54FA786F929F310A_il2cpp_TypeInfo_var))->___lsns_5), (void*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL);
		// working = false;
		LocalizationManager_set_working_m1AF799207AD78A58E03E1DC90234037670431D58_inline((bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object LocalizationManager/<SetLocale>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSetLocaleU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAF9993C5A7709433CA49F817ABFD314A23933E7C (U3CSetLocaleU3Ed__11_t49A239E1491C76803FA4D88092DE65ED57C9C213* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void LocalizationManager/<SetLocale>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetLocaleU3Ed__11_System_Collections_IEnumerator_Reset_m0C1DDD9BEF371401E93C4895C5A0CE129C8D671A (U3CSetLocaleU3Ed__11_t49A239E1491C76803FA4D88092DE65ED57C9C213* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSetLocaleU3Ed__11_System_Collections_IEnumerator_Reset_m0C1DDD9BEF371401E93C4895C5A0CE129C8D671A_RuntimeMethod_var)));
	}
}
// System.Object LocalizationManager/<SetLocale>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSetLocaleU3Ed__11_System_Collections_IEnumerator_get_Current_mCCF0DE263E28B5A3C27588101059F64458B60E4B (U3CSetLocaleU3Ed__11_t49A239E1491C76803FA4D88092DE65ED57C9C213* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void AnswerButton::Check()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnswerButton_Check_m040DB8D074D1E8E37362150A0E9F49C9BF83B660 (AnswerButton_tB01BF3A00BADA685D5271D278E95AD0D3168E4D6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckAnswer.Check(transform.GetChild(0).GetComponent<TMP_Text>().text);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_0, 0, NULL);
		NullCheck(L_1);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_2;
		L_2 = Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5(L_1, Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_2);
		il2cpp_codegen_runtime_class_init_inline(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var);
		CheckAnswer_Check_m85438D4D99B5DC6FAD6BDD98ABA99FF1D8914797(L_3, NULL);
		// }
		return;
	}
}
// System.Void AnswerButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnswerButton__ctor_m9AE7119B8134C31A6CE1DE7870EAA67A4575121D (AnswerButton_tB01BF3A00BADA685D5271D278E95AD0D3168E4D6* __this, const RuntimeMethod* method) 
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
// System.Void BackToMenu::Menu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackToMenu_Menu_mCDB9AFFA5DEF08E0ED8337C77BE8C04DC67CAAE6 (BackToMenu_tD8E3B8BA9822D00CBD4BA804F41B32438B39E4BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Menu");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A, NULL);
		// }
		return;
	}
}
// System.Void BackToMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackToMenu__ctor_mB80D7C69D6AF7F7B88AEF2F34345D2CF310127A9 (BackToMenu_tD8E3B8BA9822D00CBD4BA804F41B32438B39E4BC* __this, const RuntimeMethod* method) 
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
// System.String CheckAnswer::get_winText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CheckAnswer_get_winText_mE4F74A644E2E2414A327DE7670B541894A28A1E8 (CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4* __this, const RuntimeMethod* method) 
{
	{
		// public string winText { get; set; }
		String_t* L_0 = __this->___U3CwinTextU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Void CheckAnswer::set_winText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAnswer_set_winText_mC907DA9FF1A66997E6789FC12BCCC751F592A4C0 (CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string winText { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CwinTextU3Ek__BackingField_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwinTextU3Ek__BackingField_15), (void*)L_0);
		return;
	}
}
// System.Void CheckAnswer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAnswer_Start_m8CD4D146729B0CE9683D0384262B51014F986C5A (CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E9E34245923A0BB21FDAA5FE52670E5EAD09AF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74B83A50A58269C4EECA165C2ABB62B80AAFC9D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5676759D690E122EFEB4C71234B93CCFF2ABD17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8B23FD9DAFAC22E763268C645F4274EFEED06E5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FirebaseController.SendRequest(new string[] { lsnKey });
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		il2cpp_codegen_runtime_class_init_inline(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var);
		String_t* L_2 = ((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___lsnKey_14;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		FirebaseController_SendRequest_m08C43F3771A038B08CCFD61F90F5B4A10BF709C1(L_1, NULL);
		// winClip = Resources.Load<AudioClip>("Win");
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_3;
		L_3 = Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78(_stringLiteral0E9E34245923A0BB21FDAA5FE52670E5EAD09AF1, Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78_RuntimeMethod_var);
		((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___winClip_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___winClip_8), (void*)L_3);
		// loseClip = Resources.Load<AudioClip>("Lose");
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4;
		L_4 = Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78(_stringLiteral74B83A50A58269C4EECA165C2ABB62B80AAFC9D0, Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78_RuntimeMethod_var);
		((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___loseClip_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___loseClip_9), (void*)L_4);
		// endClip = Resources.Load<AudioClip>("End Song");
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5;
		L_5 = Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78(_stringLiteralC8B23FD9DAFAC22E763268C645F4274EFEED06E5, Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78_RuntimeMethod_var);
		((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___endClip_10 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___endClip_10), (void*)L_5);
		// canvas = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___canvas_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___canvas_5), (void*)L_6);
		// ButtonPrefab = Resources.Load<GameObject>("AnswerButton");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A(_stringLiteralC5676759D690E122EFEB4C71234B93CCFF2ABD17, Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var);
		__this->___ButtonPrefab_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ButtonPrefab_4), (void*)L_7);
		// StartCoroutine(GetQuests());
		RuntimeObject* L_8;
		L_8 = CheckAnswer_GetQuests_m446220EB88CE6D20FCDF9E57CC4EBD3C6F08DFD7(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_9;
		L_9 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_8, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator CheckAnswer::GetQuests()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CheckAnswer_GetQuests_m446220EB88CE6D20FCDF9E57CC4EBD3C6F08DFD7 (CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetQuestsU3Ed__19_tE8675C8AE711A959B4CCC9BD1CB2ADCC849E8834_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetQuestsU3Ed__19_tE8675C8AE711A959B4CCC9BD1CB2ADCC849E8834* L_0 = (U3CGetQuestsU3Ed__19_tE8675C8AE711A959B4CCC9BD1CB2ADCC849E8834*)il2cpp_codegen_object_new(U3CGetQuestsU3Ed__19_tE8675C8AE711A959B4CCC9BD1CB2ADCC849E8834_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetQuestsU3Ed__19__ctor_mF872AF6DC91E5430CDB62FEE241EDD9E9715FB5E(L_0, 0, NULL);
		U3CGetQuestsU3Ed__19_tE8675C8AE711A959B4CCC9BD1CB2ADCC849E8834* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void CheckAnswer::SetQuestions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAnswer_SetQuestions_mA6CADB08186FFF1917A3CDB18FA5CB7BE781E39C (CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_m3D517D98A1F79ED7FC2F00E753779492A06D652E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4F809219B2B92D16365B4B27F60BA2DD8F5A5650_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBCE3BE1FB943396333E483F66490F0690048CA2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m101F9EFDFA6483195C0E587BDC1224D070F25D6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC5B87AD0943D5F96007B1EE546FEDD2B369AA5EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (quests.Count == 0)
		il2cpp_codegen_runtime_class_init_inline(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var);
		List_1_t3C6B76C8AA1B1D7FE23631F2D73478A9F1B2ED45* L_0 = ((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___quests_17;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m101F9EFDFA6483195C0E587BDC1224D070F25D6A_inline(L_0, List_1_get_Count_m101F9EFDFA6483195C0E587BDC1224D070F25D6A_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_004a;
		}
	}
	{
		// canvas.GetComponent<CheckAnswer>().questText.text = winText;
		il2cpp_codegen_runtime_class_init_inline(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___canvas_5;
		NullCheck(L_2);
		CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4* L_3;
		L_3 = Component_GetComponent_TisCheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_m3D517D98A1F79ED7FC2F00E753779492A06D652E(L_2, Component_GetComponent_TisCheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_m3D517D98A1F79ED7FC2F00E753779492A06D652E_RuntimeMethod_var);
		NullCheck(L_3);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_4 = L_3->___questText_11;
		String_t* L_5;
		L_5 = CheckAnswer_get_winText_mE4F74A644E2E2414A327DE7670B541894A28A1E8_inline(__this, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, L_5);
		// canvas.GetComponent<AudioSource>().clip = endClip;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = ((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___canvas_5;
		NullCheck(L_6);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7;
		L_7 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(L_6, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_8 = ((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___endClip_10;
		NullCheck(L_7);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_7, L_8, NULL);
		// canvas.GetComponent<AudioSource>().Play();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = ((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___canvas_5;
		NullCheck(L_9);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10;
		L_10 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(L_9, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		NullCheck(L_10);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_10, NULL);
		// return;
		return;
	}

IL_004a:
	{
		// current = quests[Random.Range(0, quests.Count)];
		il2cpp_codegen_runtime_class_init_inline(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var);
		List_1_t3C6B76C8AA1B1D7FE23631F2D73478A9F1B2ED45* L_11 = ((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___quests_17;
		List_1_t3C6B76C8AA1B1D7FE23631F2D73478A9F1B2ED45* L_12 = ((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___quests_17;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m101F9EFDFA6483195C0E587BDC1224D070F25D6A_inline(L_12, List_1_get_Count_m101F9EFDFA6483195C0E587BDC1224D070F25D6A_RuntimeMethod_var);
		int32_t L_14;
		L_14 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_13, NULL);
		NullCheck(L_11);
		quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D L_15;
		L_15 = List_1_get_Item_mC5B87AD0943D5F96007B1EE546FEDD2B369AA5EF(L_11, L_14, List_1_get_Item_mC5B87AD0943D5F96007B1EE546FEDD2B369AA5EF_RuntimeMethod_var);
		((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___current_12 = L_15;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___current_12))->___question_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___current_12))->___answers_1), (void*)NULL);
		#endif
		// canvas.GetComponent<CheckAnswer>().questText.text = current.question;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = ((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___canvas_5;
		NullCheck(L_16);
		CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4* L_17;
		L_17 = Component_GetComponent_TisCheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_m3D517D98A1F79ED7FC2F00E753779492A06D652E(L_16, Component_GetComponent_TisCheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_m3D517D98A1F79ED7FC2F00E753779492A06D652E_RuntimeMethod_var);
		NullCheck(L_17);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_18 = L_17->___questText_11;
		String_t* L_19 = (&((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___current_12)->___question_0;
		NullCheck(L_18);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_18, L_19);
		// List<string> answers = new List<string>(current.answers);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_20 = (&((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___current_12)->___answers_1;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_21 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC(L_21, L_20, List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
		V_0 = L_21;
		// buttons = new List<Button>();
		List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444* L_22 = (List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444*)il2cpp_codegen_object_new(List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		List_1__ctor_mBCE3BE1FB943396333E483F66490F0690048CA2E(L_22, List_1__ctor_mBCE3BE1FB943396333E483F66490F0690048CA2E_RuntimeMethod_var);
		__this->___buttons_13 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buttons_13), (void*)L_22);
		// int n = 0;
		V_1 = 0;
		goto IL_0120;
	}

IL_00a6:
	{
		// answers.Remove(s = answers[Random.Range(0, answers.Count)]);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_23 = V_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_24 = V_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_25, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		int32_t L_27;
		L_27 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_26, NULL);
		NullCheck(L_24);
		String_t* L_28;
		L_28 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_24, L_27, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		String_t* L_29 = L_28;
		V_2 = L_29;
		NullCheck(L_23);
		bool L_30;
		L_30 = List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D(L_23, L_29, List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var);
		// GameObject button = Instantiate(ButtonPrefab, new Vector3(n * 200 + 150, 500), new Quaternion(), canvas);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = __this->___ButtonPrefab_4;
		int32_t L_32 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_33), ((float)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_32, ((int32_t)200))), ((int32_t)150)))), (500.0f), /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_4), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = V_4;
		il2cpp_codegen_runtime_class_init_inline(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = ((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___canvas_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36;
		L_36 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181(L_31, L_33, L_34, L_35, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		V_3 = L_36;
		// button.transform.GetChild(0).GetComponent<TMP_Text>().text = s;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = V_3;
		NullCheck(L_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_37, NULL);
		NullCheck(L_38);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_38, 0, NULL);
		NullCheck(L_39);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_40;
		L_40 = Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5(L_39, Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		String_t* L_41 = V_2;
		NullCheck(L_40);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_40, L_41);
		// buttons.Add(button.GetComponent<Button>());
		List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444* L_42 = __this->___buttons_13;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = V_3;
		NullCheck(L_43);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_44;
		L_44 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_43, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		NullCheck(L_42);
		List_1_Add_m4F809219B2B92D16365B4B27F60BA2DD8F5A5650_inline(L_42, L_44, List_1_Add_m4F809219B2B92D16365B4B27F60BA2DD8F5A5650_RuntimeMethod_var);
		// n++;
		int32_t L_45 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_0120:
	{
		// while(answers.Count > 0)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_46 = V_0;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_46, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_47) > ((int32_t)0)))
		{
			goto IL_00a6;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CheckAnswer::Check(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAnswer_Check_m85438D4D99B5DC6FAD6BDD98ABA99FF1D8914797 (String_t* ___0_answer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_m3D517D98A1F79ED7FC2F00E753779492A06D652E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m575D8B76B20F4968870EFF8234C6FB15F0B65B57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m18FF09A5050B3040B7586482C0EA25CD43F1088D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m27A24332658AFBE50204FF512B9DC346C773FBF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mDECEA5FEDCE61794B52EBA15F4ECED64BAE19F95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m01D55CEDB27C278AA8BE176D48994C3F8FE27E89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t5335AC095F03CC8AE427E31013F4DDE02B8A8A05 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (Button button in canvas.GetComponent<CheckAnswer>().buttons)
		il2cpp_codegen_runtime_class_init_inline(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___canvas_5;
		NullCheck(L_0);
		CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4* L_1;
		L_1 = Component_GetComponent_TisCheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_m3D517D98A1F79ED7FC2F00E753779492A06D652E(L_0, Component_GetComponent_TisCheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_m3D517D98A1F79ED7FC2F00E753779492A06D652E_RuntimeMethod_var);
		NullCheck(L_1);
		List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444* L_2 = L_1->___buttons_13;
		NullCheck(L_2);
		Enumerator_t5335AC095F03CC8AE427E31013F4DDE02B8A8A05 L_3;
		L_3 = List_1_GetEnumerator_mDECEA5FEDCE61794B52EBA15F4ECED64BAE19F95(L_2, List_1_GetEnumerator_mDECEA5FEDCE61794B52EBA15F4ECED64BAE19F95_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m575D8B76B20F4968870EFF8234C6FB15F0B65B57((&V_0), Enumerator_Dispose_m575D8B76B20F4968870EFF8234C6FB15F0B65B57_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0024_1;
			}

IL_0017_1:
			{
				// foreach (Button button in canvas.GetComponent<CheckAnswer>().buttons)
				Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4;
				L_4 = Enumerator_get_Current_m27A24332658AFBE50204FF512B9DC346C773FBF1_inline((&V_0), Enumerator_get_Current_m27A24332658AFBE50204FF512B9DC346C773FBF1_RuntimeMethod_var);
				// button.interactable = false;
				NullCheck(L_4);
				Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_4, (bool)0, NULL);
			}

IL_0024_1:
			{
				// foreach (Button button in canvas.GetComponent<CheckAnswer>().buttons)
				bool L_5;
				L_5 = Enumerator_MoveNext_m18FF09A5050B3040B7586482C0EA25CD43F1088D((&V_0), Enumerator_MoveNext_m18FF09A5050B3040B7586482C0EA25CD43F1088D_RuntimeMethod_var);
				if (L_5)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_003d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		// if (current.answers[0] == answer)
		il2cpp_codegen_runtime_class_init_inline(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = (&((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___current_12)->___answers_1;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_6, 0, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		String_t* L_8 = ___0_answer;
		bool L_9;
		L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_009e;
		}
	}
	{
		// canvas.GetComponent<CheckAnswer>().win.SetActive(true);
		il2cpp_codegen_runtime_class_init_inline(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = ((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___canvas_5;
		NullCheck(L_10);
		CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4* L_11;
		L_11 = Component_GetComponent_TisCheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_m3D517D98A1F79ED7FC2F00E753779492A06D652E(L_10, Component_GetComponent_TisCheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_m3D517D98A1F79ED7FC2F00E753779492A06D652E_RuntimeMethod_var);
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = L_11->___win_6;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		// canvas.GetComponent<AudioSource>().clip = winClip;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = ((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___canvas_5;
		NullCheck(L_13);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_14;
		L_14 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(L_13, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_15 = ((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___winClip_8;
		NullCheck(L_14);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_14, L_15, NULL);
		// canvas.GetComponent<AudioSource>().Play();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = ((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___canvas_5;
		NullCheck(L_16);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_17;
		L_17 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(L_16, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		NullCheck(L_17);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_17, NULL);
		// quests.Remove(current);
		List_1_t3C6B76C8AA1B1D7FE23631F2D73478A9F1B2ED45* L_18 = ((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___quests_17;
		quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D L_19 = ((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___current_12;
		NullCheck(L_18);
		bool L_20;
		L_20 = List_1_Remove_m01D55CEDB27C278AA8BE176D48994C3F8FE27E89(L_18, L_19, List_1_Remove_m01D55CEDB27C278AA8BE176D48994C3F8FE27E89_RuntimeMethod_var);
		return;
	}

IL_009e:
	{
		// canvas.GetComponent<AudioSource>().clip = loseClip;
		il2cpp_codegen_runtime_class_init_inline(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = ((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___canvas_5;
		NullCheck(L_21);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_22;
		L_22 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(L_21, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_23 = ((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___loseClip_9;
		NullCheck(L_22);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_22, L_23, NULL);
		// canvas.GetComponent<AudioSource>().Play();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = ((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___canvas_5;
		NullCheck(L_24);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_25;
		L_25 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(L_24, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		NullCheck(L_25);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_25, NULL);
		// canvas.GetComponent<CheckAnswer>().lose.SetActive(true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = ((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___canvas_5;
		NullCheck(L_26);
		CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4* L_27;
		L_27 = Component_GetComponent_TisCheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_m3D517D98A1F79ED7FC2F00E753779492A06D652E(L_26, Component_GetComponent_TisCheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_m3D517D98A1F79ED7FC2F00E753779492A06D652E_RuntimeMethod_var);
		NullCheck(L_27);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = L_27->___lose_7;
		NullCheck(L_28);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_28, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void CheckAnswer::Continue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAnswer_Continue_mB3720E72AFA238F8B767D083E7D06EB6E36EC407 (CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_m3D517D98A1F79ED7FC2F00E753779492A06D652E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m575D8B76B20F4968870EFF8234C6FB15F0B65B57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m18FF09A5050B3040B7586482C0EA25CD43F1088D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m27A24332658AFBE50204FF512B9DC346C773FBF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mDECEA5FEDCE61794B52EBA15F4ECED64BAE19F95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t5335AC095F03CC8AE427E31013F4DDE02B8A8A05 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (Button button in buttons)
		List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444* L_0 = __this->___buttons_13;
		NullCheck(L_0);
		Enumerator_t5335AC095F03CC8AE427E31013F4DDE02B8A8A05 L_1;
		L_1 = List_1_GetEnumerator_mDECEA5FEDCE61794B52EBA15F4ECED64BAE19F95(L_0, List_1_GetEnumerator_mDECEA5FEDCE61794B52EBA15F4ECED64BAE19F95_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m575D8B76B20F4968870EFF8234C6FB15F0B65B57((&V_0), Enumerator_Dispose_m575D8B76B20F4968870EFF8234C6FB15F0B65B57_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001f_1;
			}

IL_000e_1:
			{
				// foreach (Button button in buttons)
				Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2;
				L_2 = Enumerator_get_Current_m27A24332658AFBE50204FF512B9DC346C773FBF1_inline((&V_0), Enumerator_get_Current_m27A24332658AFBE50204FF512B9DC346C773FBF1_RuntimeMethod_var);
				// Destroy(button.gameObject);
				NullCheck(L_2);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
				L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
			}

IL_001f_1:
			{
				// foreach (Button button in buttons)
				bool L_4;
				L_4 = Enumerator_MoveNext_m18FF09A5050B3040B7586482C0EA25CD43F1088D((&V_0), Enumerator_MoveNext_m18FF09A5050B3040B7586482C0EA25CD43F1088D_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0038;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0038:
	{
		// canvas.GetComponent<CheckAnswer>().win.SetActive(false);
		il2cpp_codegen_runtime_class_init_inline(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___canvas_5;
		NullCheck(L_5);
		CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4* L_6;
		L_6 = Component_GetComponent_TisCheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_m3D517D98A1F79ED7FC2F00E753779492A06D652E(L_5, Component_GetComponent_TisCheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_m3D517D98A1F79ED7FC2F00E753779492A06D652E_RuntimeMethod_var);
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6->___win_6;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// canvas.GetComponent<CheckAnswer>().lose.SetActive(false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = ((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___canvas_5;
		NullCheck(L_8);
		CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4* L_9;
		L_9 = Component_GetComponent_TisCheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_m3D517D98A1F79ED7FC2F00E753779492A06D652E(L_8, Component_GetComponent_TisCheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_m3D517D98A1F79ED7FC2F00E753779492A06D652E_RuntimeMethod_var);
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = L_9->___lose_7;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// SetQuestions();
		CheckAnswer_SetQuestions_mA6CADB08186FFF1917A3CDB18FA5CB7BE781E39C(__this, NULL);
		// }
		return;
	}
}
// System.Void CheckAnswer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAnswer__ctor_m6E5B6F9E59DA72C72CD9E2B24490E2D233A9FD26 (CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void CheckAnswer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAnswer__cctor_m2D733E35A663ED8831B32364E5EEEA771AB8AEF3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4D243BAC85E1068290E26684B3D93E4BB3BD1E78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3C6B76C8AA1B1D7FE23631F2D73478A9F1B2ED45_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral941BD40FC4B98A9087934E679453B51E56A0715D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string lsnKey = "lsn1";
		((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___lsnKey_14 = _stringLiteral941BD40FC4B98A9087934E679453B51E56A0715D;
		Il2CppCodeGenWriteBarrier((void**)(&((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___lsnKey_14), (void*)_stringLiteral941BD40FC4B98A9087934E679453B51E56A0715D);
		// public static List<quest> quests = new List<quest>();
		List_1_t3C6B76C8AA1B1D7FE23631F2D73478A9F1B2ED45* L_0 = (List_1_t3C6B76C8AA1B1D7FE23631F2D73478A9F1B2ED45*)il2cpp_codegen_object_new(List_1_t3C6B76C8AA1B1D7FE23631F2D73478A9F1B2ED45_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m4D243BAC85E1068290E26684B3D93E4BB3BD1E78(L_0, List_1__ctor_m4D243BAC85E1068290E26684B3D93E4BB3BD1E78_RuntimeMethod_var);
		((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___quests_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___quests_17), (void*)L_0);
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
// Conversion methods for marshalling of: CheckAnswer/quest
IL2CPP_EXTERN_C void quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D_marshal_pinvoke(const quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D& unmarshaled, quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D_marshaled_pinvoke& marshaled)
{
	Exception_t* ___answers_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'answers' of type 'quest'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___answers_1Exception, NULL);
}
IL2CPP_EXTERN_C void quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D_marshal_pinvoke_back(const quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D_marshaled_pinvoke& marshaled, quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D& unmarshaled)
{
	Exception_t* ___answers_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'answers' of type 'quest'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___answers_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: CheckAnswer/quest
IL2CPP_EXTERN_C void quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D_marshal_pinvoke_cleanup(quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: CheckAnswer/quest
IL2CPP_EXTERN_C void quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D_marshal_com(const quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D& unmarshaled, quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D_marshaled_com& marshaled)
{
	Exception_t* ___answers_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'answers' of type 'quest'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___answers_1Exception, NULL);
}
IL2CPP_EXTERN_C void quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D_marshal_com_back(const quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D_marshaled_com& marshaled, quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D& unmarshaled)
{
	Exception_t* ___answers_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'answers' of type 'quest'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___answers_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: CheckAnswer/quest
IL2CPP_EXTERN_C void quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D_marshal_com_cleanup(quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D_marshaled_com& marshaled)
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
// System.Void CheckAnswer/<GetQuests>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetQuestsU3Ed__19__ctor_mF872AF6DC91E5430CDB62FEE241EDD9E9715FB5E (U3CGetQuestsU3Ed__19_tE8675C8AE711A959B4CCC9BD1CB2ADCC849E8834* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void CheckAnswer/<GetQuests>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetQuestsU3Ed__19_System_IDisposable_Dispose_m6F02F75F529D988F2E0305ED5D52AC078012B9DE (U3CGetQuestsU3Ed__19_tE8675C8AE711A959B4CCC9BD1CB2ADCC849E8834* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean CheckAnswer/<GetQuests>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetQuestsU3Ed__19_MoveNext_m16DCAC5C1E6F31ECB5EB02E8EDD2BC451DD981A9 (U3CGetQuestsU3Ed__19_tE8675C8AE711A959B4CCC9BD1CB2ADCC849E8834* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseController_tFAF0A895515920AE41D21D9736E00FEAE8B7DBD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m391D4851BA7E7617CFB6B876ABB6687D2248830B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4D243BAC85E1068290E26684B3D93E4BB3BD1E78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3C6B76C8AA1B1D7FE23631F2D73478A9F1B2ED45_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5D380D7472DF62C3B0C30B37F7A25C76F3441D5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4* V_1 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_2 = NULL;
	ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_5 = NULL;
	quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0037;
	}

IL_0020:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0030:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0037:
	{
		// while (FirebaseController.FbStatus != FirebaseStatus.Connected)
		int32_t L_4 = ((FirebaseController_tFAF0A895515920AE41D21D9736E00FEAE8B7DBD3_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseController_tFAF0A895515920AE41D21D9736E00FEAE8B7DBD3_il2cpp_TypeInfo_var))->___FbStatus_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0020;
		}
	}
	{
		// lsn = FirebaseRemoteConfig.DefaultInstance.GetValue(lsnKey).StringValue;
		CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4* L_5 = V_1;
		il2cpp_codegen_runtime_class_init_inline(FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var);
		FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* L_6;
		L_6 = FirebaseRemoteConfig_get_DefaultInstance_mE7F726BCB1E35F348E25ABB83ACDAFA1A4AD495C(NULL);
		il2cpp_codegen_runtime_class_init_inline(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var);
		String_t* L_7 = ((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___lsnKey_14;
		NullCheck(L_6);
		ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857 L_8;
		L_8 = FirebaseRemoteConfig_GetValue_m3FDC4B8924F68E22E5D7478AA0C6D70221D7E974(L_6, L_7, NULL);
		V_3 = L_8;
		String_t* L_9;
		L_9 = ConfigValue_get_StringValue_m5275157ED4BBF3D471E8F39EB79A7BAD782AC047((&V_3), NULL);
		NullCheck(L_5);
		L_5->___lsn_16 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___lsn_16), (void*)L_9);
		// List<string> x = new List<string>(lsn.Split('\n'));
		CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4* L_10 = V_1;
		NullCheck(L_10);
		String_t* L_11 = L_10->___lsn_16;
		NullCheck(L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12;
		L_12 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_11, ((int32_t)10), 0, NULL);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_13 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC(L_13, (RuntimeObject*)L_12, List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
		V_2 = L_13;
		// quests = new List<quest>();
		List_1_t3C6B76C8AA1B1D7FE23631F2D73478A9F1B2ED45* L_14 = (List_1_t3C6B76C8AA1B1D7FE23631F2D73478A9F1B2ED45*)il2cpp_codegen_object_new(List_1_t3C6B76C8AA1B1D7FE23631F2D73478A9F1B2ED45_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		List_1__ctor_m4D243BAC85E1068290E26684B3D93E4BB3BD1E78(L_14, List_1__ctor_m4D243BAC85E1068290E26684B3D93E4BB3BD1E78_RuntimeMethod_var);
		((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___quests_17 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___quests_17), (void*)L_14);
		// for (int i = 0; i < x.Count; i++)
		V_4 = 0;
		goto IL_00ce;
	}

IL_007f:
	{
		// string[] y = x[i].Split(':');
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_15 = V_2;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		String_t* L_17;
		L_17 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_15, L_16, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		NullCheck(L_17);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18;
		L_18 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_17, ((int32_t)58), 0, NULL);
		V_5 = L_18;
		// quests.Add(new quest() { question = y[0], answers = new List<string>(y[1].Split(';')) });
		il2cpp_codegen_runtime_class_init_inline(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var);
		List_1_t3C6B76C8AA1B1D7FE23631F2D73478A9F1B2ED45* L_19 = ((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___quests_17;
		il2cpp_codegen_initobj((&V_6), sizeof(quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = V_5;
		NullCheck(L_20);
		int32_t L_21 = 0;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		(&V_6)->___question_0 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_6)->___question_0), (void*)L_22);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = V_5;
		NullCheck(L_23);
		int32_t L_24 = 1;
		String_t* L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26;
		L_26 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_25, ((int32_t)59), 0, NULL);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_27 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC(L_27, (RuntimeObject*)L_26, List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
		(&V_6)->___answers_1 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_6)->___answers_1), (void*)L_27);
		quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D L_28 = V_6;
		NullCheck(L_19);
		List_1_Add_m391D4851BA7E7617CFB6B876ABB6687D2248830B_inline(L_19, L_28, List_1_Add_m391D4851BA7E7617CFB6B876ABB6687D2248830B_RuntimeMethod_var);
		// for (int i = 0; i < x.Count; i++)
		int32_t L_29 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_00ce:
	{
		// for (int i = 0; i < x.Count; i++)
		int32_t L_30 = V_4;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_31 = V_2;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_31, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_007f;
		}
	}
	{
		// canvas.Find("Loading").gameObject.SetActive(false);
		il2cpp_codegen_runtime_class_init_inline(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33 = ((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___canvas_5;
		NullCheck(L_33);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_33, _stringLiteralC5D380D7472DF62C3B0C30B37F7A25C76F3441D5, NULL);
		NullCheck(L_34);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35;
		L_35 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_34, NULL);
		NullCheck(L_35);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_35, (bool)0, NULL);
		// canvas.Find("Game").gameObject.SetActive(true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = ((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___canvas_5;
		NullCheck(L_36);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_36, _stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306, NULL);
		NullCheck(L_37);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38;
		L_38 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_37, NULL);
		NullCheck(L_38);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_38, (bool)1, NULL);
		// SetQuestions();
		CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4* L_39 = V_1;
		NullCheck(L_39);
		CheckAnswer_SetQuestions_mA6CADB08186FFF1917A3CDB18FA5CB7BE781E39C(L_39, NULL);
		// }
		return (bool)0;
	}
}
// System.Object CheckAnswer/<GetQuests>d__19::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetQuestsU3Ed__19_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5FA42E601C14DCD4F594A1DF6F43C90C71117110 (U3CGetQuestsU3Ed__19_tE8675C8AE711A959B4CCC9BD1CB2ADCC849E8834* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void CheckAnswer/<GetQuests>d__19::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetQuestsU3Ed__19_System_Collections_IEnumerator_Reset_m9604F9D194FB1E83ECF1A0D4F6D3A7D91D679E32 (U3CGetQuestsU3Ed__19_tE8675C8AE711A959B4CCC9BD1CB2ADCC849E8834* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetQuestsU3Ed__19_System_Collections_IEnumerator_Reset_m9604F9D194FB1E83ECF1A0D4F6D3A7D91D679E32_RuntimeMethod_var)));
	}
}
// System.Object CheckAnswer/<GetQuests>d__19::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetQuestsU3Ed__19_System_Collections_IEnumerator_get_Current_mFA08600B1B4C2FAE46929C2740A7ADDED80BD773 (U3CGetQuestsU3Ed__19_tE8675C8AE711A959B4CCC9BD1CB2ADCC849E8834* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void FirebaseController::SendRequest(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseController_SendRequest_m08C43F3771A038B08CCFD61F90F5B4A10BF709C1 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_keys, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t72552EB3CFD9D41493135164276F7EE71F1132FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseController_tFAF0A895515920AE41D21D9736E00FEAE8B7DBD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ContinueWith_mAB52D6D57000543C9DD78F0D45BD7B66F819A0DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CSendRequestU3Eb__0_m2BBFC09726C8615A532A088CDA041EE819C230A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_t9E04F5E73F46ADE4BB0F1AE39A6D0C9E46722FF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52B74F65D008FEFCAE3744DA354F20AA7F9EDF6E);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_0_t9E04F5E73F46ADE4BB0F1AE39A6D0C9E46722FF2* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	{
		U3CU3Ec__DisplayClass1_0_t9E04F5E73F46ADE4BB0F1AE39A6D0C9E46722FF2* L_0 = (U3CU3Ec__DisplayClass1_0_t9E04F5E73F46ADE4BB0F1AE39A6D0C9E46722FF2*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_t9E04F5E73F46ADE4BB0F1AE39A6D0C9E46722FF2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass1_0__ctor_m14600CFBC8496997268F7B7A44AE2E7DDCD764A0(L_0, NULL);
		V_0 = L_0;
		// FbStatus = FirebaseStatus.Waiting;
		((FirebaseController_tFAF0A895515920AE41D21D9736E00FEAE8B7DBD3_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseController_tFAF0A895515920AE41D21D9736E00FEAE8B7DBD3_il2cpp_TypeInfo_var))->___FbStatus_0 = 0;
		// Debug.Log("Requested " + keys[0]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___0_keys;
		NullCheck(L_1);
		int32_t L_2 = 0;
		String_t* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral52B74F65D008FEFCAE3744DA354F20AA7F9EDF6E, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
		// Dictionary<string, object> defaults = new Dictionary<string, object>();
		U3CU3Ec__DisplayClass1_0_t9E04F5E73F46ADE4BB0F1AE39A6D0C9E46722FF2* L_5 = V_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_6 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_6, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		NullCheck(L_5);
		L_5->___defaults_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___defaults_0), (void*)L_6);
		// foreach (string key in keys)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = ___0_keys;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0048;
	}

IL_002f:
	{
		// foreach (string key in keys)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		String_t* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		// defaults.Add(key, new object());
		U3CU3Ec__DisplayClass1_0_t9E04F5E73F46ADE4BB0F1AE39A6D0C9E46722FF2* L_12 = V_0;
		NullCheck(L_12);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_13 = L_12->___defaults_0;
		String_t* L_14 = V_3;
		RuntimeObject* L_15 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_15, NULL);
		NullCheck(L_13);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_13, L_14, L_15, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0048:
	{
		// foreach (string key in keys)
		int32_t L_17 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = V_1;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_002f;
		}
	}
	{
		// FirebaseApp.CheckAndFixDependenciesAsync().ContinueWith(task =>
		// {
		//     var dependencyStatus = task.Result;
		//     if (dependencyStatus == Firebase.DependencyStatus.Available)
		//     {
		//         try
		//         {
		//             Firebase.RemoteConfig.FirebaseRemoteConfig.DefaultInstance.SetDefaultsAsync(defaults)
		//               .ContinueWithOnMainThread(task =>
		//               {
		//                   FetchDataAsync();
		//               });
		//         }
		//         catch (Exception e)
		//         {
		//             Debug.LogError(e.Message);
		//         }
		//     }
		//     else
		//     {
		//         Debug.LogError(System.String.Format(
		//           "Could not resolve all Firebase dependencies: {0}", dependencyStatus));
		//     }
		// });
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* L_19;
		L_19 = FirebaseApp_CheckAndFixDependenciesAsync_mB21D0BA4D3C2F6C975D72DB0F2CEFF46A4361557(NULL);
		U3CU3Ec__DisplayClass1_0_t9E04F5E73F46ADE4BB0F1AE39A6D0C9E46722FF2* L_20 = V_0;
		Action_1_t72552EB3CFD9D41493135164276F7EE71F1132FC* L_21 = (Action_1_t72552EB3CFD9D41493135164276F7EE71F1132FC*)il2cpp_codegen_object_new(Action_1_t72552EB3CFD9D41493135164276F7EE71F1132FC_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		Action_1__ctor_m4F6B8318AD92B94ABD9C753FFD7CEE0687417DAC(L_21, L_20, (intptr_t)((void*)U3CU3Ec__DisplayClass1_0_U3CSendRequestU3Eb__0_m2BBFC09726C8615A532A088CDA041EE819C230A3_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_22;
		L_22 = Task_1_ContinueWith_mAB52D6D57000543C9DD78F0D45BD7B66F819A0DD(L_19, L_21, Task_1_ContinueWith_mAB52D6D57000543C9DD78F0D45BD7B66F819A0DD_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Threading.Tasks.Task FirebaseController::FetchDataAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* FirebaseController_FetchDataAsync_m7A9312A6B48FCD044CCEDC9D1991B524EEE2CCC7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseController_FetchComplete_m02E28419F0D60FD338FBA8987861F0017A5C7189_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// System.Threading.Tasks.Task fetchTask =
		// Firebase.RemoteConfig.FirebaseRemoteConfig.DefaultInstance.FetchAsync(
		//     TimeSpan.Zero);
		il2cpp_codegen_runtime_class_init_inline(FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var);
		FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* L_0;
		L_0 = FirebaseRemoteConfig_get_DefaultInstance_mE7F726BCB1E35F348E25ABB83ACDAFA1A4AD495C(NULL);
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1 = ((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var))->___Zero_19;
		NullCheck(L_0);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2;
		L_2 = FirebaseRemoteConfig_FetchAsync_m2060F6CF9DA839E51C489AD8285EF7C737F48CB4(L_0, L_1, NULL);
		// return fetchTask.ContinueWithOnMainThread(FetchComplete);
		Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* L_3 = (Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A*)il2cpp_codegen_object_new(Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mC25101220D4DFE3C39E1A327AD5B6F29A69776B0(L_3, NULL, (intptr_t)((void*)FirebaseController_FetchComplete_m02E28419F0D60FD338FBA8987861F0017A5C7189_RuntimeMethod_var), NULL);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = TaskExtension_ContinueWithOnMainThread_m6BDD5EFACC9A21E8AA0A27D6C6BCCA15C000566C(L_2, L_3, NULL);
		return L_4;
	}
}
// System.Void FirebaseController::FetchComplete(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseController_FetchComplete_m02E28419F0D60FD338FBA8987861F0017A5C7189 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_fetchTask, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t12D515BBBDB69A29DC0C4812555D0A8A51D6B856_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseController_tFAF0A895515920AE41D21D9736E00FEAE8B7DBD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskExtension_ContinueWithOnMainThread_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9EFE53110BF57BDA0A8D55A9B5C280C5BC03E957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CFetchCompleteU3Eb__3_0_m5E8B70D78FD6E53BBFFBEADABCE82A8142D78260_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4467D589A032923A5261C3228D1F2A8D9D8D8AB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Action_1_t12D515BBBDB69A29DC0C4812555D0A8A51D6B856* G_B10_0 = NULL;
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* G_B10_1 = NULL;
	Action_1_t12D515BBBDB69A29DC0C4812555D0A8A51D6B856* G_B9_0 = NULL;
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* G_B9_1 = NULL;
	{
		// if (fetchTask.IsCanceled)
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = ___0_fetchTask;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsCanceled_m96A8D3F85158A9CB3AEA50A00A55BE4E0F0E21FA(L_0, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// FbStatus = FirebaseStatus.Failed;
		((FirebaseController_tFAF0A895515920AE41D21D9736E00FEAE8B7DBD3_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseController_tFAF0A895515920AE41D21D9736E00FEAE8B7DBD3_il2cpp_TypeInfo_var))->___FbStatus_0 = 2;
		goto IL_002e;
	}

IL_0010:
	{
		// else if (fetchTask.IsFaulted)
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2 = ___0_fetchTask;
		NullCheck(L_2);
		bool L_3;
		L_3 = Task_get_IsFaulted_mC0AD3EA4EAF3B47C1F5FE9624541F0A00B9426D9(L_2, NULL);
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		// FbStatus = FirebaseStatus.Failed;
		((FirebaseController_tFAF0A895515920AE41D21D9736E00FEAE8B7DBD3_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseController_tFAF0A895515920AE41D21D9736E00FEAE8B7DBD3_il2cpp_TypeInfo_var))->___FbStatus_0 = 2;
		goto IL_002e;
	}

IL_0020:
	{
		// else if (fetchTask.IsCompleted)
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4 = ___0_fetchTask;
		NullCheck(L_4);
		bool L_5;
		L_5 = Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831(L_4, NULL);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		// FbStatus = FirebaseStatus.Connected;
		((FirebaseController_tFAF0A895515920AE41D21D9736E00FEAE8B7DBD3_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseController_tFAF0A895515920AE41D21D9736E00FEAE8B7DBD3_il2cpp_TypeInfo_var))->___FbStatus_0 = 1;
	}

IL_002e:
	{
		// var info = Firebase.RemoteConfig.FirebaseRemoteConfig.DefaultInstance.Info;
		il2cpp_codegen_runtime_class_init_inline(FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var);
		FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* L_6;
		L_6 = FirebaseRemoteConfig_get_DefaultInstance_mE7F726BCB1E35F348E25ABB83ACDAFA1A4AD495C(NULL);
		NullCheck(L_6);
		ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39* L_7;
		L_7 = FirebaseRemoteConfig_get_Info_m54BE3021C99F11C94F78078DA718C2DF4DDA9AC0(L_6, NULL);
		V_0 = L_7;
		// switch (info.LastFetchStatus)
		ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = ConfigInfo_get_LastFetchStatus_mA856815199E2A66B688DEFF65792763DA3AD051A(L_8, NULL);
		V_1 = L_9;
		int32_t L_10 = V_1;
		switch (L_10)
		{
			case 0:
			{
				goto IL_0053;
			}
			case 1:
			{
				goto IL_0083;
			}
			case 2:
			{
				goto IL_0092;
			}
		}
	}
	{
		return;
	}

IL_0053:
	{
		// Firebase.RemoteConfig.FirebaseRemoteConfig.DefaultInstance.ActivateAsync()
		// .ContinueWithOnMainThread(task => {
		//     Debug.Log("Succes!");
		//     //DebugLog(String.Format("Remote data loaded and ready (last fetch time {0}).",
		//     //               info.FetchTime));
		// });
		il2cpp_codegen_runtime_class_init_inline(FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var);
		FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* L_11;
		L_11 = FirebaseRemoteConfig_get_DefaultInstance_mE7F726BCB1E35F348E25ABB83ACDAFA1A4AD495C(NULL);
		NullCheck(L_11);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_12;
		L_12 = FirebaseRemoteConfig_ActivateAsync_m4259BC44EA9439B3BE4E27135121314FC61D5FDB(L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4467D589A032923A5261C3228D1F2A8D9D8D8AB9_il2cpp_TypeInfo_var);
		Action_1_t12D515BBBDB69A29DC0C4812555D0A8A51D6B856* L_13 = ((U3CU3Ec_t4467D589A032923A5261C3228D1F2A8D9D8D8AB9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4467D589A032923A5261C3228D1F2A8D9D8D8AB9_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_2;
		Action_1_t12D515BBBDB69A29DC0C4812555D0A8A51D6B856* L_14 = L_13;
		G_B9_0 = L_14;
		G_B9_1 = L_12;
		if (L_14)
		{
			G_B10_0 = L_14;
			G_B10_1 = L_12;
			goto IL_007c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4467D589A032923A5261C3228D1F2A8D9D8D8AB9_il2cpp_TypeInfo_var);
		U3CU3Ec_t4467D589A032923A5261C3228D1F2A8D9D8D8AB9* L_15 = ((U3CU3Ec_t4467D589A032923A5261C3228D1F2A8D9D8D8AB9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4467D589A032923A5261C3228D1F2A8D9D8D8AB9_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t12D515BBBDB69A29DC0C4812555D0A8A51D6B856* L_16 = (Action_1_t12D515BBBDB69A29DC0C4812555D0A8A51D6B856*)il2cpp_codegen_object_new(Action_1_t12D515BBBDB69A29DC0C4812555D0A8A51D6B856_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Action_1__ctor_m8DB17142BC5CB34C561C3A08FF3390CC83C7D94F(L_16, L_15, (intptr_t)((void*)U3CU3Ec_U3CFetchCompleteU3Eb__3_0_m5E8B70D78FD6E53BBFFBEADABCE82A8142D78260_RuntimeMethod_var), NULL);
		Action_1_t12D515BBBDB69A29DC0C4812555D0A8A51D6B856* L_17 = L_16;
		((U3CU3Ec_t4467D589A032923A5261C3228D1F2A8D9D8D8AB9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4467D589A032923A5261C3228D1F2A8D9D8D8AB9_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_2 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4467D589A032923A5261C3228D1F2A8D9D8D8AB9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4467D589A032923A5261C3228D1F2A8D9D8D8AB9_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_2), (void*)L_17);
		G_B10_0 = L_17;
		G_B10_1 = G_B9_1;
	}

IL_007c:
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_18;
		L_18 = TaskExtension_ContinueWithOnMainThread_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9EFE53110BF57BDA0A8D55A9B5C280C5BC03E957(G_B10_1, G_B10_0, TaskExtension_ContinueWithOnMainThread_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9EFE53110BF57BDA0A8D55A9B5C280C5BC03E957_RuntimeMethod_var);
		// break;
		return;
	}

IL_0083:
	{
		// switch (info.LastFetchFailureReason)
		ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = ConfigInfo_get_LastFetchFailureReason_m8837A463492D13F1CB5DFF86F66D6F022CA91DBC(L_19, NULL);
		V_2 = L_20;
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)1)))
		{
			goto IL_0092;
		}
	}
	{
		int32_t L_22 = V_2;
	}

IL_0092:
	{
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
// System.Void FirebaseController/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m14600CFBC8496997268F7B7A44AE2E7DDCD764A0 (U3CU3Ec__DisplayClass1_0_t9E04F5E73F46ADE4BB0F1AE39A6D0C9E46722FF2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void FirebaseController/<>c__DisplayClass1_0::<SendRequest>b__0(System.Threading.Tasks.Task`1<Firebase.DependencyStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3CSendRequestU3Eb__0_m2BBFC09726C8615A532A088CDA041EE819C230A3 (U3CU3Ec__DisplayClass1_0_t9E04F5E73F46ADE4BB0F1AE39A6D0C9E46722FF2* __this, Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* ___0_task, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DependencyStatus_t9DA2DB2B2AC17E9DA549331B93778091496D8195_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m543F02EC56EEA4AAED7101434F488D890414A3DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSendRequestU3Eb__1_1_mB18A230102EA68E32B5DF72AFD132B383C0988EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4467D589A032923A5261C3228D1F2A8D9D8D8AB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral674EF683D8B400F1F0F590BCCA13A350C3C1A25F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* G_B3_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* G_B3_1 = NULL;
	Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* G_B2_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* G_B2_1 = NULL;
	{
		// var dependencyStatus = task.Result;
		Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* L_0 = ___0_task;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Task_1_get_Result_m543F02EC56EEA4AAED7101434F488D890414A3DA(L_0, Task_1_get_Result_m543F02EC56EEA4AAED7101434F488D890414A3DA_RuntimeMethod_var);
		V_0 = L_1;
		// if (dependencyStatus == Firebase.DependencyStatus.Available)
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_004d;
		}
	}
	try
	{// begin try (depth: 1)
		{
			// Firebase.RemoteConfig.FirebaseRemoteConfig.DefaultInstance.SetDefaultsAsync(defaults)
			//   .ContinueWithOnMainThread(task =>
			//   {
			//       FetchDataAsync();
			//   });
			il2cpp_codegen_runtime_class_init_inline(FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var);
			FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* L_3;
			L_3 = FirebaseRemoteConfig_get_DefaultInstance_mE7F726BCB1E35F348E25ABB83ACDAFA1A4AD495C(NULL);
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_4 = __this->___defaults_0;
			NullCheck(L_3);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
			L_5 = FirebaseRemoteConfig_SetDefaultsAsync_mD2E78DAD34846827B38B22038811509155EBAF3F(L_3, L_4, NULL);
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4467D589A032923A5261C3228D1F2A8D9D8D8AB9_il2cpp_TypeInfo_var);
			Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* L_6 = ((U3CU3Ec_t4467D589A032923A5261C3228D1F2A8D9D8D8AB9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4467D589A032923A5261C3228D1F2A8D9D8D8AB9_il2cpp_TypeInfo_var))->___U3CU3E9__1_1_1;
			Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* L_7 = L_6;
			G_B2_0 = L_7;
			G_B2_1 = L_5;
			if (L_7)
			{
				G_B3_0 = L_7;
				G_B3_1 = L_5;
				goto IL_0039_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4467D589A032923A5261C3228D1F2A8D9D8D8AB9_il2cpp_TypeInfo_var);
			U3CU3Ec_t4467D589A032923A5261C3228D1F2A8D9D8D8AB9* L_8 = ((U3CU3Ec_t4467D589A032923A5261C3228D1F2A8D9D8D8AB9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4467D589A032923A5261C3228D1F2A8D9D8D8AB9_il2cpp_TypeInfo_var))->___U3CU3E9_0;
			Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* L_9 = (Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A*)il2cpp_codegen_object_new(Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A_il2cpp_TypeInfo_var);
			NullCheck(L_9);
			Action_1__ctor_mC25101220D4DFE3C39E1A327AD5B6F29A69776B0(L_9, L_8, (intptr_t)((void*)U3CU3Ec_U3CSendRequestU3Eb__1_1_mB18A230102EA68E32B5DF72AFD132B383C0988EA_RuntimeMethod_var), NULL);
			Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* L_10 = L_9;
			((U3CU3Ec_t4467D589A032923A5261C3228D1F2A8D9D8D8AB9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4467D589A032923A5261C3228D1F2A8D9D8D8AB9_il2cpp_TypeInfo_var))->___U3CU3E9__1_1_1 = L_10;
			Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4467D589A032923A5261C3228D1F2A8D9D8D8AB9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4467D589A032923A5261C3228D1F2A8D9D8D8AB9_il2cpp_TypeInfo_var))->___U3CU3E9__1_1_1), (void*)L_10);
			G_B3_0 = L_10;
			G_B3_1 = G_B2_1;
		}

IL_0039_1:
		{
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_11;
			L_11 = TaskExtension_ContinueWithOnMainThread_m6BDD5EFACC9A21E8AA0A27D6C6BCCA15C000566C(G_B3_1, G_B3_0, NULL);
			// }
			goto IL_0062;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0041;
		}
		throw e;
	}

CATCH_0041:
	{// begin catch(System.Exception)
		// Debug.LogError(e.Message);
		NullCheck(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_12, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0062;
	}// end catch (depth: 1)

IL_004d:
	{
		// Debug.LogError(System.String.Format(
		//   "Could not resolve all Firebase dependencies: {0}", dependencyStatus));
		int32_t L_13 = V_0;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(DependencyStatus_t9DA2DB2B2AC17E9DA549331B93778091496D8195_il2cpp_TypeInfo_var, &L_14);
		String_t* L_16;
		L_16 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral674EF683D8B400F1F0F590BCCA13A350C3C1A25F, L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_16, NULL);
	}

IL_0062:
	{
		// });
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
// System.Void FirebaseController/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m2039B85F9285E6341F40FFD041F9906E69F87210 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4467D589A032923A5261C3228D1F2A8D9D8D8AB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4467D589A032923A5261C3228D1F2A8D9D8D8AB9* L_0 = (U3CU3Ec_t4467D589A032923A5261C3228D1F2A8D9D8D8AB9*)il2cpp_codegen_object_new(U3CU3Ec_t4467D589A032923A5261C3228D1F2A8D9D8D8AB9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mABF9067E29B884C619D1C543BC0BA2A4B96625B0(L_0, NULL);
		((U3CU3Ec_t4467D589A032923A5261C3228D1F2A8D9D8D8AB9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4467D589A032923A5261C3228D1F2A8D9D8D8AB9_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4467D589A032923A5261C3228D1F2A8D9D8D8AB9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4467D589A032923A5261C3228D1F2A8D9D8D8AB9_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void FirebaseController/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mABF9067E29B884C619D1C543BC0BA2A4B96625B0 (U3CU3Ec_t4467D589A032923A5261C3228D1F2A8D9D8D8AB9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void FirebaseController/<>c::<SendRequest>b__1_1(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CSendRequestU3Eb__1_1_mB18A230102EA68E32B5DF72AFD132B383C0988EA (U3CU3Ec_t4467D589A032923A5261C3228D1F2A8D9D8D8AB9* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_task, const RuntimeMethod* method) 
{
	{
		// FetchDataAsync();
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0;
		L_0 = FirebaseController_FetchDataAsync_m7A9312A6B48FCD044CCEDC9D1991B524EEE2CCC7(NULL);
		// });
		return;
	}
}
// System.Void FirebaseController/<>c::<FetchComplete>b__3_0(System.Threading.Tasks.Task`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CFetchCompleteU3Eb__3_0_m5E8B70D78FD6E53BBFFBEADABCE82A8142D78260 (U3CU3Ec_t4467D589A032923A5261C3228D1F2A8D9D8D8AB9* __this, Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___0_task, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35670CC2F09BA00C212F64B16378DFC291F1C2E6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Succes!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral35670CC2F09BA00C212F64B16378DFC291F1C2E6, NULL);
		// });
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
// System.Void FirstStartMain::Menu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstStartMain_Menu_mC063679948AD2283C8A34D9F3AF535F21D548A6C (FirstStartMain_tB03E6F142C198052431054FCB2E7C0503166FD19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Menu");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A, NULL);
		// }
		return;
	}
}
// System.Void FirstStartMain::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstStartMain_Start_m758D723418B76CA9A41458D856E4D612F319A763 (FirstStartMain_tB03E6F142C198052431054FCB2E7C0503166FD19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3E0BC991DA54A4EBC858D968493D0CB4D55810B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// loc = PlayerPrefs.GetInt("Locale", -1);
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D(_stringLiteralE3E0BC991DA54A4EBC858D968493D0CB4D55810B, (-1), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0022;
		}
	}
	{
		// RU.onClick.Invoke();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___RU_5;
		NullCheck(L_2);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_3;
		L_3 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_2, NULL);
		NullCheck(L_3);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_3, NULL);
		// break;
		goto IL_0032;
	}

IL_0022:
	{
		// ENG.onClick.Invoke();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___ENG_4;
		NullCheck(L_4);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_5;
		L_5 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_4, NULL);
		NullCheck(L_5);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_5, NULL);
	}

IL_0032:
	{
		// StartCoroutine(LocaleWaiter(loc != -1));
		int32_t L_6 = V_0;
		RuntimeObject* L_7;
		L_7 = FirstStartMain_LocaleWaiter_m8D7BE80608F38E1AFE00E6FA5A603419696FE619(__this, (bool)((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_8;
		L_8 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_7, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator FirstStartMain::LocaleWaiter(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FirstStartMain_LocaleWaiter_m8D7BE80608F38E1AFE00E6FA5A603419696FE619 (FirstStartMain_tB03E6F142C198052431054FCB2E7C0503166FD19* __this, bool ___0_loc, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLocaleWaiterU3Ed__4_t6276C5C3CF145CCDB4C72741A75AEE47A6CFFA2B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLocaleWaiterU3Ed__4_t6276C5C3CF145CCDB4C72741A75AEE47A6CFFA2B* L_0 = (U3CLocaleWaiterU3Ed__4_t6276C5C3CF145CCDB4C72741A75AEE47A6CFFA2B*)il2cpp_codegen_object_new(U3CLocaleWaiterU3Ed__4_t6276C5C3CF145CCDB4C72741A75AEE47A6CFFA2B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLocaleWaiterU3Ed__4__ctor_m0953F2DFE2C716752FF72AFBD73BD848F608EB29(L_0, 0, NULL);
		U3CLocaleWaiterU3Ed__4_t6276C5C3CF145CCDB4C72741A75AEE47A6CFFA2B* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CLocaleWaiterU3Ed__4_t6276C5C3CF145CCDB4C72741A75AEE47A6CFFA2B* L_2 = L_1;
		bool L_3 = ___0_loc;
		NullCheck(L_2);
		L_2->___loc_2 = L_3;
		return L_2;
	}
}
// System.Void FirstStartMain::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstStartMain__ctor_m5A98F44F9993654C3D555092E69EDC781A0250F8 (FirstStartMain_tB03E6F142C198052431054FCB2E7C0503166FD19* __this, const RuntimeMethod* method) 
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
// System.Void FirstStartMain/<LocaleWaiter>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLocaleWaiterU3Ed__4__ctor_m0953F2DFE2C716752FF72AFBD73BD848F608EB29 (U3CLocaleWaiterU3Ed__4_t6276C5C3CF145CCDB4C72741A75AEE47A6CFFA2B* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void FirstStartMain/<LocaleWaiter>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLocaleWaiterU3Ed__4_System_IDisposable_Dispose_m3FC39F936FBD2C7F5AF297F8519B50E7F9890302 (U3CLocaleWaiterU3Ed__4_t6276C5C3CF145CCDB4C72741A75AEE47A6CFFA2B* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean FirstStartMain/<LocaleWaiter>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLocaleWaiterU3Ed__4_MoveNext_mC69FD68867E50D63A36EA2080265E70AD413260D (U3CLocaleWaiterU3Ed__4_t6276C5C3CF145CCDB4C72741A75AEE47A6CFFA2B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B805E85BA5CA9EF7718945308872F9D0EE02CED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50273888C7E98389B894559E62317ED9A83C9EB5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FirstStartMain_tB03E6F142C198052431054FCB2E7C0503166FD19* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		FirstStartMain_tB03E6F142C198052431054FCB2E7C0503166FD19* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0037;
	}

IL_0020:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0030:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0037:
	{
		// while (LocalizationManager.working)
		bool L_4;
		L_4 = LocalizationManager_get_working_mC3BAD06E06EF5943C1D382F799109C5D524D37FF_inline(NULL);
		if (L_4)
		{
			goto IL_0020;
		}
	}
	{
		// if (loc)
		bool L_5 = __this->___loc_2;
		if (!L_5)
		{
			goto IL_004e;
		}
	}
	{
		// Menu();
		FirstStartMain_tB03E6F142C198052431054FCB2E7C0503166FD19* L_6 = V_1;
		NullCheck(L_6);
		FirstStartMain_Menu_mC063679948AD2283C8A34D9F3AF535F21D548A6C(L_6, NULL);
		goto IL_0084;
	}

IL_004e:
	{
		// transform.Find("LangChose").gameObject.SetActive(true);
		FirstStartMain_tB03E6F142C198052431054FCB2E7C0503166FD19* L_7 = V_1;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_8, _stringLiteral50273888C7E98389B894559E62317ED9A83C9EB5, NULL);
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
		// transform.Find("Logo").gameObject.SetActive(false);
		FirstStartMain_tB03E6F142C198052431054FCB2E7C0503166FD19* L_11 = V_1;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_12, _stringLiteral4B805E85BA5CA9EF7718945308872F9D0EE02CED, NULL);
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)0, NULL);
	}

IL_0084:
	{
		// }
		return (bool)0;
	}
}
// System.Object FirstStartMain/<LocaleWaiter>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLocaleWaiterU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m599F45F5ED7CDA946E2BC0E2BF7C40B18B5B9CB2 (U3CLocaleWaiterU3Ed__4_t6276C5C3CF145CCDB4C72741A75AEE47A6CFFA2B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void FirstStartMain/<LocaleWaiter>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLocaleWaiterU3Ed__4_System_Collections_IEnumerator_Reset_m922876C45EDE6F770A38F908A9D858EB56D3AB32 (U3CLocaleWaiterU3Ed__4_t6276C5C3CF145CCDB4C72741A75AEE47A6CFFA2B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLocaleWaiterU3Ed__4_System_Collections_IEnumerator_Reset_m922876C45EDE6F770A38F908A9D858EB56D3AB32_RuntimeMethod_var)));
	}
}
// System.Object FirstStartMain/<LocaleWaiter>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLocaleWaiterU3Ed__4_System_Collections_IEnumerator_get_Current_mB7B5DF49A28291F0C2B3123334A0E44E4C13F614 (U3CLocaleWaiterU3Ed__4_t6276C5C3CF145CCDB4C72741A75AEE47A6CFFA2B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void LessonSetup::GoToLesson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LessonSetup_GoToLesson_m6606686878E4DCD3D94BB919B39E1DC4C52D09B8 (LessonSetup_t82FC2988828A3FBAD73F9FFC966ECD0D32BB3677* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82530C4F208A51DFA97679728CBE5CEA8B45CAB7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckAnswer.lsnKey = "lsn" + number + LocalizationManager.CurrentLocaleCode;
		uint8_t* L_0 = (&__this->___number_4);
		String_t* L_1;
		L_1 = Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4(L_0, NULL);
		String_t* L_2;
		L_2 = LocalizationManager_get_CurrentLocaleCode_m145A08E471BBD1C5FF08F363472E67E3D1BB2374(NULL);
		String_t* L_3;
		L_3 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral82530C4F208A51DFA97679728CBE5CEA8B45CAB7, L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var);
		((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___lsnKey_14 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_StaticFields*)il2cpp_codegen_static_fields_for(CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4_il2cpp_TypeInfo_var))->___lsnKey_14), (void*)L_3);
		// SceneManager.LoadScene("SampleScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B, NULL);
		// }
		return;
	}
}
// System.Void LessonSetup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LessonSetup__ctor_m50BF95B44401FCCD15088D66480EC24455F9CCE1 (LessonSetup_t82FC2988828A3FBAD73F9FFC966ECD0D32BB3677* __this, const RuntimeMethod* method) 
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
// System.Void MenuFBStarter::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuFBStarter_Awake_m284F80FA66C8F6052BFC15986E8B4C6869FFE817 (MenuFBStarter_t5427F4FC813BD9CC370C731F54FA786F929F310A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuFBStarter_t5427F4FC813BD9CC370C731F54FA786F929F310A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE6710C2A5504C6481A12B6DF20BB09E4D98D4AD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (lsns != null)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((MenuFBStarter_t5427F4FC813BD9CC370C731F54FA786F929F310A_StaticFields*)il2cpp_codegen_static_fields_for(MenuFBStarter_t5427F4FC813BD9CC370C731F54FA786F929F310A_il2cpp_TypeInfo_var))->___lsns_5;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// DrawButtons();
		MenuFBStarter_DrawButtons_m0FE14E65CAC8995621FCEA8248444CA18B78395E(__this, NULL);
		// return;
		return;
	}

IL_000e:
	{
		// FirebaseController.SendRequest(new string[] { "lsns" + LocalizationManager.CurrentLocaleCode });
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		String_t* L_3;
		L_3 = LocalizationManager_get_CurrentLocaleCode_m145A08E471BBD1C5FF08F363472E67E3D1BB2374(NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralEE6710C2A5504C6481A12B6DF20BB09E4D98D4AD, L_3, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_4);
		FirebaseController_SendRequest_m08C43F3771A038B08CCFD61F90F5B4A10BF709C1(L_2, NULL);
		// StartCoroutine(waitForLessons());
		RuntimeObject* L_5;
		L_5 = MenuFBStarter_waitForLessons_mF80464F508D3223F9BA4FC208F1C658E897D41FA(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator MenuFBStarter::waitForLessons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MenuFBStarter_waitForLessons_mF80464F508D3223F9BA4FC208F1C658E897D41FA (MenuFBStarter_t5427F4FC813BD9CC370C731F54FA786F929F310A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CwaitForLessonsU3Ed__3_tA7927A1037D7E0A0FD3B4B5B092DD6B2682A12B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CwaitForLessonsU3Ed__3_tA7927A1037D7E0A0FD3B4B5B092DD6B2682A12B7* L_0 = (U3CwaitForLessonsU3Ed__3_tA7927A1037D7E0A0FD3B4B5B092DD6B2682A12B7*)il2cpp_codegen_object_new(U3CwaitForLessonsU3Ed__3_tA7927A1037D7E0A0FD3B4B5B092DD6B2682A12B7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CwaitForLessonsU3Ed__3__ctor_m46136FF1C4E76AA71162994C46A74AE5D972A524(L_0, 0, NULL);
		U3CwaitForLessonsU3Ed__3_tA7927A1037D7E0A0FD3B4B5B092DD6B2682A12B7* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void MenuFBStarter::DrawButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuFBStarter_DrawButtons_m0FE14E65CAC8995621FCEA8248444CA18B78395E (MenuFBStarter_t5427F4FC813BD9CC370C731F54FA786F929F310A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLessonSetup_t82FC2988828A3FBAD73F9FFC966ECD0D32BB3677_mD07A93669F8CC82DBFC2A01BFD814DF00BC8F128_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuFBStarter_t5427F4FC813BD9CC370C731F54FA786F929F310A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D19CF46F0A7E27123A528965054EDD67AF55062);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5D380D7472DF62C3B0C30B37F7A25C76F3441D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF16D88E55A739190BAF70D6B4C6817B6E0EE2778);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	uint8_t V_1 = 0x0;
	{
		// GameObject lessonButtonPrefab = Resources.Load<GameObject>("LessonButton");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A(_stringLiteralF16D88E55A739190BAF70D6B4C6817B6E0EE2778, Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var);
		V_0 = L_0;
		// gameObject.transform.Find("Loading").gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_2, _stringLiteralC5D380D7472DF62C3B0C30B37F7A25C76F3441D5, NULL);
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// for (byte i = 0; i < lsns.Length; )
		V_1 = (uint8_t)0;
		goto IL_0099;
	}

IL_002f:
	{
		// var button = Instantiate(lessonButtonPrefab, gameObject.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_5, L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		// button.transform.position += new Vector3(0, -150 * i);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = L_10;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		uint8_t L_13 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_14), (0.0f), ((float)((int32_t)il2cpp_codegen_multiply(((int32_t)-150), (int32_t)L_13))), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_12, L_14, NULL);
		NullCheck(L_11);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_11, L_15, NULL);
		// button.transform.Find("Text (TMP)").GetComponent<TMP_Text>().text = lsns[i];
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = L_9;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_17, _stringLiteral0D19CF46F0A7E27123A528965054EDD67AF55062, NULL);
		NullCheck(L_18);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_19;
		L_19 = Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5(L_18, Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = ((MenuFBStarter_t5427F4FC813BD9CC370C731F54FA786F929F310A_StaticFields*)il2cpp_codegen_static_fields_for(MenuFBStarter_t5427F4FC813BD9CC370C731F54FA786F929F310A_il2cpp_TypeInfo_var))->___lsns_5;
		uint8_t L_21 = V_1;
		NullCheck(L_20);
		uint8_t L_22 = L_21;
		String_t* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_19);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_19, L_23);
		// button.GetComponent<LessonSetup>().number = ++i;
		NullCheck(L_16);
		LessonSetup_t82FC2988828A3FBAD73F9FFC966ECD0D32BB3677* L_24;
		L_24 = GameObject_GetComponent_TisLessonSetup_t82FC2988828A3FBAD73F9FFC966ECD0D32BB3677_mD07A93669F8CC82DBFC2A01BFD814DF00BC8F128(L_16, GameObject_GetComponent_TisLessonSetup_t82FC2988828A3FBAD73F9FFC966ECD0D32BB3677_mD07A93669F8CC82DBFC2A01BFD814DF00BC8F128_RuntimeMethod_var);
		uint8_t L_25 = V_1;
		int32_t L_26 = ((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_25, 1)));
		V_1 = (uint8_t)L_26;
		NullCheck(L_24);
		L_24->___number_4 = (uint8_t)L_26;
	}

IL_0099:
	{
		// for (byte i = 0; i < lsns.Length; )
		uint8_t L_27 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = ((MenuFBStarter_t5427F4FC813BD9CC370C731F54FA786F929F310A_StaticFields*)il2cpp_codegen_static_fields_for(MenuFBStarter_t5427F4FC813BD9CC370C731F54FA786F929F310A_il2cpp_TypeInfo_var))->___lsns_5;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))
		{
			goto IL_002f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MenuFBStarter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuFBStarter__ctor_mCCA952AA2BAABE0481BECF43B76778BFEC99B6BA (MenuFBStarter_t5427F4FC813BD9CC370C731F54FA786F929F310A* __this, const RuntimeMethod* method) 
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
// System.Void MenuFBStarter/<waitForLessons>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwaitForLessonsU3Ed__3__ctor_m46136FF1C4E76AA71162994C46A74AE5D972A524 (U3CwaitForLessonsU3Ed__3_tA7927A1037D7E0A0FD3B4B5B092DD6B2682A12B7* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MenuFBStarter/<waitForLessons>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwaitForLessonsU3Ed__3_System_IDisposable_Dispose_m02A27106FDCB3C6457267801B5C9D08E1911EFC3 (U3CwaitForLessonsU3Ed__3_tA7927A1037D7E0A0FD3B4B5B092DD6B2682A12B7* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MenuFBStarter/<waitForLessons>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CwaitForLessonsU3Ed__3_MoveNext_m3BDD03B389468B38B7B12112690B3BD16F111FCF (U3CwaitForLessonsU3Ed__3_tA7927A1037D7E0A0FD3B4B5B092DD6B2682A12B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseController_tFAF0A895515920AE41D21D9736E00FEAE8B7DBD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuFBStarter_t5427F4FC813BD9CC370C731F54FA786F929F310A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE6710C2A5504C6481A12B6DF20BB09E4D98D4AD);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MenuFBStarter_t5427F4FC813BD9CC370C731F54FA786F929F310A* V_1 = NULL;
	ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MenuFBStarter_t5427F4FC813BD9CC370C731F54FA786F929F310A* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0037;
	}

IL_0020:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0030:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0037:
	{
		// while (FirebaseController.FbStatus != FirebaseStatus.Connected)
		int32_t L_4 = ((FirebaseController_tFAF0A895515920AE41D21D9736E00FEAE8B7DBD3_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseController_tFAF0A895515920AE41D21D9736E00FEAE8B7DBD3_il2cpp_TypeInfo_var))->___FbStatus_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0020;
		}
	}
	{
		// lsns = FirebaseRemoteConfig.DefaultInstance.
		//     GetValue("lsns" + LocalizationManager.CurrentLocaleCode).StringValue.Split('\n');
		il2cpp_codegen_runtime_class_init_inline(FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var);
		FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* L_5;
		L_5 = FirebaseRemoteConfig_get_DefaultInstance_mE7F726BCB1E35F348E25ABB83ACDAFA1A4AD495C(NULL);
		String_t* L_6;
		L_6 = LocalizationManager_get_CurrentLocaleCode_m145A08E471BBD1C5FF08F363472E67E3D1BB2374(NULL);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralEE6710C2A5504C6481A12B6DF20BB09E4D98D4AD, L_6, NULL);
		NullCheck(L_5);
		ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857 L_8;
		L_8 = FirebaseRemoteConfig_GetValue_m3FDC4B8924F68E22E5D7478AA0C6D70221D7E974(L_5, L_7, NULL);
		V_2 = L_8;
		String_t* L_9;
		L_9 = ConfigValue_get_StringValue_m5275157ED4BBF3D471E8F39EB79A7BAD782AC047((&V_2), NULL);
		NullCheck(L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10;
		L_10 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_9, ((int32_t)10), 0, NULL);
		((MenuFBStarter_t5427F4FC813BD9CC370C731F54FA786F929F310A_StaticFields*)il2cpp_codegen_static_fields_for(MenuFBStarter_t5427F4FC813BD9CC370C731F54FA786F929F310A_il2cpp_TypeInfo_var))->___lsns_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((MenuFBStarter_t5427F4FC813BD9CC370C731F54FA786F929F310A_StaticFields*)il2cpp_codegen_static_fields_for(MenuFBStarter_t5427F4FC813BD9CC370C731F54FA786F929F310A_il2cpp_TypeInfo_var))->___lsns_5), (void*)L_10);
		// DrawButtons();
		MenuFBStarter_t5427F4FC813BD9CC370C731F54FA786F929F310A* L_11 = V_1;
		NullCheck(L_11);
		MenuFBStarter_DrawButtons_m0FE14E65CAC8995621FCEA8248444CA18B78395E(L_11, NULL);
		// }
		return (bool)0;
	}
}
// System.Object MenuFBStarter/<waitForLessons>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CwaitForLessonsU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m512B21FDB3E88CF2F0702B502ECDA749019BCC5F (U3CwaitForLessonsU3Ed__3_tA7927A1037D7E0A0FD3B4B5B092DD6B2682A12B7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MenuFBStarter/<waitForLessons>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwaitForLessonsU3Ed__3_System_Collections_IEnumerator_Reset_mE01ECEB8447644C153D14AA0782260EA077B16BD (U3CwaitForLessonsU3Ed__3_tA7927A1037D7E0A0FD3B4B5B092DD6B2682A12B7* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CwaitForLessonsU3Ed__3_System_Collections_IEnumerator_Reset_mE01ECEB8447644C153D14AA0782260EA077B16BD_RuntimeMethod_var)));
	}
}
// System.Object MenuFBStarter/<waitForLessons>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CwaitForLessonsU3Ed__3_System_Collections_IEnumerator_get_Current_mF191FDA5905DA43D69B06C3DF12F1FF4539CE1F8 (U3CwaitForLessonsU3Ed__3_tA7927A1037D7E0A0FD3B4B5B092DD6B2682A12B7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void MenuPanel::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuPanel_LoadScene_mF48810DCBCE5C9E4C67BB43FB387EA83B6D402C3 (MenuPanel_tF1F2BBE259ECB2D72FD7F1D68EE84A3AE13FEF44* __this, String_t* ___0_scene, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(scene);
		String_t* L_0 = ___0_scene;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_0, NULL);
		// }
		return;
	}
}
// System.Void MenuPanel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuPanel__ctor_m7AE1B0C4009121EA19045DB9C8ABAA9CEF24AF1E (MenuPanel_tF1F2BBE259ECB2D72FD7F1D68EE84A3AE13FEF44* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LocalizationManager_get_CurrentLocaleID_m320D2159C65FE58C4027EE68AB0E542E115F51CC_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int CurrentLocaleID { get; private set; }
		int32_t L_0 = ((LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA_StaticFields*)il2cpp_codegen_static_fields_for(LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA_il2cpp_TypeInfo_var))->___U3CCurrentLocaleIDU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LocaleIdentifier_t1C6758D6E05D8D5DBCD7FFEC16E8E55547595C18 Locale_get_Identifier_mB725A4E8F29CA5C0544D03E1DD10767B54BCF29F_inline (Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Identifier;
		LocaleIdentifier_t1C6758D6E05D8D5DBCD7FFEC16E8E55547595C18 L_0 = __this->___m_Identifier_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LocaleIdentifier_get_Code_mD6E9CE9BCBEFE58DEDD482AA3C6BAC6B9BF68AE5_inline (LocaleIdentifier_t1C6758D6E05D8D5DBCD7FFEC16E8E55547595C18* __this, const RuntimeMethod* method) 
{
	{
		// public string Code => m_Code;
		String_t* L_0 = __this->___m_Code_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool LocalizationManager_get_working_mC3BAD06E06EF5943C1D382F799109C5D524D37FF_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool working { get; private set; }
		bool L_0 = ((LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA_StaticFields*)il2cpp_codegen_static_fields_for(LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA_il2cpp_TypeInfo_var))->___U3CworkingU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LocalizationManager_set_CurrentLocaleID_m4E4C9B802E9F7057A2FEF6518501F089BCA2C510_inline (int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int CurrentLocaleID { get; private set; }
		int32_t L_0 = ___0_value;
		((LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA_StaticFields*)il2cpp_codegen_static_fields_for(LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA_il2cpp_TypeInfo_var))->___U3CCurrentLocaleIDU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LocalizationManager_set_working_m1AF799207AD78A58E03E1DC90234037670431D58_inline (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool working { get; private set; }
		bool L_0 = ___0_value;
		((LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA_StaticFields*)il2cpp_codegen_static_fields_for(LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA_il2cpp_TypeInfo_var))->___U3CworkingU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CheckAnswer_get_winText_mE4F74A644E2E2414A327DE7670B541894A28A1E8_inline (CheckAnswer_t7117806FECB7DDFDB10DA2CD0487A0303CE9B8F4* __this, const RuntimeMethod* method) 
{
	{
		// public string winText { get; set; }
		String_t* L_0 = __this->___U3CwinTextU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		__this->___z_4 = (0.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m101F9EFDFA6483195C0E587BDC1224D070F25D6A_gshared_inline (List_1_t3C6B76C8AA1B1D7FE23631F2D73478A9F1B2ED45* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m391D4851BA7E7617CFB6B876ABB6687D2248830B_gshared_inline (List_1_t3C6B76C8AA1B1D7FE23631F2D73478A9F1B2ED45* __this, quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D ___0_item, const RuntimeMethod* method) 
{
	questU5BU5D_t79983FAAF5E188A7D6C7108507A0556DD34AFA3A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		questU5BU5D_t79983FAAF5E188A7D6C7108507A0556DD34AFA3A* L_1 = (questU5BU5D_t79983FAAF5E188A7D6C7108507A0556DD34AFA3A*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		questU5BU5D_t79983FAAF5E188A7D6C7108507A0556DD34AFA3A* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		questU5BU5D_t79983FAAF5E188A7D6C7108507A0556DD34AFA3A* L_6 = V_0;
		int32_t L_7 = V_1;
		quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D)L_8);
		return;
	}

IL_0034:
	{
		quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D L_9 = ___0_item;
		((  void (*) (List_1_t3C6B76C8AA1B1D7FE23631F2D73478A9F1B2ED45*, quest_tC6C0F759A751E250CDEFCEE106DF25B2F2E4BD2D, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
