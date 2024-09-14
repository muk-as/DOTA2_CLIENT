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
    // Size: 0x1718
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_AncientApparition_IceVortex : public client::CDOTA_Buff
    {
    public:
        int32_t movement_speed_pct; // 0x16e8        
        int32_t spell_resist_pct; // 0x16ec        
        int32_t drag_speed; // 0x16f0        
        float aura_origin_x; // 0x16f4        
        float aura_origin_y; // 0x16f8        
        int32_t shard_dps; // 0x16fc        
        int32_t shard_attack_speed_reduction; // 0x1700        
        int32_t frost_stacks; // 0x1704        
        Vector m_vCenter; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x1714[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_AncientApparition_IceVortex because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_AncientApparition_IceVortex) == 0x1718);
};
