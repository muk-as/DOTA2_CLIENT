#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC_Creep.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1a28
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Unit_Brewmaster_PrimalStorm : public source2sdk::client::C_DOTA_BaseNPC_Creep
        {
        public:
            source2sdk::client::ParticleIndex_t m_nFXStormAmbient1; // 0x1a20            
            source2sdk::client::ParticleIndex_t m_nFXStormAmbient2; // 0x1a24            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Unit_Brewmaster_PrimalStorm because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Unit_Brewmaster_PrimalStorm) == 0x1a28);
    };
};
