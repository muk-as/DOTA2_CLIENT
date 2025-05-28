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
        // Size: 0x18e0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Mjollnir : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_damage; // 0x1888            
            std::int32_t bonus_attack_speed; // 0x188c            
            std::int32_t chain_chance; // 0x1890            
            std::int32_t chain_strikes; // 0x1894            
            std::int32_t chain_damage; // 0x1898            
            std::int32_t chain_radius; // 0x189c            
            std::int32_t chain_damage_per_charge; // 0x18a0            
            std::int32_t max_charges; // 0x18a4            
            float chain_cooldown; // 0x18a8            
            uint8_t _pad18ac[0x4]; // 0x18ac
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x18]; // 0x18b0            
            source2sdk::client::CountdownTimer m_ChainTimer; // 0x18c8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Mjollnir because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Mjollnir) == 0x18e0);
    };
};
