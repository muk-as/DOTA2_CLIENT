#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct HitReactFixedSettings_t
        {
        public:
            std::int32_t m_nWeightListIndex; // 0x_            
            std::int32_t m_nEffectedBoneCount; // 0x_            
            float m_flMaxImpactForce; // 0x_            
            float m_flMinImpactForce; // 0x_            
            float m_flWhipImpactScale; // 0x_            
            float m_flCounterRotationScale; // 0x_            
            float m_flDistanceFadeScale; // 0x_            
            float m_flPropagationScale; // 0x_            
            float m_flWhipDelay; // 0x_            
            float m_flSpringStrength; // 0x_            
            float m_flWhipSpringStrength; // 0x_            
            float m_flMaxAngleRadians; // 0x_            
            std::int32_t m_nHipBoneIndex; // 0x_            
            float m_flHipBoneTranslationScale; // 0x_            
            float m_flHipDipSpringStrength; // 0x_            
            float m_flHipDipImpactScale; // 0x_            
            float m_flHipDipDelay; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::HitReactFixedSettings_t, m_nWeightListIndex) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::HitReactFixedSettings_t, m_nEffectedBoneCount) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::HitReactFixedSettings_t, m_flMaxImpactForce) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::HitReactFixedSettings_t, m_flMinImpactForce) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::HitReactFixedSettings_t, m_flWhipImpactScale) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::HitReactFixedSettings_t, m_flCounterRotationScale) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::HitReactFixedSettings_t, m_flDistanceFadeScale) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::HitReactFixedSettings_t, m_flPropagationScale) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::HitReactFixedSettings_t, m_flWhipDelay) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::HitReactFixedSettings_t, m_flSpringStrength) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::HitReactFixedSettings_t, m_flWhipSpringStrength) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::HitReactFixedSettings_t, m_flMaxAngleRadians) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::HitReactFixedSettings_t, m_nHipBoneIndex) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::HitReactFixedSettings_t, m_flHipBoneTranslationScale) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::HitReactFixedSettings_t, m_flHipDipSpringStrength) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::HitReactFixedSettings_t, m_flHipDipImpactScale) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::HitReactFixedSettings_t, m_flHipDipDelay) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::HitReactFixedSettings_t) == 0x_);
    };
};
