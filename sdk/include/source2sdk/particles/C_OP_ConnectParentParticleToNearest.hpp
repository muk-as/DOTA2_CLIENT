#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
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
        // Size: 0x490
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_ConnectParentParticleToNearest : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "control point to set"
            std::int32_t m_nFirstControlPoint; // 0x1c0            
            // metadata: MPropertyFriendlyName "Second Control point to set"
            std::int32_t m_nSecondControlPoint; // 0x1c4            
            // metadata: MPropertyFriendlyName "Take radius into account for distance"
            bool m_bUseRadius; // 0x1c8            
            uint8_t _pad01c9[0x7]; // 0x1c9
            // metadata: MPropertyFriendlyName "Radius scale for distance calc"
            // metadata: MPropertySuppressExpr "!m_bUseRadius"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flRadiusScale; // 0x1d0            
            // metadata: MPropertyFriendlyName "Parent radius scale for distance calc"
            // metadata: MPropertySuppressExpr "!m_bUseRadius"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flParentRadiusScale; // 0x330            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_ConnectParentParticleToNearest because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_ConnectParentParticleToNearest) == 0x490);
    };
};
