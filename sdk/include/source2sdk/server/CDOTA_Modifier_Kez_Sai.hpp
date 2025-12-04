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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Kez_Sai : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t sai_attack_range; // 0x_            
            std::int32_t sai_proc_vuln_chance; // 0x_            
            std::int32_t sai_swap_bonus_movement_speed; // 0x_            
            std::int32_t invis_bonus_crit; // 0x_            
            float vuln_duration; // 0x_            
            float sai_base_attack_time; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Kez_Sai because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Kez_Sai) == 0x_);
    };
};
