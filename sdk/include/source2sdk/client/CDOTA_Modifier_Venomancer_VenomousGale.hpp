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
        class CDOTA_Modifier_Venomancer_VenomousGale : public source2sdk::client::CDOTA_Buff
        {
        public:
            float explosion_stun_duration; // 0x1878            
            std::int32_t explosion_damage; // 0x187c            
            std::int32_t movement_slow; // 0x1880            
            std::int32_t tick_damage; // 0x1884            
            float tick_interval; // 0x1888            
            float duration; // 0x188c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Venomancer_VenomousGale because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Venomancer_VenomousGale) == 0x1890);
    };
};
