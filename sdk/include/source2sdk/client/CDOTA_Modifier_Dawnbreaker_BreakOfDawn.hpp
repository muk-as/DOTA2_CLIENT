#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Dawnbreaker_BreakOfDawn : public source2sdk::client::CDOTA_Buff
        {
        public:
            float max_dmg_pct; // 0x1888            
            float max_vision_pct; // 0x188c            
            float m_flDaytimeStart; // 0x1890            
            float m_flNighttimeStart; // 0x1894            
            bool m_bDaytimeNormal; // 0x1898            
            uint8_t _pad1899[0x3]; // 0x1899
            float day_threshold; // 0x189c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Dawnbreaker_BreakOfDawn because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Dawnbreaker_BreakOfDawn) == 0x18a0);
    };
};
