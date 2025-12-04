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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_LifespanFromVelocity : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "bias distance"
            // metadata: MVectorIsCoordinate
            Vector m_vecComponentScale; // 0x_            
            // metadata: MPropertyFriendlyName "trace offset"
            float m_flTraceOffset; // 0x_            
            // metadata: MPropertyFriendlyName "maximum trace length"
            float m_flMaxTraceLength; // 0x_            
            // metadata: MPropertyFriendlyName "trace recycle tolerance"
            float m_flTraceTolerance; // 0x_            
            // metadata: MPropertyFriendlyName "maximum points to cache"
            std::int32_t m_nMaxPlanes; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "trace collision group"
            char m_CollisionGroupName[128]; // 0x_            
            // metadata: MPropertyFriendlyName "Trace Set"
            source2sdk::particles::ParticleTraceSet_t m_nTraceSet; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "collide with water"
            bool m_bIncludeWater; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_LifespanFromVelocity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_LifespanFromVelocity) == 0x_);
    };
};
