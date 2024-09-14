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
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1728
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Nian_Frenzy : public client::CDOTA_Buff
    {
    public:
        int32_t damage; // 0x16e8        
        int32_t damage_radius; // 0x16ec        
        int32_t stun_radius; // 0x16f0        
        float dive_distance; // 0x16f4        
        float initial_rise_time; // 0x16f8        
        float right_swipe_time; // 0x16fc        
        float left_swipe_time; // 0x1700        
        float knockdown_duration; // 0x1704        
        float stun_duration; // 0x1708        
        int32_t m_nTickCounter; // 0x170c        
        // m_hEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hEnemies;
        char m_hEnemies[0x18]; // 0x1710        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Nian_Frenzy because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Nian_Frenzy) == 0x1728);
};
