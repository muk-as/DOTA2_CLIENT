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
        // Size: 0x1888
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AntiMage_ManaBreak : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t percent_damage_per_burn; // 0x1878            
            std::int32_t mana_per_hit; // 0x187c            
            float mana_per_hit_pct; // 0x1880            
            uint8_t _pad1884[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AntiMage_ManaBreak because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_AntiMage_ManaBreak) == 0x1888);
    };
};
