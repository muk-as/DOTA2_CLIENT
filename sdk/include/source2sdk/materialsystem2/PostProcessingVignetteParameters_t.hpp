#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: materialsystem2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::materialsystem2
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x24
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct PostProcessingVignetteParameters_t
    {
    public:
        float m_flVignetteStrength; // 0x0        
        Vector2D m_vCenter; // 0x4        
        float m_flRadius; // 0xc        
        float m_flRoundness; // 0x10        
        float m_flFeather; // 0x14        
        Vector m_vColorTint; // 0x18        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(PostProcessingVignetteParameters_t, m_flVignetteStrength) == 0x0);
    static_assert(offsetof(PostProcessingVignetteParameters_t, m_vCenter) == 0x4);
    static_assert(offsetof(PostProcessingVignetteParameters_t, m_flRadius) == 0xc);
    static_assert(offsetof(PostProcessingVignetteParameters_t, m_flRoundness) == 0x10);
    static_assert(offsetof(PostProcessingVignetteParameters_t, m_flFeather) == 0x14);
    static_assert(offsetof(PostProcessingVignetteParameters_t, m_vColorTint) == 0x18);
    
    static_assert(sizeof(PostProcessingVignetteParameters_t) == 0x24);
};
