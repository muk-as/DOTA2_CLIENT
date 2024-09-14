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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_AbyssalUnderlord_Underling_Spawn_Thinker : public client::CDOTA_Buff
    {
    public:
        float underling_search_radius; // 0x16e8        
        int32_t warrior_health; // 0x16ec        
        int32_t warrior_damage; // 0x16f0        
        int32_t archer_health; // 0x16f4        
        int32_t archer_damage; // 0x16f8        
        int32_t hull_radius; // 0x16fc        
        int32_t gold_bounty; // 0x1700        
        int32_t xp_bounty; // 0x1704        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_AbyssalUnderlord_Underling_Spawn_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_AbyssalUnderlord_Underling_Spawn_Thinker) == 0x1708);
};
