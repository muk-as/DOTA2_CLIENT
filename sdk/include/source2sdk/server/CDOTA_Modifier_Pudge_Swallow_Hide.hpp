#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        class CDOTA_Modifier_Pudge_Swallow_Hide : public source2sdk::client::CDOTA_Buff
        {
        public:
            float order_lock_duration; // 0x1878            
            source2sdk::entity2::GameTime_t m_fOrderLockDone; // 0x187c            
            std::int32_t m_nFXIndex; // 0x1880            
            float shard_regen_pct; // 0x1884            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Pudge_Swallow_Hide because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Pudge_Swallow_Hide) == 0x1888);
    };
};
