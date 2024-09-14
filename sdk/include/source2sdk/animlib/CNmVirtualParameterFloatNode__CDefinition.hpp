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
    class CNmVirtualParameterFloatNode__CDefinition : public animlib::CNmFloatValueNode__CDefinition
    {
    public:
        int16_t m_nChildNodeIdx; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x12[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmVirtualParameterFloatNode::CDefinition because it is not a standard-layout class
    static_assert(sizeof(CNmVirtualParameterFloatNode__CDefinition) == 0x18);
};
