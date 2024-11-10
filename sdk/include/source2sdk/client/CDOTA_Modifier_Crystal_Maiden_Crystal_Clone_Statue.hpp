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
    class CDOTA_Modifier_Crystal_Maiden_Crystal_Clone_Statue : public client::CDOTA_Buff
    {
    public:
        float frostbite_radius; // 0x1708        
        float anim_delay; // 0x170c        
        bool m_bActivated; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1711[0x3]; // 0x1711
        int32_t clone_health; // 0x1714        
        float m_flDamageTaken; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Crystal_Maiden_Crystal_Clone_Statue because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Crystal_Maiden_Crystal_Clone_Statue) == 0x1720);
};
