#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Sand_King_Shard : public client::CDOTA_Buff
    {
    public:
        float shard_move_distance; // 0x1708        
        float shard_interval; // 0x170c        
        Vector vLastPos; // 0x1710        
        float m_fAccumulatedDistance; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Sand_King_Shard because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Sand_King_Shard) == 0x1720);
};
