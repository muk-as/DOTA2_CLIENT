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
    // Size: 0x1718
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Warlock_Rain_of_Chaos_Leash : public client::CDOTA_Buff
    {
    public:
        float m_flMaxMovespeed; // 0x1708        
        float leash_start_radius; // 0x170c        
        float leash_radius; // 0x1710        
        float leashed_movespeed; // 0x1714        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Warlock_Rain_of_Chaos_Leash because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Warlock_Rain_of_Chaos_Leash) == 0x1718);
};
