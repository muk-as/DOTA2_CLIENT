#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/CPathParameters.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x230
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_CreateAlongPath : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "maximum distance"
            float m_fMaxDistance; // 0x1c8            
            uint8_t _pad01cc[0x4]; // 0x1cc
            source2sdk::particles::CPathParameters m_PathParams; // 0x1d0            
            // metadata: MPropertyFriendlyName "randomly select sequential CP pairs between start and end points"
            bool m_bUseRandomCPs; // 0x210            
            uint8_t _pad0211[0x3]; // 0x211
            // metadata: MPropertyFriendlyName "Offset from control point for path end"
            // metadata: MVectorIsCoordinate
            Vector m_vEndOffset; // 0x214            
            // metadata: MPropertyFriendlyName "save offset"
            bool m_bSaveOffset; // 0x220            
            uint8_t _pad0221[0xf];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_CreateAlongPath because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_CreateAlongPath) == 0x230);
    };
};
