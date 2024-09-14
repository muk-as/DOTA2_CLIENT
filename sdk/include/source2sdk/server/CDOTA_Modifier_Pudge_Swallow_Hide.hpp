#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x16f8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Pudge_Swallow_Hide : public client::CDOTA_Buff
    {
    public:
        float order_lock_duration; // 0x16e8        
        entity2::GameTime_t m_fOrderLockDone; // 0x16ec        
        int32_t m_nFXIndex; // 0x16f0        
        float shard_regen_pct; // 0x16f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Pudge_Swallow_Hide because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Pudge_Swallow_Hide) == 0x16f8);
};
