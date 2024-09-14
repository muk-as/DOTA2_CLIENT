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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_SkeletonKing_Reincarnation : public client::CDOTA_Buff
    {
    public:
        float reincarnate_time; // 0x16e8        
        int32_t scepter_aura_radius; // 0x16ec        
        int32_t bonus_mortal_strike_pct; // 0x16f0        
        float bonus_mortal_strike_duration; // 0x16f4        
        entity2::GameTime_t m_fLastReincarnationTime; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_SkeletonKing_Reincarnation because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_SkeletonKing_Reincarnation) == 0x1700);
};
