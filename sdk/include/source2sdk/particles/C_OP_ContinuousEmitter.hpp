#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionEmitter.hpp"
#include "source2sdk/particles/EventTypeSelection_t.hpp"
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
        // Size: 0x608
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_ContinuousEmitter : public source2sdk::particles::CParticleFunctionEmitter
        {
        public:
            // metadata: MPropertyFriendlyName "emission duration"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flEmissionDuration; // 0x1c8            
            // metadata: MPropertyFriendlyName "emission start time"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flStartTime; // 0x328            
            // metadata: MPropertyFriendlyName "emission rate"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flEmitRate; // 0x488            
            // metadata: MPropertyFriendlyName "scale emission to used control points"
            // metadata: MParticleMaxVersion "1"
            float m_flEmissionScale; // 0x5e8            
            // metadata: MPropertyFriendlyName "scale emission by parent particle count"
            float m_flScalePerParentParticle; // 0x5ec            
            // metadata: MPropertyFriendlyName "emit particles for parent particle events"
            bool m_bInitFromKilledParentParticles; // 0x5f0            
            uint8_t _pad05f1[0x3]; // 0x5f1
            // metadata: MPropertyFriendlyName "emission parent particle event type"
            // metadata: MPropertySuppressExpr "m_bInitFromKilledParentParticles == false"
            source2sdk::particles::EventTypeSelection_t m_nEventType; // 0x5f4            
            // metadata: MPropertyFriendlyName "control point with snapshot data"
            std::int32_t m_nSnapshotControlPoint; // 0x5f8            
            // metadata: MPropertyFriendlyName "limit per update"
            std::int32_t m_nLimitPerUpdate; // 0x5fc            
            // metadata: MPropertyFriendlyName "force emit on first update"
            bool m_bForceEmitOnFirstUpdate; // 0x600            
            // metadata: MPropertyFriendlyName "force emit on last update"
            bool m_bForceEmitOnLastUpdate; // 0x601            
            uint8_t _pad0602[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_ContinuousEmitter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_ContinuousEmitter) == 0x608);
    };
};
