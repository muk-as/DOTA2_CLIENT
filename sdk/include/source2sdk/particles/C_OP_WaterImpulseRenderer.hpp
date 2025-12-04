#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/EventTypeSelection_t.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"
#include "source2sdk/particleslib/CPerParticleVecInput.hpp"

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
        class C_OP_WaterImpulseRenderer : public source2sdk::particles::CParticleFunctionRenderer
        {
        public:
            // metadata: MPropertyFriendlyName "impulse position"
            source2sdk::particleslib::CPerParticleVecInput m_vecPos; // 0x_            
            // metadata: MPropertyFriendlyName "impulse radius"
            source2sdk::particleslib::CPerParticleFloatInput m_flRadius; // 0x_            
            // metadata: MPropertyFriendlyName "impulse magnitude"
            source2sdk::particleslib::CPerParticleFloatInput m_flMagnitude; // 0x_            
            // metadata: MPropertyFriendlyName "impulse wave roundness"
            source2sdk::particleslib::CPerParticleFloatInput m_flShape; // 0x_            
            // metadata: MPropertyFriendlyName "impulse wind speed (when wind is true)"
            source2sdk::particleslib::CPerParticleFloatInput m_flWindSpeed; // 0x_            
            // metadata: MPropertyFriendlyName "impulse wobble radius"
            source2sdk::particleslib::CPerParticleFloatInput m_flWobble; // 0x_            
            // metadata: MPropertyFriendlyName "impulse is wind"
            bool m_bIsRadialWind; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "event type"
            source2sdk::particles::EventTypeSelection_t m_nEventType; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_WaterImpulseRenderer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_WaterImpulseRenderer) == 0x_);
    };
};
