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
        class CDOTA_Modifier_Ringmaster_FunhouseMirror_Phase : public source2sdk::client::CDOTA_Buff
        {
        public:
            float illusion_duration; // 0x1878            
            std::int32_t images_do_damage_percent_ranged; // 0x187c            
            std::int32_t images_do_damage_percent_melee; // 0x1880            
            std::int32_t images_take_damage_percent; // 0x1884            
            std::int32_t images_count; // 0x1888            
            uint8_t _pad188c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Ringmaster_FunhouseMirror_Phase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Ringmaster_FunhouseMirror_Phase) == 0x1890);
    };
};
