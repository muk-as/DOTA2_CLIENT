#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
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
        class C_OP_GameLiquidSpill : public source2sdk::particles::CParticleFunctionRenderer
        {
        public:
            // metadata: MPropertyFriendlyName "Liquid Contents ( negative for water, positive for oil, zero for noop )"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flLiquidContentsField; // 0x_            
            // metadata: MPropertyFriendlyName "Expiration Time (seconds)"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flExpirationTime; // 0x_            
            // metadata: MPropertyFriendlyName "Attribute for Contribution Amount"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nAmountAttribute; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_GameLiquidSpill because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_GameLiquidSpill) == 0x_);
    };
};
