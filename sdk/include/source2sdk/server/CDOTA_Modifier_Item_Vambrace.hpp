#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Buff_Item.hpp"

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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Vambrace : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_primary_stat; // 0x1888            
            std::int32_t bonus_secondary_stat; // 0x188c            
            std::int32_t bonus_magic_resistance; // 0x1890            
            std::int32_t bonus_spell_amp; // 0x1894            
            std::int32_t bonus_attack_speed; // 0x1898            
            std::int32_t m_iStat; // 0x189c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Vambrace because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Vambrace) == 0x18a0);
    };
};
