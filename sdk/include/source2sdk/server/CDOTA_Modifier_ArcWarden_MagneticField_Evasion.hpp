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
        class CDOTA_Modifier_ArcWarden_MagneticField_Evasion : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t evasion_chance; // 0x17f8            
            float radius; // 0x17fc            
            std::int32_t shard_magic_resist; // 0x1800            
            std::int32_t shard_slow_pct; // 0x1804            
            float aura_origin_x; // 0x1808            
            float aura_origin_y; // 0x180c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_ArcWarden_MagneticField_Evasion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_ArcWarden_MagneticField_Evasion) == 0x1810);
    };
};
