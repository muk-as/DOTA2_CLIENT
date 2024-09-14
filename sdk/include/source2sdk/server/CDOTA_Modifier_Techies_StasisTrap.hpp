#pragma once
#include "source2sdk/server/CDOTA_Modifier_Invisible.hpp"
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
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Techies_StasisTrap : public server::CDOTA_Modifier_Invisible
    {
    public:
        float activation_radius; // 0x16f8        
        float stun_radius; // 0x16fc        
        float stun_duration; // 0x1700        
        float explode_delay; // 0x1704        
        float activation_time; // 0x1708        
        bool m_bActivated; // 0x170c        
        bool m_bTriggered; // 0x170d        
        [[maybe_unused]] std::uint8_t pad_0x170e[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Techies_StasisTrap because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Techies_StasisTrap) == 0x1710);
};
