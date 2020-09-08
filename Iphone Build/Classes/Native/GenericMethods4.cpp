#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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

// System.Char[]
struct CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,Vuforia.TargetFinder,System.Collections.DictionaryEntry>
struct Transform_1_t8A37509B16144DADDAE9FE50AA8EDE43130DAFE9;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ObjectTarget>
struct Dictionary_2_t38214185C816F7C6D37D4A288F828447EFA5BF63;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tCF455EEDBEB1050374511D3875D3A1F51AF8889C;
// System.Collections.Generic.Dictionary`2<System.Type,Vuforia.TargetFinder>
struct Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_tF7252612D9832FA324E2A1AB4C3942EEACEBBEF9;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_tA58A56CD6B5AD6B2DF5F4934A46CEC9F681B71AD;
// System.Collections.Generic.List`1<Vuforia.DataSet>
struct List_1_t03C9CEF50E5A7C36B2BC4CD68C627FA6080A1BF9;
// System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>
struct List_1_t9F47B63E854EC1B276E04B3C907EA6E9B9A2C619;
// System.Int32[]
struct Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074;
// System.Reflection.MemberFilter
struct MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532;
// System.Void
struct Void_tDB81A15FA2AB53E2401A76B745D215397B29F783;
// Vuforia.IVuforiaWrapper
struct IVuforiaWrapper_t9B4B3D91B44F2ECED1836F91D6320F8F30724FE2;
// Vuforia.ImageTargetBuilder
struct ImageTargetBuilder_t5BA66A134696E24A591FA066087BAABE66F00755;
// Vuforia.ImageTargetFinder
struct ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957;
// Vuforia.ModelTargetBehaviour
struct ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0;
// Vuforia.ModelTargetFinder
struct ModelTargetFinder_t474AAAC95C91CB1EAD1806E0EB66EE13DA0C225A;
// Vuforia.ObjectTracker
struct ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E;
// Vuforia.TargetFinder
struct TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC;
// Vuforia.TargetFinder[]
struct TargetFinderU5BU5D_t1841E6B31BDD8899EDCB728615B42F52DF895A84;

extern RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
extern RuntimeClass* IVuforiaWrapper_t9B4B3D91B44F2ECED1836F91D6320F8F30724FE2_il2cpp_TypeInfo_var;
extern RuntimeClass* ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* ModelTargetFinder_t474AAAC95C91CB1EAD1806E0EB66EE13DA0C225A_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* VuforiaWrapper_tDC7A7816CA0A902A65EAE1EEBA8A27D87F94C1FD_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3FED6A49E132919E1671DD9D12FC98604DA18137;
extern String_t* _stringLiteral7C31430FA20B8B31FA24474349C2089797CD5898;
extern const RuntimeMethod* Dictionary_2_TryGetValue_mD59E4204584135A12DCA06596881B7BEB93616F5_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m178261C9451569356F8398040DA6BCE205F08ADC_RuntimeMethod_var;
extern const RuntimeType* ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957_0_0_0_var;
extern const RuntimeType* ModelTargetFinder_t474AAAC95C91CB1EAD1806E0EB66EE13DA0C225A_0_0_0_var;
extern const uint32_t ObjectTracker_GetTargetFinder_TisRuntimeObject_m8178BA66A8F4F11AF7663D58195358E539609362_MetadataUsageId;



#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef DICTIONARY_2_T97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972_H
#define DICTIONARY_2_T97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Type,Vuforia.TargetFinder>
struct  Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_tA58A56CD6B5AD6B2DF5F4934A46CEC9F681B71AD* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	TargetFinderU5BU5D_t1841E6B31BDD8899EDCB728615B42F52DF895A84* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972, ___table_4)); }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972, ___linkSlots_5)); }
	inline LinkU5BU5D_tA58A56CD6B5AD6B2DF5F4934A46CEC9F681B71AD* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_tA58A56CD6B5AD6B2DF5F4934A46CEC9F681B71AD** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_tA58A56CD6B5AD6B2DF5F4934A46CEC9F681B71AD* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972, ___keySlots_6)); }
	inline TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532* get_keySlots_6() const { return ___keySlots_6; }
	inline TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972, ___valueSlots_7)); }
	inline TargetFinderU5BU5D_t1841E6B31BDD8899EDCB728615B42F52DF895A84* get_valueSlots_7() const { return ___valueSlots_7; }
	inline TargetFinderU5BU5D_t1841E6B31BDD8899EDCB728615B42F52DF895A84** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(TargetFinderU5BU5D_t1841E6B31BDD8899EDCB728615B42F52DF895A84* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972, ___serialization_info_13)); }
	inline SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2_Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__amU24cacheB
	Transform_1_t8A37509B16144DADDAE9FE50AA8EDE43130DAFE9 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t8A37509B16144DADDAE9FE50AA8EDE43130DAFE9 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t8A37509B16144DADDAE9FE50AA8EDE43130DAFE9 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t8A37509B16144DADDAE9FE50AA8EDE43130DAFE9 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_H
