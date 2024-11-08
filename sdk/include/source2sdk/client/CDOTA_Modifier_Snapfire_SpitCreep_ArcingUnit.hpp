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
    // Size: 0x1730
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Snapfire_SpitCreep_ArcingUnit : public client::CDOTA_Buff
    {
    public:
        int32_t min_range; // 0x1708        
        float min_lob_travel_time; // 0x170c        
        float max_lob_travel_time; // 0x1710        
        int32_t impact_radius; // 0x1714        
        int32_t projectile_vision; // 0x1718        
        float stun_duration; // 0x171c        
        float min_height_above_lowest; // 0x1720        
        float min_height_above_highest; // 0x1724        
        float min_acceleration; // 0x1728        
        float max_acceleration; // 0x172c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Snapfire_SpitCreep_ArcingUnit because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Snapfire_SpitCreep_ArcingUnit) == 0x1730);
};
