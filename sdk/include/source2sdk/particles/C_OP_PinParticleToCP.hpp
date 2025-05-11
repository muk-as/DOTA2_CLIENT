#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticlePinDistance_t.hpp"
#include "source2sdk/particles/ParticleSelection_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"

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
        // Size: 0x1098
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_PinParticleToCP : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "control point number"
            std::int32_t m_nControlPointNumber; // 0x1c0            
            uint8_t _pad01c4[0x4]; // 0x1c4
            // metadata: MPropertyFriendlyName "offset"
            source2sdk::particleslib::CParticleCollectionVecInput m_vecOffset; // 0x1c8            
            // metadata: MPropertyFriendlyName "offset in local space"
            bool m_bOffsetLocal; // 0x840            
            uint8_t _pad0841[0x3]; // 0x841
            // metadata: MPropertyFriendlyName "particle to use"
            source2sdk::particles::ParticleSelection_t m_nParticleSelection; // 0x844            
            // metadata: MPropertyFriendlyName "particle number/offset"
            source2sdk::particleslib::CParticleCollectionFloatInput m_nParticleNumber; // 0x848            
            // metadata: MPropertyFriendlyName "pin break type"
            source2sdk::particles::ParticlePinDistance_t m_nPinBreakType; // 0x9a8            
            uint8_t _pad09ac[0x4]; // 0x9ac
            // metadata: MPropertyFriendlyName "break length %"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flBreakDistance; // 0x9b0            
            // metadata: MPropertyFriendlyName "break speed"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flBreakSpeed; // 0xb10            
            // metadata: MPropertyFriendlyName "break age"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flAge; // 0xc70            
            // metadata: MPropertyFriendlyName "break comparison control point 1"
            std::int32_t m_nBreakControlPointNumber; // 0xdd0            
            // metadata: MPropertyFriendlyName "break comparison control point 2"
            std::int32_t m_nBreakControlPointNumber2; // 0xdd4            
            // metadata: MPropertyFriendlyName "break value"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flBreakValue; // 0xdd8            
            // metadata: MPropertyFriendlyName "Interpolation"
            source2sdk::particleslib::CPerParticleFloatInput m_flInterpolation; // 0xf38            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_PinParticleToCP because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_PinParticleToCP) == 0x1098);
    };
};
