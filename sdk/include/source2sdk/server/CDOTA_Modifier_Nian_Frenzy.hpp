#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1748
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Nian_Frenzy : public client::CDOTA_Buff
    {
    public:
        int32_t damage; // 0x1708        
        int32_t damage_radius; // 0x170c        
        int32_t stun_radius; // 0x1710        
        float dive_distance; // 0x1714        
        float initial_rise_time; // 0x1718        
        float right_swipe_time; // 0x171c        
        float left_swipe_time; // 0x1720        
        float knockdown_duration; // 0x1724        
        float stun_duration; // 0x1728        
        int32_t m_nTickCounter; // 0x172c        
        // m_hEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hEnemies;
        char m_hEnemies[0x18]; // 0x1730        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Nian_Frenzy because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Nian_Frenzy) == 0x1748);
};
