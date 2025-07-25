#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/CModifierParams.hpp"

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
        // Size: 0x1968
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AntiMage_Counterspell : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::CModifierParams m_LastParams; // 0x1878            
            std::int32_t magic_resistance; // 0x1950            
            std::int32_t reflected_spell_amp; // 0x1954            
            std::int32_t mana_drain_percent; // 0x1958            
            std::int32_t damage_from_mana_drain_percent; // 0x195c            
            std::int32_t max_damage_from_mana_drain; // 0x1960            
            uint8_t _pad1964[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AntiMage_Counterspell because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_AntiMage_Counterspell) == 0x1968);
    };
};
