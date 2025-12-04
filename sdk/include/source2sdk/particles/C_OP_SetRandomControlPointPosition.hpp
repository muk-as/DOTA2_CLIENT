#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"

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
        class C_OP_SetRandomControlPointPosition : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "set positions in world space"
            bool m_bUseWorldLocation; // 0x_            
            // metadata: MPropertyFriendlyName "inherit CP orientation"
            bool m_bOrient; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "control point number"
            std::int32_t m_nCP1; // 0x_            
            // metadata: MPropertyFriendlyName "control point to offset positions from"
            std::int32_t m_nHeadLocation; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "re-randomize rate (-1 for once only)"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flReRandomRate; // 0x_            
            // metadata: MPropertyFriendlyName "control point min"
            Vector m_vecCPMinPos; // 0x_            
            // metadata: MPropertyFriendlyName "control point max"
            Vector m_vecCPMaxPos; // 0x_            
            // metadata: MPropertyFriendlyName "Interpolation"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flInterpolation; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_SetRandomControlPointPosition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_SetRandomControlPointPosition) == 0x_);
    };
};
