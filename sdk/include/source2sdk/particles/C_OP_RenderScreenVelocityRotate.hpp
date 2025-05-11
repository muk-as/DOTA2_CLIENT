#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"

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
        // Size: 0x218
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MObsoleteParticleFunction
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RenderScreenVelocityRotate : public source2sdk::particles::CParticleFunctionRenderer
        {
        public:
            // metadata: MPropertyFriendlyName "rotate rate(dps)"
            float m_flRotateRateDegrees; // 0x210            
            // metadata: MPropertyFriendlyName "forward angle"
            float m_flForwardDegrees; // 0x214            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RenderScreenVelocityRotate because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RenderScreenVelocityRotate) == 0x218);
    };
};
