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
    // Size: 0x1718
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_SkeletonKing_Reincarnation : public client::CDOTA_Buff
    {
    public:
        float reincarnate_time; // 0x1708        
        int32_t scepter_aura_radius; // 0x170c        
        int32_t bonus_mortal_strike_pct; // 0x1710        
        float bonus_mortal_strike_duration; // 0x1714        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_SkeletonKing_Reincarnation because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_SkeletonKing_Reincarnation) == 0x1718);
};
