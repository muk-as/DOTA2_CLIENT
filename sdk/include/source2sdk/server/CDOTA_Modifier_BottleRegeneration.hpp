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
        class CDOTA_Modifier_BottleRegeneration : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t health_restore; // 0x1878            
            std::int32_t mana_restore; // 0x187c            
            std::int32_t health_restore_pct; // 0x1880            
            std::int32_t mana_restore_pct; // 0x1884            
            std::int32_t break_on_hero_damage; // 0x1888            
            float m_fHealingDone; // 0x188c            
            float m_fUseSpeed; // 0x1890            
            uint8_t _pad1894[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_BottleRegeneration because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_BottleRegeneration) == 0x1898);
    };
};
