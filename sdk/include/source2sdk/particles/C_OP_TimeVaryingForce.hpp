#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionForce.hpp"

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
        class C_OP_TimeVaryingForce : public source2sdk::particles::CParticleFunctionForce
        {
        public:
            // metadata: MPropertyFriendlyName "time to start transition"
            float m_flStartLerpTime; // 0x_            
            // metadata: MPropertyFriendlyName "starting force"
            // metadata: MVectorIsCoordinate
            Vector m_StartingForce; // 0x_            
            // metadata: MPropertyFriendlyName "time to end transition"
            float m_flEndLerpTime; // 0x_            
            // metadata: MPropertyFriendlyName "ending force"
            // metadata: MVectorIsCoordinate
            Vector m_EndingForce; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_TimeVaryingForce because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_TimeVaryingForce) == 0x_);
    };
};
