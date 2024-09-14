#pragma once
#include "source2sdk/animlib/CNmBoneMaskValueNode__CDefinition.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x18
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmBoneMaskNode__CDefinition : public animlib::CNmBoneMaskValueNode__CDefinition
    {
    public:
        CGlobalSymbol m_boneMaskID; // 0x10        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmBoneMaskNode::CDefinition because it is not a standard-layout class
    static_assert(sizeof(CNmBoneMaskNode__CDefinition) == 0x18);
};
