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
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Sven_GreatCleave : public source2sdk::client::CDOTA_Buff
        {
        public:
            float cleave_starting_width; // 0x1878            
            float cleave_ending_width; // 0x187c            
            float cleave_distance; // 0x1880            
            float great_cleave_damage; // 0x1884            
            std::int32_t strength_bonus; // 0x1888            
            std::int16_t m_nLastCleaveRecord; // 0x188c            
            uint8_t _pad188e[0x2]; // 0x188e
            std::int32_t m_nLastCleaveKills; // 0x1890            
            uint8_t _pad1894[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Sven_GreatCleave because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Sven_GreatCleave) == 0x1898);
    };
};
