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
    // Size: 0x3c
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct PostProcessingTonemapParameters_t
    {
    public:
        float m_flExposureBias; // 0x0        
        float m_flShoulderStrength; // 0x4        
        float m_flLinearStrength; // 0x8        
        float m_flLinearAngle; // 0xc        
        float m_flToeStrength; // 0x10        
        float m_flToeNum; // 0x14        
        float m_flToeDenom; // 0x18        
        float m_flWhitePoint; // 0x1c        
        float m_flLuminanceSource; // 0x20        
        float m_flExposureBiasShadows; // 0x24        
        float m_flExposureBiasHighlights; // 0x28        
        float m_flMinShadowLum; // 0x2c        
        float m_flMaxShadowLum; // 0x30        
        float m_flMinHighlightLum; // 0x34        
        float m_flMaxHighlightLum; // 0x38        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(PostProcessingTonemapParameters_t, m_flExposureBias) == 0x0);
    static_assert(offsetof(PostProcessingTonemapParameters_t, m_flShoulderStrength) == 0x4);
    static_assert(offsetof(PostProcessingTonemapParameters_t, m_flLinearStrength) == 0x8);
    static_assert(offsetof(PostProcessingTonemapParameters_t, m_flLinearAngle) == 0xc);
    static_assert(offsetof(PostProcessingTonemapParameters_t, m_flToeStrength) == 0x10);
    static_assert(offsetof(PostProcessingTonemapParameters_t, m_flToeNum) == 0x14);
    static_assert(offsetof(PostProcessingTonemapParameters_t, m_flToeDenom) == 0x18);
    static_assert(offsetof(PostProcessingTonemapParameters_t, m_flWhitePoint) == 0x1c);
    static_assert(offsetof(PostProcessingTonemapParameters_t, m_flLuminanceSource) == 0x20);
    static_assert(offsetof(PostProcessingTonemapParameters_t, m_flExposureBiasShadows) == 0x24);
    static_assert(offsetof(PostProcessingTonemapParameters_t, m_flExposureBiasHighlights) == 0x28);
    static_assert(offsetof(PostProcessingTonemapParameters_t, m_flMinShadowLum) == 0x2c);
    static_assert(offsetof(PostProcessingTonemapParameters_t, m_flMaxShadowLum) == 0x30);
    static_assert(offsetof(PostProcessingTonemapParameters_t, m_flMinHighlightLum) == 0x34);
    static_assert(offsetof(PostProcessingTonemapParameters_t, m_flMaxHighlightLum) == 0x38);
    
    static_assert(sizeof(PostProcessingTonemapParameters_t) == 0x3c);
};
