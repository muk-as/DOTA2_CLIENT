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
    // Size: 0x17e8
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Weaver_TimeLapse : public client::CDOTA_Buff
    {
    public:
        Vector m_PositionIndex[11]; // 0x1708        
        float m_flLife[11]; // 0x178c        
        float m_flMana[11]; // 0x17b8        
        bool m_bHasValidHistory; // 0x17e4        
        [[maybe_unused]] std::uint8_t pad_0x17e5[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Weaver_TimeLapse because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Weaver_TimeLapse) == 0x17e8);
};
