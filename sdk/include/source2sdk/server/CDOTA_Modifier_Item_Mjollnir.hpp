#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Buff_Item.hpp"
#include "source2sdk/server/CountdownTimer.hpp"

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
        // Size: 0x1850
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Mjollnir : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_damage; // 0x17f8            
            std::int32_t bonus_attack_speed; // 0x17fc            
            std::int32_t chain_chance; // 0x1800            
            std::int32_t chain_strikes; // 0x1804            
            std::int32_t chain_damage; // 0x1808            
            std::int32_t chain_radius; // 0x180c            
            std::int32_t chain_damage_per_charge; // 0x1810            
            std::int32_t max_charges; // 0x1814            
            float chain_cooldown; // 0x1818            
            uint8_t _pad181c[0x4]; // 0x181c
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x18]; // 0x1820            
            source2sdk::server::CountdownTimer m_ChainTimer; // 0x1838            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Mjollnir because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Mjollnir) == 0x1850);
    };
};
