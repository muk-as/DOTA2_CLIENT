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
    // Size: 0x14
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct PostProcessingLocalContrastParameters_t
    {
    public:
        float m_flLocalContrastStrength; // 0x0        
        float m_flLocalContrastEdgeStrength; // 0x4        
        float m_flLocalContrastVignetteStart; // 0x8        
        float m_flLocalContrastVignetteEnd; // 0xc        
        float m_flLocalContrastVignetteBlur; // 0x10        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(PostProcessingLocalContrastParameters_t, m_flLocalContrastStrength) == 0x0);
    static_assert(offsetof(PostProcessingLocalContrastParameters_t, m_flLocalContrastEdgeStrength) == 0x4);
    static_assert(offsetof(PostProcessingLocalContrastParameters_t, m_flLocalContrastVignetteStart) == 0x8);
    static_assert(offsetof(PostProcessingLocalContrastParameters_t, m_flLocalContrastVignetteEnd) == 0xc);
    static_assert(offsetof(PostProcessingLocalContrastParameters_t, m_flLocalContrastVignetteBlur) == 0x10);
    
    static_assert(sizeof(PostProcessingLocalContrastParameters_t) == 0x14);
};
