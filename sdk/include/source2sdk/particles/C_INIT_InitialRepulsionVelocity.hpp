#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/ParticleTraceSet_t.hpp"

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
        // Size: 0x280
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_InitialRepulsionVelocity : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "collision group"
            char m_CollisionGroupName[128]; // 0x1c8            
            // metadata: MPropertyFriendlyName "Trace Set"
            source2sdk::particles::ParticleTraceSet_t m_nTraceSet; // 0x248            
            // metadata: MPropertyFriendlyName "minimum velocity"
            // metadata: MVectorIsCoordinate
            Vector m_vecOutputMin; // 0x24c            
            // metadata: MPropertyFriendlyName "maximum velocity"
            // metadata: MVectorIsCoordinate
            Vector m_vecOutputMax; // 0x258            
            // metadata: MPropertyFriendlyName "control point number"
            std::int32_t m_nControlPointNumber; // 0x264            
            // metadata: MPropertyFriendlyName "per particle world collision tests"
            bool m_bPerParticle; // 0x268            
            // metadata: MPropertyFriendlyName "offset instead of accelerate"
            bool m_bTranslate; // 0x269            
            // metadata: MPropertyFriendlyName "offset proportional to radius 0/1"
            bool m_bProportional; // 0x26a            
            uint8_t _pad026b[0x1]; // 0x26b
            // metadata: MPropertyFriendlyName "trace length"
            float m_flTraceLength; // 0x26c            
            // metadata: MPropertyFriendlyName "use radius for per particle trace length"
            bool m_bPerParticleTR; // 0x270            
            // metadata: MPropertyFriendlyName "inherit from parent"
            bool m_bInherit; // 0x271            
            uint8_t _pad0272[0x2]; // 0x272
            // metadata: MPropertyFriendlyName "control points to broadcast to children (n + 1)"
            std::int32_t m_nChildCP; // 0x274            
            // metadata: MPropertyFriendlyName "child group ID to affect"
            std::int32_t m_nChildGroupID; // 0x278            
            uint8_t _pad027c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_InitialRepulsionVelocity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_InitialRepulsionVelocity) == 0x280);
    };
};
