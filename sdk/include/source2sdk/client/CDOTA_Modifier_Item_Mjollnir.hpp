#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff_Item.hpp"
#include "source2sdk/client/CountdownTimer.hpp"

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
        class CDOTA_Modifier_Item_Mjollnir : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_damage; // 0x1878            
            std::int32_t bonus_attack_speed; // 0x187c            
            std::int32_t chain_chance; // 0x1880            
            std::int32_t chain_strikes; // 0x1884            
            std::int32_t chain_damage; // 0x1888            
            std::int32_t chain_radius; // 0x188c            
            std::int32_t chain_damage_per_charge; // 0x1890            
            std::int32_t max_charges; // 0x1894            
            float chain_cooldown; // 0x1898            
            uint8_t _pad189c[0x4]; // 0x189c
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x18]; // 0x18a0            
            source2sdk::client::CountdownTimer m_ChainTimer; // 0x18b8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Mjollnir because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Mjollnir) == 0x18d0);
    };
};
