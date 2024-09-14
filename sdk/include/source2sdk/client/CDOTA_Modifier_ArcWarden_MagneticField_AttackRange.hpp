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
    // Size: 0x1720
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_ArcWarden_MagneticField_AttackRange : public client::CDOTA_Buff
    {
    public:
        int32_t attack_range_bonus; // 0x16e8        
        int32_t attack_magic_damage; // 0x16ec        
        int32_t attack_damage_bonus; // 0x16f0        
        float radius; // 0x16f4        
        int32_t shard_magic_resist; // 0x16f8        
        int32_t shard_slow_pct; // 0x16fc        
        float aura_origin_x; // 0x1700        
        float aura_origin_y; // 0x1704        
        // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_InFlightAttackRecords;
        char m_InFlightAttackRecords[0x18]; // 0x1708        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_ArcWarden_MagneticField_AttackRange because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_ArcWarden_MagneticField_AttackRange) == 0x1720);
};
