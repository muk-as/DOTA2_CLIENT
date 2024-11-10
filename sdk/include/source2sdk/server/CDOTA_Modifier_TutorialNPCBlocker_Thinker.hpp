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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_TutorialNPCBlocker_Thinker : public client::CDOTA_Buff
    {
    public:
        Vector m_vecStart; // 0x1708        
        Vector m_vecEnd; // 0x1714        
        float m_flRadius; // 0x1720        
        bool m_bHidden; // 0x1724        
        [[maybe_unused]] std::uint8_t pad_0x1725[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_TutorialNPCBlocker_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_TutorialNPCBlocker_Thinker) == 0x1728);
};
