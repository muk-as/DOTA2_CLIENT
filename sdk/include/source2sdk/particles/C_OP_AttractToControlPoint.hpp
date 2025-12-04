#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionForce.hpp"
#include "source2sdk/particleslib/CParticleTransformInput.hpp"
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
        class C_OP_AttractToControlPoint : public source2sdk::particles::CParticleFunctionForce
        {
        public:
            // metadata: MPropertyFriendlyName "component scale"
            // metadata: MVectorIsCoordinate
            Vector m_vecComponentScale; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "amount of force (or Max Force)"
            source2sdk::particleslib::CPerParticleFloatInput m_fForceAmount; // 0x_            
            // metadata: MPropertyFriendlyName "falloff power"
            float m_fFalloffPower; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "input position transform"
            source2sdk::particleslib::CParticleTransformInput m_TransformInput; // 0x_            
            // metadata: MPropertyFriendlyName "Min Pullforce"
            source2sdk::particleslib::CPerParticleFloatInput m_fForceAmountMin; // 0x_            
            // metadata: MPropertyFriendlyName "Apply Min Pullforce"
            bool m_bApplyMinForce; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_AttractToControlPoint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_AttractToControlPoint) == 0x_);
    };
};
