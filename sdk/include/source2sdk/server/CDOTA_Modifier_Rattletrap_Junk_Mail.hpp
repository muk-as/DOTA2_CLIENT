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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Rattletrap_Junk_Mail : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_nBaseHealthBarOffset; // 0x1878            
            float armor_per_chainmail; // 0x187c            
            std::int32_t model_scale_per_chainmail; // 0x1880            
            std::int32_t model_scale_maximum; // 0x1884            
            float health_bar_offset_per_stack; // 0x1888            
            uint8_t _pad188c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Rattletrap_Junk_Mail because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Rattletrap_Junk_Mail) == 0x1890);
    };
};
