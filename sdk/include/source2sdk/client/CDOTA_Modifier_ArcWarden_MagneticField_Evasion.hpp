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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_ArcWarden_MagneticField_Evasion : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t evasion_chance; // 0x_            
            float radius; // 0x_            
            std::int32_t shard_magic_resist; // 0x_            
            std::int32_t shard_slow_pct; // 0x_            
            float aura_origin_x; // 0x_            
            float aura_origin_y; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_ArcWarden_MagneticField_Evasion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_ArcWarden_MagneticField_Evasion) == 0x_);
    };
};
