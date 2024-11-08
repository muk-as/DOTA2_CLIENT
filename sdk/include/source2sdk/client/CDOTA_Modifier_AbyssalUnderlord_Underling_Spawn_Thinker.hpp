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
    class CDOTA_Modifier_AbyssalUnderlord_Underling_Spawn_Thinker : public client::CDOTA_Buff
    {
    public:
        float underling_search_radius; // 0x1708        
        int32_t warrior_health; // 0x170c        
        int32_t warrior_damage; // 0x1710        
        int32_t archer_health; // 0x1714        
        int32_t archer_damage; // 0x1718        
        int32_t hull_radius; // 0x171c        
        int32_t gold_bounty; // 0x1720        
        int32_t xp_bounty; // 0x1724        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_AbyssalUnderlord_Underling_Spawn_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_AbyssalUnderlord_Underling_Spawn_Thinker) == 0x1728);
};
