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
        // Size: 0x1818
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Sven_GreatCleave : public source2sdk::client::CDOTA_Buff
        {
        public:
            float cleave_starting_width; // 0x17f8            
            float cleave_ending_width; // 0x17fc            
            float cleave_distance; // 0x1800            
            float great_cleave_damage; // 0x1804            
            std::int32_t strength_bonus; // 0x1808            
            std::int16_t m_nLastCleaveRecord; // 0x180c            
            uint8_t _pad180e[0x2]; // 0x180e
            std::int32_t m_nLastCleaveKills; // 0x1810            
            uint8_t _pad1814[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Sven_GreatCleave because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Sven_GreatCleave) == 0x1818);
    };
};
