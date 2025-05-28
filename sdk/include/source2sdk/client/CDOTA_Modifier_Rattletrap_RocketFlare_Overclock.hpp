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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Rattletrap_RocketFlare_Overclock : public source2sdk::client::CDOTA_Buff
        {
        public:
            float rocket_flare_interval; // 0x1888            
            std::int32_t rocket_flare_offset_pct; // 0x188c            
            std::int32_t rocket_flare_rockets; // 0x1890            
            std::int32_t m_nRocketsFired; // 0x1894            
            std::int32_t radius; // 0x1898            
            Vector m_vOriginalTarget; // 0x189c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Rattletrap_RocketFlare_Overclock because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Rattletrap_RocketFlare_Overclock) == 0x18a8);
    };
};
