#pragma once
#include "source2sdk/materialsystem2/BloomBlendMode_t.hpp"
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
    // Size: 0x70
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct PostProcessingBloomParameters_t
    {
    public:
        materialsystem2::BloomBlendMode_t m_blendMode; // 0x0        
        float m_flBloomStrength; // 0x4        
        float m_flScreenBloomStrength; // 0x8        
        float m_flBlurBloomStrength; // 0xc        
        float m_flBloomThreshold; // 0x10        
        float m_flBloomThresholdWidth; // 0x14        
        float m_flSkyboxBloomStrength; // 0x18        
        float m_flBloomStartValue; // 0x1c        
        float m_flBlurWeight[5]; // 0x20        
        Vector m_vBlurTint[5]; // 0x34        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(PostProcessingBloomParameters_t, m_blendMode) == 0x0);
    static_assert(offsetof(PostProcessingBloomParameters_t, m_flBloomStrength) == 0x4);
    static_assert(offsetof(PostProcessingBloomParameters_t, m_flScreenBloomStrength) == 0x8);
    static_assert(offsetof(PostProcessingBloomParameters_t, m_flBlurBloomStrength) == 0xc);
    static_assert(offsetof(PostProcessingBloomParameters_t, m_flBloomThreshold) == 0x10);
    static_assert(offsetof(PostProcessingBloomParameters_t, m_flBloomThresholdWidth) == 0x14);
    static_assert(offsetof(PostProcessingBloomParameters_t, m_flSkyboxBloomStrength) == 0x18);
    static_assert(offsetof(PostProcessingBloomParameters_t, m_flBloomStartValue) == 0x1c);
    static_assert(offsetof(PostProcessingBloomParameters_t, m_flBlurWeight) == 0x20);
    static_assert(offsetof(PostProcessingBloomParameters_t, m_vBlurTint) == 0x34);
    
    static_assert(sizeof(PostProcessingBloomParameters_t) == 0x70);
};
