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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1e0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_WindForce : public source2sdk::particles::CParticleFunctionForce
        {
        public:
            // metadata: MPropertyFriendlyName "force to apply"
            // metadata: MVectorIsCoordinate
            Vector m_vForce; // 0x1d0            
            uint8_t _pad01dc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_WindForce because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_WindForce) == 0x1e0);
    };
};
