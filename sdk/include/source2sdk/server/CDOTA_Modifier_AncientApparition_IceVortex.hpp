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
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1738
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_AncientApparition_IceVortex : public client::CDOTA_Buff
    {
    public:
        int32_t movement_speed_pct; // 0x1708        
        int32_t spell_resist_pct; // 0x170c        
        int32_t drag_speed; // 0x1710        
        float aura_origin_x; // 0x1714        
        float aura_origin_y; // 0x1718        
        int32_t shard_dps; // 0x171c        
        int32_t shard_attack_speed_reduction; // 0x1720        
        int32_t frost_stacks; // 0x1724        
        Vector m_vCenter; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x1734[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_AncientApparition_IceVortex because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_AncientApparition_IceVortex) == 0x1738);
};
