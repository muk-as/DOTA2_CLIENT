#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/EventTypeSelection_t.hpp"
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
        class C_OP_SetUserEvent : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "input value"
            source2sdk::particleslib::CPerParticleFloatInput m_flInput; // 0x_            
            // metadata: MPropertyFriendlyName "rising edge value"
            source2sdk::particleslib::CPerParticleFloatInput m_flRisingEdge; // 0x_            
            // metadata: MPropertyFriendlyName "rising edge event type"
            source2sdk::particles::EventTypeSelection_t m_nRisingEventType; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "falling edge value"
            source2sdk::particleslib::CPerParticleFloatInput m_flFallingEdge; // 0x_            
            // metadata: MPropertyFriendlyName "falling edge event type"
            source2sdk::particles::EventTypeSelection_t m_nFallingEventType; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_SetUserEvent because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_SetUserEvent) == 0x_);
    };
};
