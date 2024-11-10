#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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
    // Size: 0x1750
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Treant_NaturesGuise : public client::CDOTA_Buff
    {
    public:
        server::CountdownTimer m_RevealTimer; // 0x1708        
        server::CountdownTimer m_InvisAttackTimer; // 0x1720        
        server::CountdownTimer m_CooldownTimer; // 0x1738        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Treant_NaturesGuise because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Treant_NaturesGuise) == 0x1750);
};
