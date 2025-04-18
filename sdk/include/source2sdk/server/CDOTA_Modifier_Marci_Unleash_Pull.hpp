#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Marci_Unleash_Pull : public client::CDOTA_Buff
    {
    public:
        Vector m_vDirection; // 0x1708        
        float m_flEndTime; // 0x1714        
        float m_flCurTime; // 0x1718        
        int32_t shard_push_length; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Marci_Unleash_Pull because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Marci_Unleash_Pull) == 0x1720);
};
