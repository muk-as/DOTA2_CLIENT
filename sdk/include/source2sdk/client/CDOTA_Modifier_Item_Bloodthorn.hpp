#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff_Item.hpp"

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
        // Size: 0x18d0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Bloodthorn : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x18]; // 0x1888            
            std::int32_t bonus_intellect; // 0x18a0            
            float bonus_mana_regen; // 0x18a4            
            std::int32_t bonus_damage; // 0x18a8            
            std::int32_t bonus_attack_speed; // 0x18ac            
            std::int32_t spell_amp; // 0x18b0            
            std::int32_t mana_regen_multiplier; // 0x18b4            
            std::int32_t bonus_magic_resist; // 0x18b8            
            float duration; // 0x18bc            
            std::int32_t passive_proc_damage; // 0x18c0            
            std::int32_t proc_chance; // 0x18c4            
            float bonus_health_regen; // 0x18c8            
            uint8_t _pad18cc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Bloodthorn because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Bloodthorn) == 0x18d0);
    };
};
