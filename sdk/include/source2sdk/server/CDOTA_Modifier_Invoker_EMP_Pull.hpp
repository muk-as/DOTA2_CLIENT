#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Invoker_EMP_Pull : public client::CDOTA_Buff
    {
    public:
        int32_t shard_drag_speed; // 0x16e8        
        float aura_origin_x; // 0x16ec        
        float aura_origin_y; // 0x16f0        
        client::ParticleIndex_t m_nFXIndex; // 0x16f4        
        Vector m_vCenter; // 0x16f8        
        entity2::GameTime_t m_flLastThinkTime; // 0x1704        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Invoker_EMP_Pull because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Invoker_EMP_Pull) == 0x1708);
};
