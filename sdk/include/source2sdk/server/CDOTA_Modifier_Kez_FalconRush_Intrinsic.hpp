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
    // Size: 0x1730
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Kez_FalconRush_Intrinsic : public client::CDOTA_Buff
    {
    public:
        float base_attack_rate_katana; // 0x1708        
        float base_attack_rate_sai; // 0x170c        
        int32_t attack_speed_factor; // 0x1710        
        float m_flAttackRate; // 0x1714        
        [[maybe_unused]] std::uint8_t pad_0x1718[0x18];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Kez_FalconRush_Intrinsic because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Kez_FalconRush_Intrinsic) == 0x1730);
};