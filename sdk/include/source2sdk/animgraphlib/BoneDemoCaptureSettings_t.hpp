#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x20
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct BoneDemoCaptureSettings_t
    {
    public:
        // metadata: MPropertyFriendlyName "Bone"
        // metadata: MPropertyAttributeChoiceName "Bone"
        CUtlString m_boneName; // 0x0        
        // metadata: MPropertySuppressField
        float m_flErrorSplineRotationMax; // 0x8        
        // metadata: MPropertySuppressField
        float m_flErrorSplineTranslationMax; // 0xc        
        // metadata: MPropertySuppressField
        float m_flErrorSplineScaleMax; // 0x10        
        // metadata: MPropertySuppressField
        float m_flErrorQuantizationRotationMax; // 0x14        
        // metadata: MPropertySuppressField
        float m_flErrorQuantizationTranslationMax; // 0x18        
        // metadata: MPropertySuppressField
        float m_flErrorQuantizationScaleMax; // 0x1c        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(BoneDemoCaptureSettings_t, m_boneName) == 0x0);
    static_assert(offsetof(BoneDemoCaptureSettings_t, m_flErrorSplineRotationMax) == 0x8);
    static_assert(offsetof(BoneDemoCaptureSettings_t, m_flErrorSplineTranslationMax) == 0xc);
    static_assert(offsetof(BoneDemoCaptureSettings_t, m_flErrorSplineScaleMax) == 0x10);
    static_assert(offsetof(BoneDemoCaptureSettings_t, m_flErrorQuantizationRotationMax) == 0x14);
    static_assert(offsetof(BoneDemoCaptureSettings_t, m_flErrorQuantizationTranslationMax) == 0x18);
    static_assert(offsetof(BoneDemoCaptureSettings_t, m_flErrorQuantizationScaleMax) == 0x1c);
    
    static_assert(sizeof(BoneDemoCaptureSettings_t) == 0x20);
};
