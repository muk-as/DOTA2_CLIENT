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
    // Size: 0x17c8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Weaver_TimeLapse : public client::CDOTA_Buff
    {
    public:
        Vector m_PositionIndex[11]; // 0x16e8        
        float m_flLife[11]; // 0x176c        
        float m_flMana[11]; // 0x1798        
        bool m_bHasValidHistory; // 0x17c4        
        [[maybe_unused]] std::uint8_t pad_0x17c5[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Weaver_TimeLapse because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Weaver_TimeLapse) == 0x17c8);
};
