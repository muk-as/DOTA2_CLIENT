#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"

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
        class C_OP_MovementMoveAlongSkinnedCPSnapshot : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "control point number"
            std::int32_t m_nControlPointNumber; // 0x_            
            // metadata: MPropertyFriendlyName "snapshot control point number"
            std::int32_t m_nSnapshotControlPointNumber; // 0x_            
            // metadata: MPropertyFriendlyName "set normal"
            bool m_bSetNormal; // 0x_            
            // metadata: MPropertyFriendlyName "set radius"
            bool m_bSetRadius; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Interpolation"
            source2sdk::particleslib::CPerParticleFloatInput m_flInterpolation; // 0x_            
            // metadata: MPropertyFriendlyName "Snapshot Index T Value"
            source2sdk::particleslib::CPerParticleFloatInput m_flTValue; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_MovementMoveAlongSkinnedCPSnapshot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_MovementMoveAlongSkinnedCPSnapshot) == 0x_);
    };
};
