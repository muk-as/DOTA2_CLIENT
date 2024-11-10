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
    // Size: 0x1770
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_KeeperOfTheLight_Illuminate : public client::CDOTA_Buff
    {
    public:
        int32_t range; // 0x1708        
        int32_t total_damage; // 0x170c        
        int32_t radius; // 0x1710        
        float max_channel_time; // 0x1714        
        int32_t speed; // 0x1718        
        int32_t channel_vision_radius; // 0x171c        
        float channel_vision_interval; // 0x1720        
        float channel_vision_duration; // 0x1724        
        int32_t channel_vision_step; // 0x1728        
        entity2::GameTime_t m_flLastChantTime; // 0x172c        
        Vector m_vNextVisionLocation; // 0x1730        
        Vector m_vCastDirection; // 0x173c        
        Vector m_vCastLoc; // 0x1748        
        QAngle m_qCastAngle; // 0x1754        
        client::ParticleIndex_t m_nFXIndex; // 0x1760        
        bool m_bIsSpiritForm; // 0x1764        
        [[maybe_unused]] std::uint8_t pad_0x1765[0x3]; // 0x1765
        entity2::GameTime_t m_fStartTime; // 0x1768        
        [[maybe_unused]] std::uint8_t pad_0x176c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_KeeperOfTheLight_Illuminate because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_KeeperOfTheLight_Illuminate) == 0x1770);
};
