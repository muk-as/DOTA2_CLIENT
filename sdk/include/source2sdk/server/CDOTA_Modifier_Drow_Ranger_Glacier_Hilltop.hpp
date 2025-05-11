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
        // Size: 0x1808
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Drow_Ranger_Glacier_Hilltop : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t multishot_arrow_bonus; // 0x17f8            
            std::int32_t end_height; // 0x17fc            
            std::int32_t attack_range_bonus; // 0x1800            
            uint8_t _pad1804[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Drow_Ranger_Glacier_Hilltop because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Drow_Ranger_Glacier_Hilltop) == 0x1808);
    };
};
