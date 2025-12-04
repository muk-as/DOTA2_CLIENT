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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_ContinuousEmitter : public source2sdk::particles::CParticleFunctionEmitter
        {
        public:
            // metadata: MPropertyFriendlyName "emission duration"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flEmissionDuration; // 0x_            
            // metadata: MPropertyFriendlyName "emission start time"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flStartTime; // 0x_            
            // metadata: MPropertyFriendlyName "emission rate"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flEmitRate; // 0x_            
            // metadata: MPropertyFriendlyName "scale emission to used control points"
            // metadata: MParticleMaxVersion "1"
            float m_flEmissionScale; // 0x_            
            // metadata: MPropertyFriendlyName "scale emission by parent particle count"
            float m_flScalePerParentParticle; // 0x_            
            // metadata: MPropertyFriendlyName "emit particles for parent particle events"
            bool m_bInitFromKilledParentParticles; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "emission parent particle event type"
            // metadata: MPropertySuppressExpr "m_bInitFromKilledParentParticles == false"
            source2sdk::particles::EventTypeSelection_t m_nEventType; // 0x_            
            // metadata: MPropertyFriendlyName "control point with snapshot data"
            std::int32_t m_nSnapshotControlPoint; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "snapshot subset"
            // metadata: MPropertySuppressExpr "m_nSnapshotControlPoint < 0"
            CUtlString m_strSnapshotSubset; // 0x_            
            // metadata: MPropertyFriendlyName "limit per update"
            std::int32_t m_nLimitPerUpdate; // 0x_            
            // metadata: MPropertyFriendlyName "force emit on first update"
            bool m_bForceEmitOnFirstUpdate; // 0x_            
            // metadata: MPropertyFriendlyName "force emit on last update"
            bool m_bForceEmitOnLastUpdate; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_ContinuousEmitter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_ContinuousEmitter) == 0x_);
    };
};
