#pragma once
#include "source2sdk/server/CDOTA_Buff_Item.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x16f8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Nemesis_Curse : public server::CDOTA_Buff_Item
    {
    public:
        int32_t debuff_self; // 0x16e8        
        float debuff_enemy; // 0x16ec        
        int32_t debuff_enemy_duration; // 0x16f0        
        int32_t bonus_damage; // 0x16f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Nemesis_Curse because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Nemesis_Curse) == 0x16f8);
};