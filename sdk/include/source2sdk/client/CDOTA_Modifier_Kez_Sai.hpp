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
        class CDOTA_Modifier_Kez_Sai : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t sai_attack_range; // 0x1878            
            std::int32_t sai_proc_vuln_chance; // 0x187c            
            std::int32_t sai_swap_bonus_movement_speed; // 0x1880            
            std::int32_t invis_bonus_crit; // 0x1884            
            float vuln_duration; // 0x1888            
            float sai_base_attack_time; // 0x188c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Kez_Sai because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Kez_Sai) == 0x1890);
    };
};
