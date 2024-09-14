#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x1750
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_KeeperOfTheLight_Illuminate : public client::CDOTA_Buff
    {
    public:
        int32_t range; // 0x16e8        
        int32_t total_damage; // 0x16ec        
        int32_t radius; // 0x16f0        
        float max_channel_time; // 0x16f4        
        int32_t speed; // 0x16f8        
        int32_t channel_vision_radius; // 0x16fc        
        float channel_vision_interval; // 0x1700        
        float channel_vision_duration; // 0x1704        
        int32_t channel_vision_step; // 0x1708        
        entity2::GameTime_t m_flLastChantTime; // 0x170c        
        Vector m_vNextVisionLocation; // 0x1710        
        Vector m_vCastDirection; // 0x171c        
        Vector m_vCastLoc; // 0x1728        
        QAngle m_qCastAngle; // 0x1734        
        client::ParticleIndex_t m_nFXIndex; // 0x1740        
        bool m_bIsSpiritForm; // 0x1744        
        [[maybe_unused]] std::uint8_t pad_0x1745[0x3]; // 0x1745
        entity2::GameTime_t m_fStartTime; // 0x1748        
        [[maybe_unused]] std::uint8_t pad_0x174c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_KeeperOfTheLight_Illuminate because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_KeeperOfTheLight_Illuminate) == 0x1750);
};
