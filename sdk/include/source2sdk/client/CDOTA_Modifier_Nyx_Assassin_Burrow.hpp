#pragma once
#include "source2sdk/client/CDOTA_Modifier_Invisible.hpp"
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
    class CDOTA_Modifier_Nyx_Assassin_Burrow : public client::CDOTA_Modifier_Invisible
    {
    public:
        float health_regen_rate; // 0x16f8        
        float mana_regen_rate; // 0x16fc        
        int32_t damage_reduction; // 0x1700        
        int32_t cooldown_reduction; // 0x1704        
        int32_t cast_range; // 0x1708        
        Vector m_vecInitialPos; // 0x170c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Nyx_Assassin_Burrow because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Nyx_Assassin_Burrow) == 0x1718);
};