#define VALUETYPE_T1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshaled_com
{
};
#endif // VALUETYPE_T1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_H
#ifndef TRACKER_T11C8E7B84615512E8125186CDC5DF90D9D7B58F1_H
#define TRACKER_T11C8E7B84615512E8125186CDC5DF90D9D7B58F1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.Tracker
struct  Tracker_t11C8E7B84615512E8125186CDC5DF90D9D7B58F1  : public RuntimeObject
{
public:
	// System.Boolean Vuforia.Tracker::<IsActive>k__BackingField
	bool ___U3CIsActiveU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CIsActiveU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Tracker_t11C8E7B84615512E8125186CDC5DF90D9D7B58F1, ___U3CIsActiveU3Ek__BackingField_0)); }
	inline bool get_U3CIsActiveU3Ek__BackingField_0() const { return ___U3CIsActiveU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsActiveU3Ek__BackingField_0() { return &___U3CIsActiveU3Ek__BackingField_0; }
	inline void set_U3CIsActiveU3Ek__BackingField_0(bool value)
	{
		___U3CIsActiveU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKER_T11C8E7B84615512E8125186CDC5DF90D9D7B58F1_H
#ifndef BOOLEAN_T92E4792324DA9B716F339A3B965A14965E99A4EF_H
#define BOOLEAN_T92E4792324DA9B716F339A3B965A14965E99A4EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T92E4792324DA9B716F339A3B965A14965E99A4EF_H
#ifndef ENUM_T5AAC444DFCAA78411386665A25FE3CD3169879EF_H
#define ENUM_T5AAC444DFCAA78411386665A25FE3CD3169879EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF  : public ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C
{
public:

public:
};

struct Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_marshaled_com
{
};
#endif // ENUM_T5AAC444DFCAA78411386665A25FE3CD3169879EF_H
#ifndef INT32_TC16F64335CE8B56D99229DE94BB3A876ED55FE87_H
#define INT32_TC16F64335CE8B56D99229DE94BB3A876ED55FE87_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_TC16F64335CE8B56D99229DE94BB3A876ED55FE87_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef VOID_TDB81A15FA2AB53E2401A76B745D215397B29F783_H
#define VOID_TDB81A15FA2AB53E2401A76B745D215397B29F783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_tDB81A15FA2AB53E2401A76B745D215397B29F783 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_TDB81A15FA2AB53E2401A76B745D215397B29F783_H
#ifndef OBJECTTRACKER_TC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E_H
#define OBJECTTRACKER_TC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ObjectTracker
struct  ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E  : public Tracker_t11C8E7B84615512E8125186CDC5DF90D9D7B58F1
{
public:
	// System.Collections.Generic.List`1<Vuforia.DataSet> Vuforia.ObjectTracker::mActiveDataSets
	List_1_t03C9CEF50E5A7C36B2BC4CD68C627FA6080A1BF9 * ___mActiveDataSets_1;
	// System.Collections.Generic.List`1<Vuforia.DataSet> Vuforia.ObjectTracker::mDataSets
	List_1_t03C9CEF50E5A7C36B2BC4CD68C627FA6080A1BF9 * ___mDataSets_2;
	// System.Collections.Generic.Dictionary`2<System.Type,Vuforia.TargetFinder> Vuforia.ObjectTracker::mTargetFinders
	Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972 * ___mTargetFinders_3;
	// Vuforia.ImageTargetBuilder Vuforia.ObjectTracker::mImageTargetBuilder
	ImageTargetBuilder_t5BA66A134696E24A591FA066087BAABE66F00755 * ___mImageTargetBuilder_4;

public:
	inline static int32_t get_offset_of_mActiveDataSets_1() { return static_cast<int32_t>(offsetof(ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E, ___mActiveDataSets_1)); }
	inline List_1_t03C9CEF50E5A7C36B2BC4CD68C627FA6080A1BF9 * get_mActiveDataSets_1() const { return ___mActiveDataSets_1; }
	inline List_1_t03C9CEF50E5A7C36B2BC4CD68C627FA6080A1BF9 ** get_address_of_mActiveDataSets_1() { return &___mActiveDataSets_1; }
	inline void set_mActiveDataSets_1(List_1_t03C9CEF50E5A7C36B2BC4CD68C627FA6080A1BF9 * value)
	{
		___mActiveDataSets_1 = value;
		Il2CppCodeGenWriteBarrier((&___mActiveDataSets_1), value);
	}

	inline static int32_t get_offset_of_mDataSets_2() { return static_cast<int32_t>(offsetof(ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E, ___mDataSets_2)); }
	inline List_1_t03C9CEF50E5A7C36B2BC4CD68C627FA6080A1BF9 * get_mDataSets_2() const { return ___mDataSets_2; }
	inline List_1_t03C9CEF50E5A7C36B2BC4CD68C627FA6080A1BF9 ** get_address_of_mDataSets_2() { return &___mDataSets_2; }
	inline void set_mDataSets_2(List_1_t03C9CEF50E5A7C36B2BC4CD68C627FA6080A1BF9 * value)
	{
		___mDataSets_2 = value;
		Il2CppCodeGenWriteBarrier((&___mDataSets_2), value);
	}

	inline static int32_t get_offset_of_mTargetFinders_3() { return static_cast<int32_t>(offsetof(ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E, ___mTargetFinders_3)); }
	inline Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972 * get_mTargetFinders_3() const { return ___mTargetFinders_3; }
	inline Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972 ** get_address_of_mTargetFinders_3() { return &___mTargetFinders_3; }
	inline void set_mTargetFinders_3(Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972 * value)
	{
		___mTargetFinders_3 = value;
		Il2CppCodeGenWriteBarrier((&___mTargetFinders_3), value);
	}

	inline static int32_t get_offset_of_mImageTargetBuilder_4() { return static_cast<int32_t>(offsetof(ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E, ___mImageTargetBuilder_4)); }
	inline ImageTargetBuilder_t5BA66A134696E24A591FA066087BAABE66F00755 * get_mImageTargetBuilder_4() const { return ___mImageTargetBuilder_4; }
	inline ImageTargetBuilder_t5BA66A134696E24A591FA066087BAABE66F00755 ** get_address_of_mImageTargetBuilder_4() { return &___mImageTargetBuilder_4; }
	inline void set_mImageTargetBuilder_4(ImageTargetBuilder_t5BA66A134696E24A591FA066087BAABE66F00755 * value)
	{
		___mImageTargetBuilder_4 = value;
		Il2CppCodeGenWriteBarrier((&___mImageTargetBuilder_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTTRACKER_TC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E_H
#ifndef TARGETFINDERSTATE_TFED6EAB7D0324D88E902EC9988067C11E8B8C11D_H
#define TARGETFINDERSTATE_TFED6EAB7D0324D88E902EC9988067C11E8B8C11D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TargetFinder_TargetFinderState
#pragma pack(push, tp, 1)
struct  TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D 
{
public:
	// System.Int32 Vuforia.TargetFinder_TargetFinderState::IsRequesting
	int32_t ___IsRequesting_0;
	// System.Int32 Vuforia.TargetFinder_TargetFinderState::UpdateState
	int32_t ___UpdateState_1;

public:
	inline static int32_t get_offset_of_IsRequesting_0() { return static_cast<int32_t>(offsetof(TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D, ___IsRequesting_0)); }
	inline int32_t get_IsRequesting_0() const { return ___IsRequesting_0; }
	inline int32_t* get_address_of_IsRequesting_0() { return &___IsRequesting_0; }
	inline void set_IsRequesting_0(int32_t value)
	{
		___IsRequesting_0 = value;
	}

	inline static int32_t get_offset_of_UpdateState_1() { return static_cast<int32_t>(offsetof(TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D, ___UpdateState_1)); }
	inline int32_t get_UpdateState_1() const { return ___UpdateState_1; }
	inline int32_t* get_address_of_UpdateState_1() { return &___UpdateState_1; }
	inline void set_UpdateState_1(int32_t value)
	{
		___UpdateState_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETFINDERSTATE_TFED6EAB7D0324D88E902EC9988067C11E8B8C11D_H
#ifndef BINDINGFLAGS_T7FD4941D9115FF77D5F573F63A93BFBC5D1F63B2_H
#define BINDINGFLAGS_T7FD4941D9115FF77D5F573F63A93BFBC5D1F63B2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t7FD4941D9115FF77D5F573F63A93BFBC5D1F63B2 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t7FD4941D9115FF77D5F573F63A93BFBC5D1F63B2, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T7FD4941D9115FF77D5F573F63A93BFBC5D1F63B2_H
#ifndef RUNTIMETYPEHANDLE_T58BB862EF56F46A9518F8ACA413EF7D70238F1AD_H
#define RUNTIMETYPEHANDLE_T58BB862EF56F46A9518F8ACA413EF7D70238F1AD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T58BB862EF56F46A9518F8ACA413EF7D70238F1AD_H
#ifndef TARGETFINDER_T2AFA3E4A66C461FA522FE35048DB093003A7B1AC_H
#define TARGETFINDER_T2AFA3E4A66C461FA522FE35048DB093003A7B1AC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TargetFinder
struct  TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.TargetFinder::mTargetFinderPtr
	intptr_t ___mTargetFinderPtr_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ObjectTarget> Vuforia.TargetFinder::mTargets
	Dictionary_2_t38214185C816F7C6D37D4A288F828447EFA5BF63 * ___mTargets_1;
	// System.IntPtr Vuforia.TargetFinder::mTargetFinderStatePtr
	intptr_t ___mTargetFinderStatePtr_2;
	// Vuforia.TargetFinder_TargetFinderState Vuforia.TargetFinder::mTargetFinderState
	TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D  ___mTargetFinderState_3;
	// System.Collections.Generic.List`1<Vuforia.TargetFinder_TargetSearchResult> Vuforia.TargetFinder::mNewResults
	List_1_t9F47B63E854EC1B276E04B3C907EA6E9B9A2C619 * ___mNewResults_4;

public:
	inline static int32_t get_offset_of_mTargetFinderPtr_0() { return static_cast<int32_t>(offsetof(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC, ___mTargetFinderPtr_0)); }
	inline intptr_t get_mTargetFinderPtr_0() const { return ___mTargetFinderPtr_0; }
	inline intptr_t* get_address_of_mTargetFinderPtr_0() { return &___mTargetFinderPtr_0; }
	inline void set_mTargetFinderPtr_0(intptr_t value)
	{
		___mTargetFinderPtr_0 = value;
	}

	inline static int32_t get_offset_of_mTargets_1() { return static_cast<int32_t>(offsetof(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC, ___mTargets_1)); }
	inline Dictionary_2_t38214185C816F7C6D37D4A288F828447EFA5BF63 * get_mTargets_1() const { return ___mTargets_1; }
	inline Dictionary_2_t38214185C816F7C6D37D4A288F828447EFA5BF63 ** get_address_of_mTargets_1() { return &___mTargets_1; }
	inline void set_mTargets_1(Dictionary_2_t38214185C816F7C6D37D4A288F828447EFA5BF63 * value)
	{
		___mTargets_1 = value;
		Il2CppCodeGenWriteBarrier((&___mTargets_1), value);
	}

	inline static int32_t get_offset_of_mTargetFinderStatePtr_2() { return static_cast<int32_t>(offsetof(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC, ___mTargetFinderStatePtr_2)); }
	inline intptr_t get_mTargetFinderStatePtr_2() const { return ___mTargetFinderStatePtr_2; }
	inline intptr_t* get_address_of_mTargetFinderStatePtr_2() { return &___mTargetFinderStatePtr_2; }
	inline void set_mTargetFinderStatePtr_2(intptr_t value)
	{
		___mTargetFinderStatePtr_2 = value;
	}

	inline static int32_t get_offset_of_mTargetFinderState_3() { return static_cast<int32_t>(offsetof(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC, ___mTargetFinderState_3)); }
	inline TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D  get_mTargetFinderState_3() const { return ___mTargetFinderState_3; }
	inline TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D * get_address_of_mTargetFinderState_3() { return &___mTargetFinderState_3; }
	inline void set_mTargetFinderState_3(TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D  value)
	{
		___mTargetFinderState_3 = value;
	}

	inline static int32_t get_offset_of_mNewResults_4() { return static_cast<int32_t>(offsetof(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC, ___mNewResults_4)); }
	inline List_1_t9F47B63E854EC1B276E04B3C907EA6E9B9A2C619 * get_mNewResults_4() const { return ___mNewResults_4; }
	inline List_1_t9F47B63E854EC1B276E04B3C907EA6E9B9A2C619 ** get_address_of_mNewResults_4() { return &___mNewResults_4; }
	inline void set_mNewResults_4(List_1_t9F47B63E854EC1B276E04B3C907EA6E9B9A2C619 * value)
	{
		___mNewResults_4 = value;
		Il2CppCodeGenWriteBarrier((&___mNewResults_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETFINDER_T2AFA3E4A66C461FA522FE35048DB093003A7B1AC_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef IMAGETARGETFINDER_T6E3D734AC2A2C4C1DF5578F038B15345296BE957_H
#define IMAGETARGETFINDER_T6E3D734AC2A2C4C1DF5578F038B15345296BE957_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ImageTargetFinder
struct  ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957  : public TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGETARGETFINDER_T6E3D734AC2A2C4C1DF5578F038B15345296BE957_H
#ifndef MODELTARGETFINDER_T474AAAC95C91CB1EAD1806E0EB66EE13DA0C225A_H
#define MODELTARGETFINDER_T474AAAC95C91CB1EAD1806E0EB66EE13DA0C225A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ModelTargetFinder
struct  ModelTargetFinder_t474AAAC95C91CB1EAD1806E0EB66EE13DA0C225A  : public TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC
{
public:
	// Vuforia.ModelTargetBehaviour Vuforia.ModelTargetFinder::mLastEnabledMTBehaviour
	ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * ___mLastEnabledMTBehaviour_5;

public:
	inline static int32_t get_offset_of_mLastEnabledMTBehaviour_5() { return static_cast<int32_t>(offsetof(ModelTargetFinder_t474AAAC95C91CB1EAD1806E0EB66EE13DA0C225A, ___mLastEnabledMTBehaviour_5)); }
	inline ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * get_mLastEnabledMTBehaviour_5() const { return ___mLastEnabledMTBehaviour_5; }
	inline ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 ** get_address_of_mLastEnabledMTBehaviour_5() { return &___mLastEnabledMTBehaviour_5; }
	inline void set_mLastEnabledMTBehaviour_5(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * value)
	{
		___mLastEnabledMTBehaviour_5 = value;
		Il2CppCodeGenWriteBarrier((&___mLastEnabledMTBehaviour_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODELTARGETFINDER_T474AAAC95C91CB1EAD1806E0EB66EE13DA0C225A_H


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m1DD3722BF4BB2080516165A517EB10BB996B18EB_gshared (Dictionary_2_tCF455EEDBEB1050374511D3875D3A1F51AF8889C * __this, RuntimeObject * p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mC705E93760444EDBD2D2AE51F4F37342FDF684BF_gshared (Dictionary_2_tCF455EEDBEB1050374511D3875D3A1F51AF8889C * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);

// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8326E3405B647C99882C2E411C459944B0598D73 (RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,Vuforia.TargetFinder>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mD59E4204584135A12DCA06596881B7BEB93616F5 (Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972 * __this, Type_t * p0, TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972 *, Type_t *, TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC **, const RuntimeMethod*))Dictionary_2_TryGetValue_m1DD3722BF4BB2080516165A517EB10BB996B18EB_gshared)(__this, p0, p1, method);
}
// Vuforia.IVuforiaWrapper Vuforia.VuforiaWrapper::get_Instance()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* VuforiaWrapper_get_Instance_mF9297136720EAA4FA0D0EF61C6C874CCF5CFFF18 (const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mDC2509E75E1E11ECB129D89F90E7E89925D205DE (intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Void Vuforia.ImageTargetFinder::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ImageTargetFinder__ctor_m68412DD938E09F63B7837EBBB6B0E585EC35C32F (ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957 * __this, intptr_t ___targetFinderPtr0, const RuntimeMethod* method);
// System.Void Vuforia.ModelTargetFinder::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ModelTargetFinder__ctor_mE67C86039EC26C80B457D1B1EDF96C85E216650B (ModelTargetFinder_t474AAAC95C91CB1EAD1806E0EB66EE13DA0C225A * __this, intptr_t ___targetFinderPtr0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m993E65F4E4457CE1761C49B188A6CF858597BDDE (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,Vuforia.TargetFinder>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m178261C9451569356F8398040DA6BCE205F08ADC (Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972 * __this, Type_t * p0, TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972 *, Type_t *, TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC *, const RuntimeMethod*))Dictionary_2_set_Item_mC705E93760444EDBD2D2AE51F4F37342FDF684BF_gshared)(__this, p0, p1, method);
}
// Vuforia.TargetFinder Vuforia.ObjectTracker::GetTargetFinder<System.Object>()
extern "C" IL2CPP_METHOD_ATTR TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * ObjectTracker_GetTargetFinder_TisRuntimeObject_m8178BA66A8F4F11AF7663D58195358E539609362_gshared (ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTracker_GetTargetFinder_TisRuntimeObject_m8178BA66A8F4F11AF7663D58195358E539609362_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * V_0 = NULL;
	int32_t V_1 = 0;
	intptr_t V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		V_0 = (TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC *)NULL;
		RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m8326E3405B647C99882C2E411C459944B0598D73((RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD )L_0, /*hidden argument*/NULL);
		RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  L_2 = { reinterpret_cast<intptr_t> (ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957_0_0_0_var) };
		Type_t * L_3 = Type_GetTypeFromHandle_m8326E3405B647C99882C2E411C459944B0598D73((RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD )L_2, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_1) == ((RuntimeObject*)(Type_t *)L_3))))
		{
			goto IL_001c;
		}
	}
	{
		V_1 = (int32_t)0;
		goto IL_0042;
	}

IL_001c:
	{
		RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m8326E3405B647C99882C2E411C459944B0598D73((RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD )L_4, /*hidden argument*/NULL);
		RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  L_6 = { reinterpret_cast<intptr_t> (ModelTargetFinder_t474AAAC95C91CB1EAD1806E0EB66EE13DA0C225A_0_0_0_var) };
		Type_t * L_7 = Type_GetTypeFromHandle_m8326E3405B647C99882C2E411C459944B0598D73((RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD )L_6, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_5) == ((RuntimeObject*)(Type_t *)L_7))))
		{
			goto IL_0036;
		}
	}
	{
		V_1 = (int32_t)1;
		goto IL_0042;
	}

IL_0036:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteral7C31430FA20B8B31FA24474349C2089797CD5898, /*hidden argument*/NULL);
		return (TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC *)NULL;
	}

IL_0042:
	{
		Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972 * L_8 = (Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972 *)__this->get_mTargetFinders_3();
		RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  L_9 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m8326E3405B647C99882C2E411C459944B0598D73((RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD )L_9, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972 *)L_8);
		bool L_11 = Dictionary_2_TryGetValue_mD59E4204584135A12DCA06596881B7BEB93616F5((Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972 *)L_8, (Type_t *)L_10, (TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC **)(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mD59E4204584135A12DCA06596881B7BEB93616F5_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_00ce;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_tDC7A7816CA0A902A65EAE1EEBA8A27D87F94C1FD_il2cpp_TypeInfo_var);
		RuntimeObject* L_12 = VuforiaWrapper_get_Instance_mF9297136720EAA4FA0D0EF61C6C874CCF5CFFF18(/*hidden argument*/NULL);
		int32_t L_13 = V_1;
		NullCheck((RuntimeObject*)L_12);
		intptr_t L_14 = InterfaceFuncInvoker1< intptr_t, int32_t >::Invoke(136 /* System.IntPtr Vuforia.IVuforiaWrapper::ObjectTrackerGetTargetFinder(System.Int32) */, IVuforiaWrapper_t9B4B3D91B44F2ECED1836F91D6320F8F30724FE2_il2cpp_TypeInfo_var, (RuntimeObject*)L_12, (int32_t)L_13);
		V_2 = (intptr_t)L_14;
		intptr_t L_15 = V_2;
		bool L_16 = IntPtr_op_Equality_mDC2509E75E1E11ECB129D89F90E7E89925D205DE((intptr_t)L_15, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0080;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteral3FED6A49E132919E1671DD9D12FC98604DA18137, /*hidden argument*/NULL);
		return (TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC *)NULL;
	}

IL_0080:
	{
		RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  L_17 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18 = Type_GetTypeFromHandle_m8326E3405B647C99882C2E411C459944B0598D73((RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD )L_17, /*hidden argument*/NULL);
		RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  L_19 = { reinterpret_cast<intptr_t> (ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957_0_0_0_var) };
		Type_t * L_20 = Type_GetTypeFromHandle_m8326E3405B647C99882C2E411C459944B0598D73((RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD )L_19, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_18) == ((RuntimeObject*)(Type_t *)L_20))))
		{
			goto IL_009f;
		}
	}
	{
		intptr_t L_21 = V_2;
		ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957 * L_22 = (ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957 *)il2cpp_codegen_object_new(ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957_il2cpp_TypeInfo_var);
		ImageTargetFinder__ctor_m68412DD938E09F63B7837EBBB6B0E585EC35C32F(L_22, (intptr_t)L_21, /*hidden argument*/NULL);
		V_0 = (TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC *)L_22;
		goto IL_00bc;
	}

IL_009f:
	{
		RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  L_23 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_24 = Type_GetTypeFromHandle_m8326E3405B647C99882C2E411C459944B0598D73((RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD )L_23, /*hidden argument*/NULL);
		RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  L_25 = { reinterpret_cast<intptr_t> (ModelTargetFinder_t474AAAC95C91CB1EAD1806E0EB66EE13DA0C225A_0_0_0_var) };
		Type_t * L_26 = Type_GetTypeFromHandle_m8326E3405B647C99882C2E411C459944B0598D73((RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD )L_25, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_24) == ((RuntimeObject*)(Type_t *)L_26))))
		{
			goto IL_00bc;
		}
	}
	{
		intptr_t L_27 = V_2;
		ModelTargetFinder_t474AAAC95C91CB1EAD1806E0EB66EE13DA0C225A * L_28 = (ModelTargetFinder_t474AAAC95C91CB1EAD1806E0EB66EE13DA0C225A *)il2cpp_codegen_object_new(ModelTargetFinder_t474AAAC95C91CB1EAD1806E0EB66EE13DA0C225A_il2cpp_TypeInfo_var);
		ModelTargetFinder__ctor_mE67C86039EC26C80B457D1B1EDF96C85E216650B(L_28, (intptr_t)L_27, /*hidden argument*/NULL);
		V_0 = (TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC *)L_28;
	}

IL_00bc:
	{
		Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972 * L_29 = (Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972 *)__this->get_mTargetFinders_3();
		TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * L_30 = V_0;
		NullCheck((RuntimeObject *)L_30);
		Type_t * L_31 = Object_GetType_m993E65F4E4457CE1761C49B188A6CF858597BDDE((RuntimeObject *)L_30, /*hidden argument*/NULL);
		TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * L_32 = V_0;
		NullCheck((Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972 *)L_29);
		Dictionary_2_set_Item_m178261C9451569356F8398040DA6BCE205F08ADC((Dictionary_2_t97145FAA8A62E3A6895B2E7A97B7BB62B2F6B972 *)L_29, (Type_t *)L_31, (TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC *)L_32, /*hidden argument*/Dictionary_2_set_Item_m178261C9451569356F8398040DA6BCE205F08ADC_RuntimeMethod_var);
	}

IL_00ce:
	{
		TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * L_33 = V_0;
		return L_33;
	}
}
