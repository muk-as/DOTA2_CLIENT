#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
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
        // Size: 0x270
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_SetCPOrientationToGroundNormal : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "interpolation rate"
            float m_flInterpRate; // 0x1c0            
            // metadata: MPropertyFriendlyName "max trace length"
            float m_flMaxTraceLength; // 0x1c4            
            // metadata: MPropertyFriendlyName "CP movement tolerance"
            float m_flTolerance; // 0x1c8            
            // metadata: MPropertyFriendlyName "trace offset"
            float m_flTraceOffset; // 0x1cc            
            // metadata: MPropertyFriendlyName "collision group"
            char m_CollisionGroupName[128]; // 0x1d0            
            // metadata: MPropertyFriendlyName "Trace Set"
            source2sdk::particles::ParticleTraceSet_t m_nTraceSet; // 0x250            
            // metadata: MPropertyFriendlyName "CP to trace from"
            std::int32_t m_nInputCP; // 0x254            
            // metadata: MPropertyFriendlyName "CP to set"
            std::int32_t m_nOutputCP; // 0x258            
            uint8_t _pad025c[0xc]; // 0x25c
            // metadata: MPropertyFriendlyName "include water"
            bool m_bIncludeWater; // 0x268            
            uint8_t _pad0269[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_SetCPOrientationToGroundNormal because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_SetCPOrientationToGroundNormal) == 0x270);
    };
};
