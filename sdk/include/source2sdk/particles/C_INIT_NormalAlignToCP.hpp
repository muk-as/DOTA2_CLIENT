#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/ParticleControlPointAxis_t.hpp"
#include "source2sdk/particleslib/CParticleTransformInput.hpp"

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
        // Size: 0x238
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_NormalAlignToCP : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "input"
            source2sdk::particleslib::CParticleTransformInput m_transformInput; // 0x1c8            
            // metadata: MPropertyFriendlyName "control point axis"
            source2sdk::particles::ParticleControlPointAxis_t m_nControlPointAxis; // 0x230            
            uint8_t _pad0234[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_NormalAlignToCP because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_NormalAlignToCP) == 0x238);
    };
};
