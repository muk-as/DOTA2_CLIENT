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
        // Size: 0x1820
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_PhantomLancer_Juxtapose : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t proc_chance_pct; // 0x17f8            
            std::int32_t illusion_proc_chance_pct; // 0x17fc            
            std::int32_t max_illusions; // 0x1800            
            float illusion_duration; // 0x1804            
            std::int32_t illusion_damage_out_pct; // 0x1808            
            std::int32_t illusion_damage_in_pct; // 0x180c            
            std::int32_t shard_bonus_illusions; // 0x1810            
            std::int32_t uncontrollable_illusions; // 0x1814            
            std::int32_t new_target_radius; // 0x1818            
            uint8_t _pad181c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_PhantomLancer_Juxtapose because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_PhantomLancer_Juxtapose) == 0x1820);
    };
};
