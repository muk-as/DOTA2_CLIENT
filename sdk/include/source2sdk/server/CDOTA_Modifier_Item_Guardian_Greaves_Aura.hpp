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
        class CDOTA_Modifier_Item_Guardian_Greaves_Aura : public source2sdk::client::CDOTA_Buff
        {
        public:
            float aura_health_regen; // 0x1878            
            float aura_armor; // 0x187c            
            float aura_health_regen_bonus; // 0x1880            
            float aura_armor_bonus; // 0x1884            
            float aura_mana_regen; // 0x1888            
            float aura_mana_regen_bonus; // 0x188c            
            std::int32_t aura_bonus_threshold; // 0x1890            
            uint8_t _pad1894[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Guardian_Greaves_Aura because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Guardian_Greaves_Aura) == 0x1898);
    };
};
