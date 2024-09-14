#pragma once
#include "source2sdk/smartprops/CSmartPropChoiceOption.hpp"
#include "source2sdk/smartprops/CSmartPropParameter.hpp"
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
    // Standard-layout class: false
    // Size: 0x38
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Choice"
    // static metadata: MVDataAnonymousNode
    // static metadata: MVDataOutlinerNameExpr
    #pragma pack(push, 1)
    class CSmartPropChoice : public smartprops::CSmartPropParameter
    {
    public:
        // metadata: MPropertyFriendlyName "Choice Name"
        CUtlString m_Name; // 0x10        
        // metadata: MPropertyAttributeChoiceName "smartprop_choice_options"
        CUtlString m_DefaultOption; // 0x18        
        // metadata: MPropertyAutoExpandSelf
        // m_Options has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<smartprops::CSmartPropChoiceOption> m_Options;
        char m_Options[0x18]; // 0x20        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropChoice because it is not a standard-layout class
    static_assert(sizeof(CSmartPropChoice) == 0x38);
};
