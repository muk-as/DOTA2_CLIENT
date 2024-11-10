#pragma once
#include "source2sdk/client/CDOTA_Modifier_Invisible.hpp"
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
    // Size: 0x1738
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Invoker_GhostWalk_Self : public client::CDOTA_Modifier_Invisible
    {
    public:
        int32_t self_slow; // 0x1718        
        float area_of_effect; // 0x171c        
        float aura_fade_time; // 0x1720        
        float health_regen; // 0x1724        
        float mana_regen; // 0x1728        
        float disable_time; // 0x172c        
        entity2::GameTime_t m_timeLastDamage; // 0x1730        
        [[maybe_unused]] std::uint8_t pad_0x1734[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Invoker_GhostWalk_Self because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Invoker_GhostWalk_Self) == 0x1738);
};
