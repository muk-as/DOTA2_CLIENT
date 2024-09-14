#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x10
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyArrayElementNameKey "m_sName"
    #pragma pack(push, 1)
    struct MoodAnimation_t
    {
    public:
        // metadata: MPropertyDescription "Name of the animation"
        // metadata: MPropertyAttributeEditor "VDataModelAnim( m_sModelName; include_deltas )"
        CUtlString m_sName; // 0x0        
        // metadata: MPropertyDescription "Weight of the animation, higher numbers get picked more"
        float m_flWeight; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(MoodAnimation_t, m_sName) == 0x0);
    static_assert(offsetof(MoodAnimation_t, m_flWeight) == 0x8);
    
    static_assert(sizeof(MoodAnimation_t) == 0x10);
};
