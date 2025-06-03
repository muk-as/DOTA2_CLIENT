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
        // Size: 0x18b8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Voidwalker_Phased : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t damage; // 0x1878            
            float max_damage_duration; // 0x187c            
            std::int32_t attack_range_bonus; // 0x1880            
            uint8_t _pad1884[0x4]; // 0x1884
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x18]; // 0x1888            
            bool bAttackRange; // 0x18a0            
            uint8_t _pad18a1[0x3]; // 0x18a1
            float m_flStartTime; // 0x18a4            
            float m_flFadeTime; // 0x18a8            
            float m_flDamageScale; // 0x18ac            
            float duration; // 0x18b0            
            uint8_t _pad18b4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Voidwalker_Phased because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Voidwalker_Phased) == 0x18b8);
    };
};
