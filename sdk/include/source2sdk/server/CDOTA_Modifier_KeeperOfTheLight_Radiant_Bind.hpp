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
    // Size: 0x1738
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_KeeperOfTheLight_Radiant_Bind : public client::CDOTA_Buff
    {
    public:
        float slow; // 0x1708        
        int32_t magic_resistance; // 0x170c        
        float stun_duration; // 0x1710        
        Vector vLastPos; // 0x1714        
        bool bResetPosition; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1721[0x3]; // 0x1721
        float m_fAccumulatedDistance; // 0x1724        
        client::ParticleIndex_t m_nFXIndex; // 0x1728        
        client::ParticleIndex_t m_nStatusFXIndex; // 0x172c        
        bool m_bStunned; // 0x1730        
        [[maybe_unused]] std::uint8_t pad_0x1731[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_KeeperOfTheLight_Radiant_Bind because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_KeeperOfTheLight_Radiant_Bind) == 0x1738);
};
