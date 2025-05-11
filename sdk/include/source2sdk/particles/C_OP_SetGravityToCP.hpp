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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x338
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_SetGravityToCP : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "control point to sample gravity"
            std::int32_t m_nCPInput; // 0x1c8            
            // metadata: MPropertyFriendlyName "output control point"
            std::int32_t m_nCPOutput; // 0x1cc            
            // metadata: MPropertyFriendlyName "gravity scale"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flScale; // 0x1d0            
            // metadata: MPropertyFriendlyName "set orientation"
            bool m_bSetOrientation; // 0x330            
            // metadata: MPropertyFriendlyName "set gravity orientation to Z Down (instead of X)"
            // metadata: MPropertySuppressExpr "!m_bSetOrientation"
            bool m_bSetZDown; // 0x331            
            uint8_t _pad0332[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_SetGravityToCP because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_SetGravityToCP) == 0x338);
    };
};
