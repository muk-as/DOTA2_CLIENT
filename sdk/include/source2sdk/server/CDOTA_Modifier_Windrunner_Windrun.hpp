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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Windrunner_Windrun : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1888            
            std::int32_t scepter_radius; // 0x188c            
            std::int32_t movespeed_bonus_pct; // 0x1890            
            bool m_bDispellable; // 0x1894            
            uint8_t _pad1895[0x3]; // 0x1895
            std::int32_t physical_damage_pct; // 0x1898            
            uint8_t _pad189c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Windrunner_Windrun because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Windrunner_Windrun) == 0x18a0);
    };
};
