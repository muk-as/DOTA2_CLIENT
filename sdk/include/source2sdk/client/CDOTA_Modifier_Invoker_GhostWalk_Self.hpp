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
    // Size: 0x1718
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Invoker_GhostWalk_Self : public client::CDOTA_Modifier_Invisible
    {
    public:
        int32_t self_slow; // 0x16f8        
        float area_of_effect; // 0x16fc        
        float aura_fade_time; // 0x1700        
        float health_regen; // 0x1704        
        float mana_regen; // 0x1708        
        float disable_time; // 0x170c        
        entity2::GameTime_t m_timeLastDamage; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1714[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Invoker_GhostWalk_Self because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Invoker_GhostWalk_Self) == 0x1718);
};
