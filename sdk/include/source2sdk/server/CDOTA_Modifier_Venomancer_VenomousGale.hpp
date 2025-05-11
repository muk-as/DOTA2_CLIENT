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
        // Size: 0x1810
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Venomancer_VenomousGale : public source2sdk::client::CDOTA_Buff
        {
        public:
            float explosion_stun_duration; // 0x17f8            
            std::int32_t explosion_damage; // 0x17fc            
            std::int32_t movement_slow; // 0x1800            
            std::int32_t tick_damage; // 0x1804            
            float tick_interval; // 0x1808            
            float duration; // 0x180c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Venomancer_VenomousGale because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Venomancer_VenomousGale) == 0x1810);
    };
};
