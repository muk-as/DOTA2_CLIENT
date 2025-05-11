#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/SnapshotIndexType_t.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x8b8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_MovementSkinnedPositionFromCPSnapshot : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "snapshot control point number"
            std::int32_t m_nSnapshotControlPointNumber; // 0x1c0            
            // metadata: MPropertyFriendlyName "control point number"
            std::int32_t m_nControlPointNumber; // 0x1c4            
            // metadata: MPropertyFriendlyName "random order"
            bool m_bRandom; // 0x1c8            
            uint8_t _pad01c9[0x3]; // 0x1c9
            // metadata: MPropertyFriendlyName "random seed"
            std::int32_t m_nRandomSeed; // 0x1cc            
            // metadata: MPropertyFriendlyName "set normal"
            bool m_bSetNormal; // 0x1d0            
            // metadata: MPropertyFriendlyName "set radius"
            bool m_bSetRadius; // 0x1d1            
            uint8_t _pad01d2[0x2]; // 0x1d2
            // metadata: MPropertyFriendlyName "Snapshot Read Type"
            source2sdk::particles::SnapshotIndexType_t m_nIndexType; // 0x1d4            
            // metadata: MPropertyFriendlyName "Snapshot Index"
            // metadata: MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_DIRECT"
            source2sdk::particleslib::CPerParticleFloatInput m_flReadIndex; // 0x1d8            
            // metadata: MPropertyFriendlyName "particle increment amount"
            // metadata: MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_INCREMENT"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flIncrement; // 0x338            
            // metadata: MPropertyFriendlyName "Full Loop Increment Amount"
            // metadata: MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_INCREMENT"
            source2sdk::particleslib::CParticleCollectionFloatInput m_nFullLoopIncrement; // 0x498            
            // metadata: MPropertyFriendlyName "Snapshot start point"
            // metadata: MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_INCREMENT"
            source2sdk::particleslib::CParticleCollectionFloatInput m_nSnapShotStartPoint; // 0x5f8            
            // metadata: MPropertyFriendlyName "Interpolation"
            source2sdk::particleslib::CPerParticleFloatInput m_flInterpolation; // 0x758            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_MovementSkinnedPositionFromCPSnapshot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_MovementSkinnedPositionFromCPSnapshot) == 0x8b8);
    };
};
