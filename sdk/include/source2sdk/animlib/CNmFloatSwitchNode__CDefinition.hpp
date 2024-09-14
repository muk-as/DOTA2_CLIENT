#pragma once
#include "source2sdk/animlib/CNmFloatValueNode__CDefinition.hpp"
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
    class CNmFloatSwitchNode__CDefinition : public animlib::CNmFloatValueNode__CDefinition
    {
    public:
        int16_t m_nSwitchValueNodeIdx; // 0x10        
        int16_t m_nTrueValueNodeIdx; // 0x12        
        int16_t m_nFalseValueNodeIdx; // 0x14        
        [[maybe_unused]] std::uint8_t pad_0x16[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmFloatSwitchNode::CDefinition because it is not a standard-layout class
    static_assert(sizeof(CNmFloatSwitchNode__CDefinition) == 0x18);
};
