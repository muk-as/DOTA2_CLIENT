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
    #pragma pack(push, 1)
    class CDOTA_Modifier_Venomancer_PoisonStingWard : public client::CDOTA_Buff
    {
    public:
        int32_t m_iDamage; // 0x1708        
        int32_t movement_speed; // 0x170c        
        int32_t hp_regen_reduction; // 0x1710        
        int32_t m_nTicksRemaining; // 0x1714        
        float m_flAttackDamage; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Venomancer_PoisonStingWard because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Venomancer_PoisonStingWard) == 0x1720);
};
