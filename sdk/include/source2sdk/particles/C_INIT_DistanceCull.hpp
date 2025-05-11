#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"

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
        // Size: 0x338
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_DistanceCull : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "control point"
            std::int32_t m_nControlPoint; // 0x1c8            
            uint8_t _pad01cc[0x4]; // 0x1cc
            // metadata: MPropertyFriendlyName "cull distance"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flDistance; // 0x1d0            
            // metadata: MPropertyFriendlyName "cull inside instead of outside"
            bool m_bCullInside; // 0x330            
            uint8_t _pad0331[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_DistanceCull because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_DistanceCull) == 0x338);
    };
};
