#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18f0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_KeeperOfTheLight_Illuminate : public source2sdk::client::CDOTA_Buff
        {
        public:
            float range; // 0x1888            
            float total_damage; // 0x188c            
            float radius; // 0x1890            
            float max_channel_time; // 0x1894            
            float speed; // 0x1898            
            float channel_vision_radius; // 0x189c            
            float channel_vision_interval; // 0x18a0            
            float channel_vision_duration; // 0x18a4            
            float channel_vision_step; // 0x18a8            
            source2sdk::entity2::GameTime_t m_flLastChantTime; // 0x18ac            
            Vector m_vNextVisionLocation; // 0x18b0            
            Vector m_vCastDirection; // 0x18bc            
            Vector m_vCastLoc; // 0x18c8            
            QAngle m_qCastAngle; // 0x18d4            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x18e0            
            bool m_bIsSpiritForm; // 0x18e4            
            uint8_t _pad18e5[0x3]; // 0x18e5
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x18e8            
            uint8_t _pad18ec[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_KeeperOfTheLight_Illuminate because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_KeeperOfTheLight_Illuminate) == 0x18f0);
    };
};
