#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x1738
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Oracle_FalsePromise : public client::CDOTA_Buff
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x16e8[0x30]; // 0x16e8
        bool m_bWaitingForInvulnerability; // 0x1718        
        bool m_bDisableHealing; // 0x1719        
        [[maybe_unused]] std::uint8_t pad_0x171a[0x2]; // 0x171a
        float m_flHealthOnCreated; // 0x171c        
        client::ParticleIndex_t m_nFXIndex; // 0x1720        
        client::ParticleIndex_t m_nFXIndexB; // 0x1724        
        float m_flRunningDmg; // 0x1728        
        float m_flRunningHealth; // 0x172c        
        int32_t bonus_armor; // 0x1730        
        [[maybe_unused]] std::uint8_t pad_0x1734[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Oracle_FalsePromise because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Oracle_FalsePromise) == 0x1738);
};
