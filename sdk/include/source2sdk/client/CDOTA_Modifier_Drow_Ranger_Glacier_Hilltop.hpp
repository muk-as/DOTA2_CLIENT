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
        class CDOTA_Modifier_Drow_Ranger_Glacier_Hilltop : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t multishot_arrow_bonus; // 0x1888            
            std::int32_t end_height; // 0x188c            
            std::int32_t attack_range_bonus; // 0x1890            
            uint8_t _pad1894[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Drow_Ranger_Glacier_Hilltop because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Drow_Ranger_Glacier_Hilltop) == 0x1898);
    };
};
