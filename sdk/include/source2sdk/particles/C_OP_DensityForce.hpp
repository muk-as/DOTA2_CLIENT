#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionForce.hpp"

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
        // Size: 0x1e0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_DensityForce : public source2sdk::particles::CParticleFunctionForce
        {
        public:
            // metadata: MPropertyFriendlyName "Radius scale for particle influence"
            float m_flRadiusScale; // 0x1d0            
            // metadata: MPropertyFriendlyName "Scale of force"
            float m_flForceScale; // 0x1d4            
            // metadata: MPropertyFriendlyName "Target density"
            float m_flTargetDensity; // 0x1d8            
            uint8_t _pad01dc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_DensityForce because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_DensityForce) == 0x1e0);
    };
};
