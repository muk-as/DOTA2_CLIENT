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
        // Size: 0x1e8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RandomForce : public source2sdk::particles::CParticleFunctionForce
        {
        public:
            // metadata: MPropertyFriendlyName "min force"
            // metadata: MVectorIsCoordinate
            Vector m_MinForce; // 0x1d0            
            // metadata: MPropertyFriendlyName "max force"
            // metadata: MVectorIsCoordinate
            Vector m_MaxForce; // 0x1dc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RandomForce because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RandomForce) == 0x1e8);
    };
};
