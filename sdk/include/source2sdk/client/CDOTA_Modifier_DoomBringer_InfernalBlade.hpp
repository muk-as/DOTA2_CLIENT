#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1888
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_DoomBringer_InfernalBlade : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bInfernalBladeAttack; // 0x1878            
            uint8_t _pad1879[0x3]; // 0x1879
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x187c            
            float burn_duration; // 0x1880            
            float ministun_duration; // 0x1884            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_DoomBringer_InfernalBlade because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_DoomBringer_InfernalBlade) == 0x1888);
    };
};
