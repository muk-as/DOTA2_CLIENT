#pragma once
#include "source2sdk/animlib/CNmBoolValueNode__CDefinition.hpp"
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
    class CNmConstBoolNode__CDefinition : public animlib::CNmBoolValueNode__CDefinition
    {
    public:
        bool m_bValue; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x11[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmConstBoolNode::CDefinition because it is not a standard-layout class
    static_assert(sizeof(CNmConstBoolNode__CDefinition) == 0x18);
};
