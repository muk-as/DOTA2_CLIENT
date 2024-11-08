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
    // Size: 0x1730
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Kez_FalconRush_Intrinsic : public client::CDOTA_Buff
    {
    public:
        float base_attack_rate; // 0x1708        
        int32_t attack_speed_factor; // 0x170c        
        float m_flAttackRate; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1714[0x1c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Kez_FalconRush_Intrinsic because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Kez_FalconRush_Intrinsic) == 0x1730);
};
