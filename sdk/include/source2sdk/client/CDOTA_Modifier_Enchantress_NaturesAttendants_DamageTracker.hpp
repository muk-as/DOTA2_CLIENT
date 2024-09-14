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
    class CDOTA_Modifier_Enchantress_NaturesAttendants_DamageTracker : public client::CDOTA_Buff
    {
    public:
        int32_t m_iDamageTaken; // 0x16e8        
        int32_t overprotective_damage_threshold; // 0x16ec        
        float overprotective_damage_reset_interval; // 0x16f0        
        float overprotective_wisp_duration; // 0x16f4        
        int32_t overprotective_wisp_count; // 0x16f8        
        float heal_interval; // 0x16fc        
        int32_t overprotective_max_wisps; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1704[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Enchantress_NaturesAttendants_DamageTracker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Enchantress_NaturesAttendants_DamageTracker) == 0x1708);
};
