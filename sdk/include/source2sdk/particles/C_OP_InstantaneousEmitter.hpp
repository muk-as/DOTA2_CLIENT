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
        // Size: 0x5f8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_InstantaneousEmitter : public source2sdk::particles::CParticleFunctionEmitter
        {
        public:
            // metadata: MPropertyFriendlyName "num to emit"
            // metadata: MPropertyAttributeRange "1 1000"
            source2sdk::particleslib::CParticleCollectionFloatInput m_nParticlesToEmit; // 0x1c8            
            // metadata: MPropertyFriendlyName "emission start time"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flStartTime; // 0x328            
            // metadata: MPropertyFriendlyName "emission scale from parent particle events"
            float m_flInitFromKilledParentParticles; // 0x488            
            // metadata: MPropertyFriendlyName "emission parent particle event type"
            // metadata: MPropertySuppressExpr "m_flInitFromKilledParentParticles == 0"
            source2sdk::particles::EventTypeSelection_t m_nEventType; // 0x48c            
            // metadata: MPropertyFriendlyName "emission scale from parent particle count"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flParentParticleScale; // 0x490            
            // metadata: MPropertyFriendlyName "maximum emission per frame"
            std::int32_t m_nMaxEmittedPerFrame; // 0x5f0            
            // metadata: MPropertyFriendlyName "control point with snapshot data"
            std::int32_t m_nSnapshotControlPoint; // 0x5f4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_InstantaneousEmitter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_InstantaneousEmitter) == 0x5f8);
    };
};
