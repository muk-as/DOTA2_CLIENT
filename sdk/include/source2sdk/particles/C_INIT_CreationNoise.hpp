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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x_            
            // metadata: MPropertyFriendlyName "absolute value"
            bool m_bAbsVal; // 0x_            
            // metadata: MPropertyFriendlyName "invert absolute value"
            bool m_bAbsValInv; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "time coordinate offset"
            float m_flOffset; // 0x_            
            // metadata: MPropertyFriendlyName "output minimum"
            float m_flOutputMin; // 0x_            
            // metadata: MPropertyFriendlyName "output maximum"
            float m_flOutputMax; // 0x_            
            // metadata: MPropertyFriendlyName "time noise coordinate scale"
            float m_flNoiseScale; // 0x_            
            // metadata: MPropertyFriendlyName "spatial noise coordinate scale"
            float m_flNoiseScaleLoc; // 0x_            
            // metadata: MPropertyFriendlyName "spatial coordinate offset"
            // metadata: MVectorIsCoordinate
            Vector m_vecOffsetLoc; // 0x_            
            // metadata: MPropertyFriendlyName "world time noise coordinate scale"
            float m_flWorldTimeScale; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_CreationNoise because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_CreationNoise) == 0x_);
    };
};
