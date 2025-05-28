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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Sven_GreatCleave : public source2sdk::client::CDOTA_Buff
        {
        public:
            float cleave_starting_width; // 0x1888            
            float cleave_ending_width; // 0x188c            
            float cleave_distance; // 0x1890            
            float great_cleave_damage; // 0x1894            
            std::int32_t strength_bonus; // 0x1898            
            std::int16_t m_nLastCleaveRecord; // 0x189c            
            uint8_t _pad189e[0x2]; // 0x189e
            std::int32_t m_nLastCleaveKills; // 0x18a0            
            uint8_t _pad18a4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Sven_GreatCleave because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Sven_GreatCleave) == 0x18a8);
    };
};
