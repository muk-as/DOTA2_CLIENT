#pragma once
#include "source2sdk/smartprops/CSmartPropVariable.hpp"
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
    // Size: 0x30
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "String"
    #pragma pack(push, 1)
    class CSmartPropVariable_String : public smartprops::CSmartPropVariable
    {
    public:
        CUtlString m_DefaultValue; // 0x28        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropVariable_String because it is not a standard-layout class
    static_assert(sizeof(CSmartPropVariable_String) == 0x30);
};
