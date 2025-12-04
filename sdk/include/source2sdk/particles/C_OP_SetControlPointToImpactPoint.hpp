#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
#include "source2sdk/particles/ParticleTraceSet_t.hpp"
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
        class C_OP_SetControlPointToImpactPoint : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "control point to set"
            std::int32_t m_nCPOut; // 0x_            
            // metadata: MPropertyFriendlyName "control point to trace from"
            std::int32_t m_nCPIn; // 0x_            
            // metadata: MPropertyFriendlyName "trace update rate"
            float m_flUpdateRate; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "max trace length"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flTraceLength; // 0x_            
            // metadata: MPropertyFriendlyName "offset start point amount"
            float m_flStartOffset; // 0x_            
            // metadata: MPropertyFriendlyName "offset end point amount"
            float m_flOffset; // 0x_            
            // metadata: MPropertyFriendlyName "trace direction override"
            // metadata: MVectorIsCoordinate
            Vector m_vecTraceDir; // 0x_            
            // metadata: MPropertyFriendlyName "trace collision group"
            char m_CollisionGroupName[128]; // 0x_            
            // metadata: MPropertyFriendlyName "Trace Set"
            source2sdk::particles::ParticleTraceSet_t m_nTraceSet; // 0x_            
            // metadata: MPropertyFriendlyName "set to trace endpoint if no collision"
            bool m_bSetToEndpoint; // 0x_            
            // metadata: MPropertyFriendlyName "trace to closest surface along all cardinal directions"
            bool m_bTraceToClosestSurface; // 0x_            
            // metadata: MPropertyFriendlyName "include water"
            bool m_bIncludeWater; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_SetControlPointToImpactPoint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_SetControlPointToImpactPoint) == 0x_);
    };
};
