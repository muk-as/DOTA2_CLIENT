#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x1730
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Bane_Nightmare : public client::CDOTA_Buff
    {
    public:
        int32_t m_nSource; // 0x1708        
        float animation_rate; // 0x170c        
        Vector m_vWalkDir; // 0x1710        
        int32_t walk_speed; // 0x171c        
        float turn_rate; // 0x1720        
        entity2::GameTime_t m_flLastThinkTime; // 0x1724        
        float m_flWalkAngle; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x172c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Bane_Nightmare because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Bane_Nightmare) == 0x1730);
};
