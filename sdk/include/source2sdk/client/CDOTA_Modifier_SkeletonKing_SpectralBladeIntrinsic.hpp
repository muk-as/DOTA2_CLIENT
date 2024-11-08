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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_SkeletonKing_SpectralBladeIntrinsic : public client::CDOTA_Buff
    {
    public:
        int32_t vampiric_aura; // 0x1708        
        int32_t creep_lifesteal_reduction_pct; // 0x170c        
        float cursed_damage; // 0x1710        
        float cursed_damage_pct; // 0x1714        
        float curse_cooldown; // 0x1718        
        float curse_cooldown_creep; // 0x171c        
        float curse_delay; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_SkeletonKing_SpectralBladeIntrinsic because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_SkeletonKing_SpectralBladeIntrinsic) == 0x1728);
};
