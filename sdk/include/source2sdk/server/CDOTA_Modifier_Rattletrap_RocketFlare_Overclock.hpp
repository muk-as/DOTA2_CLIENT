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
        class CDOTA_Modifier_Rattletrap_RocketFlare_Overclock : public source2sdk::client::CDOTA_Buff
        {
        public:
            float rocket_flare_interval; // 0x17f8            
            std::int32_t rocket_flare_offset_pct; // 0x17fc            
            std::int32_t rocket_flare_rockets; // 0x1800            
            std::int32_t m_nRocketsFired; // 0x1804            
            std::int32_t radius; // 0x1808            
            Vector m_vOriginalTarget; // 0x180c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Rattletrap_RocketFlare_Overclock because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Rattletrap_RocketFlare_Overclock) == 0x1818);
    };
};
