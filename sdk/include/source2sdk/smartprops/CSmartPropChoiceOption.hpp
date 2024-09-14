#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x28
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CSmartPropChoiceOption
    {
    public:
        // metadata: MPropertyFriendlyName "Option Value Name"
        CUtlString m_Name; // 0x0        
        // metadata: MPropertyFriendlyName "Option Display Name"
        CUtlString m_DisplayName; // 0x8        
        // metadata: MPropertyAutoExpandSelf
        // metadata: MPropertyAttributeEditor "SmartPropAttributeEditor(VariableValue)"
        // m_VariableValues has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CSmartPropAttributeVariableValue> m_VariableValues;
        char m_VariableValues[0x18]; // 0x10        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSmartPropChoiceOption, m_Name) == 0x0);
    static_assert(offsetof(CSmartPropChoiceOption, m_DisplayName) == 0x8);
    static_assert(offsetof(CSmartPropChoiceOption, m_VariableValues) == 0x10);
    
    static_assert(sizeof(CSmartPropChoiceOption) == 0x28);
};
