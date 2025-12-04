#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_KeeperOfTheLight_Illuminate : public source2sdk::client::CDOTA_Buff
        {
        public:
            float range; // 0x_            
            float total_damage; // 0x_            
            float radius; // 0x_            
            float max_channel_time; // 0x_            
            float speed; // 0x_            
            float channel_vision_radius; // 0x_            
            float channel_vision_interval; // 0x_            
            float channel_vision_duration; // 0x_            
            float channel_vision_step; // 0x_            
            source2sdk::entity2::GameTime_t m_flLastChantTime; // 0x_            
            Vector m_vNextVisionLocation; // 0x_            
            Vector m_vCastDirection; // 0x_            
            Vector m_vCastLoc; // 0x_            
            QAngle m_qCastAngle; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x_            
            bool m_bIsSpiritForm; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_KeeperOfTheLight_Illuminate because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_KeeperOfTheLight_Illuminate) == 0x_);
    };
};
