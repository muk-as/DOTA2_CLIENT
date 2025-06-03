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
        // Size: 0x1888
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Skywrath_Mage_Shard : public source2sdk::client::CDOTA_Buff
        {
        public:
            float stack_duration; // 0x1878            
            std::int32_t damage_barrier_base; // 0x187c            
            std::int32_t damage_barrier_per_level; // 0x1880            
            float barrier_duration; // 0x1884            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Skywrath_Mage_Shard because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Skywrath_Mage_Shard) == 0x1888);
    };
};
