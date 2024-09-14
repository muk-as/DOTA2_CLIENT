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
    struct PointDefinition_t
    {
    public:
        // metadata: MPropertyFriendlyName "Control point"
        int32_t m_nControlPoint; // 0x0        
        // metadata: MPropertyFriendlyName "Use local coordinates for offset"
        bool m_bLocalCoords; // 0x4        
        [[maybe_unused]] std::uint8_t pad_0x05[0x3]; // 0x5
        // metadata: MPropertyFriendlyName "Offset from control point"
        Vector m_vOffset; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(PointDefinition_t, m_nControlPoint) == 0x0);
    static_assert(offsetof(PointDefinition_t, m_bLocalCoords) == 0x4);
    static_assert(offsetof(PointDefinition_t, m_vOffset) == 0x8);
    
    static_assert(sizeof(PointDefinition_t) == 0x14);
};
