#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_KeeperOfTheLight_Radiant_Bind : public client::CDOTA_Buff
    {
    public:
        float slow; // 0x16e8        
        int32_t magic_resistance; // 0x16ec        
        float stun_duration; // 0x16f0        
        Vector vLastPos; // 0x16f4        
        bool bResetPosition; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1701[0x3]; // 0x1701
        float m_fAccumulatedDistance; // 0x1704        
        client::ParticleIndex_t m_nFXIndex; // 0x1708        
        client::ParticleIndex_t m_nStatusFXIndex; // 0x170c        
        bool m_bStunned; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1711[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_KeeperOfTheLight_Radiant_Bind because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_KeeperOfTheLight_Radiant_Bind) == 0x1718);
};
