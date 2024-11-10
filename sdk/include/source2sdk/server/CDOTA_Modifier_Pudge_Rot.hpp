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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Pudge_Rot : public client::CDOTA_Buff
    {
    public:
        int32_t rot_damage; // 0x1708        
        int32_t rot_slow; // 0x170c        
        int32_t scepter_rot_regen_reduction_pct; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1714[0x8]; // 0x1714
        entity2::GameTime_t m_flLastRotTime; // 0x171c        
        bool m_bQualifiesAsPotentionalDeny; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1721[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Pudge_Rot because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Pudge_Rot) == 0x1728);
};
