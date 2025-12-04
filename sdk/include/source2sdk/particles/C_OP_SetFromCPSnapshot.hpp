#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
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
        class C_OP_SetFromCPSnapshot : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "snapshot control point number"
            std::int32_t m_nControlPointNumber; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "snapshot subset"
            // metadata: MPropertySuppressExpr "m_nControlPointNumber < 0"
            CUtlString m_strSnapshotSubset; // 0x_            
            // metadata: MPropertyFriendlyName "field to read"
            // metadata: MPropertyAttributeChoiceName "particlefield"
            source2sdk::particles::ParticleAttributeIndex_t m_nAttributeToRead; // 0x_            
            // metadata: MPropertyFriendlyName "field to write"
            // metadata: MPropertyAttributeChoiceName "particlefield"
            source2sdk::particles::ParticleAttributeIndex_t m_nAttributeToWrite; // 0x_            
            // metadata: MPropertyFriendlyName "local space control point number"
            std::int32_t m_nLocalSpaceCP; // 0x_            
            // metadata: MPropertyFriendlyName "random order"
            bool m_bRandom; // 0x_            
            // metadata: MPropertyFriendlyName "reverse order"
            bool m_bReverse; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "random seed"
            std::int32_t m_nRandomSeed; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Snapshot start point"
            source2sdk::particleslib::CParticleCollectionFloatInput m_nSnapShotStartPoint; // 0x_            
            // metadata: MPropertyFriendlyName "Snapshot increment amount"
            source2sdk::particleslib::CParticleCollectionFloatInput m_nSnapShotIncrement; // 0x_            
            // metadata: MPropertyFriendlyName "Interpolation"
            source2sdk::particleslib::CPerParticleFloatInput m_flInterpolation; // 0x_            
            // metadata: MPropertyFriendlyName "Sub-Sample Between Input Points"
            bool m_bSubSample; // 0x_            
            // metadata: MPropertyFriendlyName "Position also sets Previous Position"
            bool m_bPrev; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_SetFromCPSnapshot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_SetFromCPSnapshot) == 0x_);
    };
};
