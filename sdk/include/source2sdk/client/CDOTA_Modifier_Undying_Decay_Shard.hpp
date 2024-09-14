#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Undying_Decay_Shard : public client::CDOTA_Buff
    {
    public:
        float shard_buff_duration; // 0x16e8        
        [[maybe_unused]] std::uint8_t pad_0x16ec[0x4]; // 0x16ec
        // m_vecStackExpirationTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<entity2::GameTime_t> m_vecStackExpirationTimes;
        char m_vecStackExpirationTimes[0x18]; // 0x16f0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Undying_Decay_Shard because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Undying_Decay_Shard) == 0x1708);
};
