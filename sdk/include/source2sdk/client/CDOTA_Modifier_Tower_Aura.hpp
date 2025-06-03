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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Tower_Aura : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bonus_armor; // 0x1878            
            bool m_bOverrideArmor; // 0x187c            
            uint8_t _pad187d[0x3]; // 0x187d
            float hp_regen; // 0x1880            
            bool m_bOverrideRegen; // 0x1884            
            uint8_t _pad1885[0x3]; // 0x1885
            std::int32_t m_nRadius; // 0x1888            
            uint8_t _pad188c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Tower_Aura because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Tower_Aura) == 0x1890);
    };
};
