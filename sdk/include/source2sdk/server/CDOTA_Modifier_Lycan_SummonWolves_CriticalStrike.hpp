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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Lycan_SummonWolves_CriticalStrike : public client::CDOTA_Buff
    {
    public:
        server::CountdownTimer m_CooldownTimer; // 0x16e8        
        int32_t maim_chance; // 0x1700        
        float maim_duration; // 0x1704        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Lycan_SummonWolves_CriticalStrike because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Lycan_SummonWolves_CriticalStrike) == 0x1708);
};
