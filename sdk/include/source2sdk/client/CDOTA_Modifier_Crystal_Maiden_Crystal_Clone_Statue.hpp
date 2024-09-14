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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Crystal_Maiden_Crystal_Clone_Statue : public client::CDOTA_Buff
    {
    public:
        float frostbite_radius; // 0x16e8        
        float anim_delay; // 0x16ec        
        bool m_bActivated; // 0x16f0        
        [[maybe_unused]] std::uint8_t pad_0x16f1[0x3]; // 0x16f1
        int32_t clone_health; // 0x16f4        
        float m_flDamageTaken; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Crystal_Maiden_Crystal_Clone_Statue because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Crystal_Maiden_Crystal_Clone_Statue) == 0x1700);
};
