#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
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
        class C_OP_OscillateVector : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "oscillation rate min"
            // metadata: MVectorIsSometimesCoordinate "m_nField"
            Vector m_RateMin; // 0x_            
            // metadata: MPropertyFriendlyName "oscillation rate max"
            // metadata: MVectorIsSometimesCoordinate "m_nField"
            Vector m_RateMax; // 0x_            
            // metadata: MPropertyFriendlyName "oscillation frequency min"
            // metadata: MVectorIsSometimesCoordinate "m_nField"
            Vector m_FrequencyMin; // 0x_            
            // metadata: MPropertyFriendlyName "oscillation frequency max"
            // metadata: MVectorIsSometimesCoordinate "m_nField"
            Vector m_FrequencyMax; // 0x_            
            // metadata: MPropertyFriendlyName "oscillation field"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nField; // 0x_            
            // metadata: MPropertyFriendlyName "proportional 0/1"
            bool m_bProportional; // 0x_            
            // metadata: MPropertyFriendlyName "start/end proportional"
            bool m_bProportionalOp; // 0x_            
            // metadata: MPropertyFriendlyName "offset instead of accelerate position"
            bool m_bOffset; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "start time min"
            float m_flStartTime_min; // 0x_            
            // metadata: MPropertyFriendlyName "start time max"
            float m_flStartTime_max; // 0x_            
            // metadata: MPropertyFriendlyName "end time min"
            float m_flEndTime_min; // 0x_            
            // metadata: MPropertyFriendlyName "end time max"
            float m_flEndTime_max; // 0x_            
            // metadata: MPropertyFriendlyName "oscillation multiplier"
            source2sdk::particleslib::CPerParticleFloatInput m_flOscMult; // 0x_            
            // metadata: MPropertyFriendlyName "oscillation start phase"
            source2sdk::particleslib::CPerParticleFloatInput m_flOscAdd; // 0x_            
            // metadata: MPropertyFriendlyName "rate scale"
            source2sdk::particleslib::CPerParticleFloatInput m_flRateScale; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_OscillateVector because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_OscillateVector) == 0x_);
    };
};
