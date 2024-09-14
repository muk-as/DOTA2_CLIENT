#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x1740
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Batrider_Firefly : public client::CDOTA_Buff
    {
    public:
        bool m_bActive; // 0x16e8        
        [[maybe_unused]] std::uint8_t pad_0x16e9[0x3]; // 0x16e9
        int32_t radius; // 0x16ec        
        int32_t m_ifirefly_Active; // 0x16f0        
        int32_t tree_radius; // 0x16f4        
        int32_t damage_per_second; // 0x16f8        
        int32_t movement_speed; // 0x16fc        
        int32_t bonus_slow_resistance; // 0x1700        
        float tick_interval; // 0x1704        
        client::ParticleIndex_t m_nFXIndex; // 0x1708        
        client::ParticleIndex_t m_nFXIndexB; // 0x170c        
        entity2::GameTime_t m_fNextDamageTick; // 0x1710        
        Vector m_vLastFirePoolLoc; // 0x1714        
        int32_t bonus_vision; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x1c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Batrider_Firefly because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Batrider_Firefly) == 0x1740);
};
