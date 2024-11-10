#pragma once
#include "source2sdk/client/CDOTA_Modifier_Invisible.hpp"
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
    class CDOTA_Modifier_Techies_StasisTrap : public client::CDOTA_Modifier_Invisible
    {
    public:
        float activation_radius; // 0x1718        
        float stun_radius; // 0x171c        
        float stun_duration; // 0x1720        
        float explode_delay; // 0x1724        
        float activation_time; // 0x1728        
        bool m_bActivated; // 0x172c        
        bool m_bTriggered; // 0x172d        
        [[maybe_unused]] std::uint8_t pad_0x172e[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Techies_StasisTrap because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Techies_StasisTrap) == 0x1730);
};
