#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"

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
        // Size: 0x1f8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_CreationNoise : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c8            
            // metadata: MPropertyFriendlyName "absolute value"
            bool m_bAbsVal; // 0x1cc            
            // metadata: MPropertyFriendlyName "invert absolute value"
            bool m_bAbsValInv; // 0x1cd            
            uint8_t _pad01ce[0x2]; // 0x1ce
            // metadata: MPropertyFriendlyName "time coordinate offset"
            float m_flOffset; // 0x1d0            
            // metadata: MPropertyFriendlyName "output minimum"
            float m_flOutputMin; // 0x1d4            
            // metadata: MPropertyFriendlyName "output maximum"
            float m_flOutputMax; // 0x1d8            
            // metadata: MPropertyFriendlyName "time noise coordinate scale"
            float m_flNoiseScale; // 0x1dc            
            // metadata: MPropertyFriendlyName "spatial noise coordinate scale"
            float m_flNoiseScaleLoc; // 0x1e0            
            // metadata: MPropertyFriendlyName "spatial coordinate offset"
            // metadata: MVectorIsCoordinate
            Vector m_vecOffsetLoc; // 0x1e4            
            // metadata: MPropertyFriendlyName "world time noise coordinate scale"
            float m_flWorldTimeScale; // 0x1f0            
            uint8_t _pad01f4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_CreationNoise because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_CreationNoise) == 0x1f8);
    };
};
