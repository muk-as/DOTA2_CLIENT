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
    #pragma pack(push, 1)
    class CDOTA_Modifier_Techies_Minefield_Sign_Thinker : public client::CDOTA_Buff
    {
    public:
        float aura_radius; // 0x1708        
        float trigger_radius; // 0x170c        
        float minefield_duration; // 0x1710        
        bool m_bTriggered; // 0x1714        
        [[maybe_unused]] std::uint8_t pad_0x1715[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Techies_Minefield_Sign_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Techies_Minefield_Sign_Thinker) == 0x1718);
};
