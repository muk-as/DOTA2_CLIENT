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
        class CDOTA_Modifier_ArcWarden_MagneticField_Evasion : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t evasion_chance; // 0x1878            
            float radius; // 0x187c            
            std::int32_t shard_magic_resist; // 0x1880            
            std::int32_t shard_slow_pct; // 0x1884            
            float aura_origin_x; // 0x1888            
            float aura_origin_y; // 0x188c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_ArcWarden_MagneticField_Evasion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_ArcWarden_MagneticField_Evasion) == 0x1890);
    };
};
