#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x4d8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RenderClientPhysicsImpulse : public source2sdk::particles::CParticleFunctionRenderer
        {
        public:
            // metadata: MPropertyFriendlyName "radius"
            source2sdk::particleslib::CPerParticleFloatInput m_flRadius; // 0x210            
            // metadata: MPropertyFriendlyName "magnitude"
            source2sdk::particleslib::CPerParticleFloatInput m_flMagnitude; // 0x370            
            // metadata: MPropertyFriendlyName "filter explosion to single simulation id"
            std::int32_t m_nSimIdFilter; // 0x4d0            
            uint8_t _pad04d4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RenderClientPhysicsImpulse because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RenderClientPhysicsImpulse) == 0x4d8);
    };
};
