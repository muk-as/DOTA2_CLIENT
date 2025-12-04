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
        class C_OP_TurbulenceForce : public source2sdk::particles::CParticleFunctionForce
        {
        public:
            // metadata: MPropertyFriendlyName "noise scale 0"
            float m_flNoiseCoordScale0; // 0x_            
            // metadata: MPropertyFriendlyName "noise scale 1"
            float m_flNoiseCoordScale1; // 0x_            
            // metadata: MPropertyFriendlyName "noise scale 2"
            float m_flNoiseCoordScale2; // 0x_            
            // metadata: MPropertyFriendlyName "noise scale 3"
            float m_flNoiseCoordScale3; // 0x_            
            // metadata: MPropertyFriendlyName "noise amount 0"
            // metadata: MVectorIsCoordinate
            Vector m_vecNoiseAmount0; // 0x_            
            // metadata: MPropertyFriendlyName "noise amount 1"
            // metadata: MVectorIsCoordinate
            Vector m_vecNoiseAmount1; // 0x_            
            // metadata: MPropertyFriendlyName "noise amount 2"
            // metadata: MVectorIsCoordinate
            Vector m_vecNoiseAmount2; // 0x_            
            // metadata: MPropertyFriendlyName "noise amount 3"
            // metadata: MVectorIsCoordinate
            Vector m_vecNoiseAmount3; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_TurbulenceForce because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_TurbulenceForce) == 0x_);
    };
};
