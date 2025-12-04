#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RepeatedTriggerChildGroup : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "group ID to affect"
            std::int32_t m_nChildGroupID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Within-Cluster Refire Time"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flClusterRefireTime; // 0x_            
            // metadata: MPropertyFriendlyName "Within-Cluster Fire Count Before Cooldown"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flClusterSize; // 0x_            
            // metadata: MPropertyFriendlyName "Cluster Cooldown Time"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flClusterCooldown; // 0x_            
            // metadata: MPropertyFriendlyName "limit active children to parent particle count"
            bool m_bLimitChildCount; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RepeatedTriggerChildGroup because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RepeatedTriggerChildGroup) == 0x_);
    };
};
