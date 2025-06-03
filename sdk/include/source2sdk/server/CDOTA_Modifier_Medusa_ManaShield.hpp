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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Medusa_ManaShield : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bonus_mana; // 0x1878            
            float absorption_pct; // 0x187c            
            float damage_per_mana; // 0x1880            
            float damage_per_mana_per_level; // 0x1884            
            float illusion_percentage; // 0x1888            
            uint8_t _pad188c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Medusa_ManaShield because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Medusa_ManaShield) == 0x1890);
    };
};
