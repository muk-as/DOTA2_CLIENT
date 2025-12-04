#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace smartprops
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSmartPropChoiceOption
        {
        public:
            // metadata: MPropertyFriendlyName "Option Value Name"
            CUtlString m_Name; // 0x_            
            // metadata: MPropertyFriendlyName "Option Display Name"
            CUtlString m_DisplayName; // 0x_            
            // metadata: MPropertyAutoExpandSelf
            // metadata: MPropertyAttributeEditor "SmartPropAttributeEditor(VariableValue)"
            // m_VariableValues has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CSmartPropAttributeVariableValue> m_VariableValues;
            char m_VariableValues[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::smartprops::CSmartPropChoiceOption, m_Name) == 0x_);
        static_assert(offsetof(source2sdk::smartprops::CSmartPropChoiceOption, m_DisplayName) == 0x_);
        static_assert(offsetof(source2sdk::smartprops::CSmartPropChoiceOption, m_VariableValues) == 0x_);
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropChoiceOption) == 0x_);
    };
};
