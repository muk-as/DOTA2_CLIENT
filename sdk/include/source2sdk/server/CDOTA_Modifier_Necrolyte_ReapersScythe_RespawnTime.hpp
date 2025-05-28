#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Necrolyte_ReapersScythe_RespawnTime : public source2sdk::client::CDOTA_Buff
        {
        public:
            float hp_per_kill; // 0x1888            
            float mana_per_kill; // 0x188c            
            float hp_regen; // 0x1890            
            float mp_regen; // 0x1894            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Necrolyte_ReapersScythe_RespawnTime because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Necrolyte_ReapersScythe_RespawnTime) == 0x1898);
    };
};
