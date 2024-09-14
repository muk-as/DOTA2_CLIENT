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
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x44
    // Has Trivial Constructor
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct HitReactFixedSettings_t
    {
    public:
        int32_t m_nWeightListIndex; // 0x0        
        int32_t m_nEffectedBoneCount; // 0x4        
        float m_flMaxImpactForce; // 0x8        
        float m_flMinImpactForce; // 0xc        
        float m_flWhipImpactScale; // 0x10        
        float m_flCounterRotationScale; // 0x14        
        float m_flDistanceFadeScale; // 0x18        
        float m_flPropagationScale; // 0x1c        
        float m_flWhipDelay; // 0x20        
        float m_flSpringStrength; // 0x24        
        float m_flWhipSpringStrength; // 0x28        
        float m_flMaxAngleRadians; // 0x2c        
        int32_t m_nHipBoneIndex; // 0x30        
        float m_flHipBoneTranslationScale; // 0x34        
        float m_flHipDipSpringStrength; // 0x38        
        float m_flHipDipImpactScale; // 0x3c        
        float m_flHipDipDelay; // 0x40        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(HitReactFixedSettings_t, m_nWeightListIndex) == 0x0);
    static_assert(offsetof(HitReactFixedSettings_t, m_nEffectedBoneCount) == 0x4);
    static_assert(offsetof(HitReactFixedSettings_t, m_flMaxImpactForce) == 0x8);
    static_assert(offsetof(HitReactFixedSettings_t, m_flMinImpactForce) == 0xc);
    static_assert(offsetof(HitReactFixedSettings_t, m_flWhipImpactScale) == 0x10);
    static_assert(offsetof(HitReactFixedSettings_t, m_flCounterRotationScale) == 0x14);
    static_assert(offsetof(HitReactFixedSettings_t, m_flDistanceFadeScale) == 0x18);
    static_assert(offsetof(HitReactFixedSettings_t, m_flPropagationScale) == 0x1c);
    static_assert(offsetof(HitReactFixedSettings_t, m_flWhipDelay) == 0x20);
    static_assert(offsetof(HitReactFixedSettings_t, m_flSpringStrength) == 0x24);
    static_assert(offsetof(HitReactFixedSettings_t, m_flWhipSpringStrength) == 0x28);
    static_assert(offsetof(HitReactFixedSettings_t, m_flMaxAngleRadians) == 0x2c);
    static_assert(offsetof(HitReactFixedSettings_t, m_nHipBoneIndex) == 0x30);
    static_assert(offsetof(HitReactFixedSettings_t, m_flHipBoneTranslationScale) == 0x34);
    static_assert(offsetof(HitReactFixedSettings_t, m_flHipDipSpringStrength) == 0x38);
    static_assert(offsetof(HitReactFixedSettings_t, m_flHipDipImpactScale) == 0x3c);
    static_assert(offsetof(HitReactFixedSettings_t, m_flHipDipDelay) == 0x40);
    
    static_assert(sizeof(HitReactFixedSettings_t) == 0x44);
};
