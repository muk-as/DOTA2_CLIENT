#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
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
    // Size: 0x16f0
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_DrowRanger_ArcanaKill_Delay : public client::CDOTA_Buff
    {
    public:
        client::PlayerID_t m_nPlayerID_Drow; // 0x16e8        
        [[maybe_unused]] std::uint8_t pad_0x16ec[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_DrowRanger_ArcanaKill_Delay because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_DrowRanger_ArcanaKill_Delay) == 0x16f0);
};
