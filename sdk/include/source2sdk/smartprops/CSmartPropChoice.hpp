#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/smartprops/CSmartPropChoiceOption.hpp"
#include "source2sdk/smartprops/CSmartPropParameter.hpp"

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
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Choice"
        // static metadata: MVDataAnonymousNode
        // static metadata: MVDataOutlinerNameExpr
        #pragma pack(push, 1)
        class CSmartPropChoice : public source2sdk::smartprops::CSmartPropParameter
        {
        public:
            // metadata: MPropertyFriendlyName "Choice Name"
            CUtlString m_Name; // 0x_            
            // metadata: MPropertyAttributeChoiceName "smartprop_choice_options"
            CUtlString m_DefaultOption; // 0x_            
            // metadata: MPropertyAutoExpandSelf
            // m_Options has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::smartprops::CSmartPropChoiceOption> m_Options;
            char m_Options[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropChoice because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropChoice) == 0x_);
    };
};
