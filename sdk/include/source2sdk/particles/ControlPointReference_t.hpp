#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x14
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct ControlPointReference_t
    {
    public:
        // metadata: MPropertyFriendlyName "Control point"
        int32_t m_controlPointNameString; // 0x0        
        // metadata: MPropertyFriendlyName "Offset from control point"
        Vector m_vOffsetFromControlPoint; // 0x4        
        // metadata: MPropertyFriendlyName "Use local space offset"
        bool m_bOffsetInLocalSpace; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x11[0x3];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ControlPointReference_t, m_controlPointNameString) == 0x0);
    static_assert(offsetof(ControlPointReference_t, m_vOffsetFromControlPoint) == 0x4);
    static_assert(offsetof(ControlPointReference_t, m_bOffsetInLocalSpace) == 0x10);
    
    static_assert(sizeof(ControlPointReference_t) == 0x14);
};
