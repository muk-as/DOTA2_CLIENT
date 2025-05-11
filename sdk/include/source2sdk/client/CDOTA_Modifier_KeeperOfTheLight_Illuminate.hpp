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
        // Size: 0x1860
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_KeeperOfTheLight_Illuminate : public source2sdk::client::CDOTA_Buff
        {
        public:
            float range; // 0x17f8            
            float total_damage; // 0x17fc            
            float radius; // 0x1800            
            float max_channel_time; // 0x1804            
            float speed; // 0x1808            
            float channel_vision_radius; // 0x180c            
            float channel_vision_interval; // 0x1810            
            float channel_vision_duration; // 0x1814            
            float channel_vision_step; // 0x1818            
            source2sdk::entity2::GameTime_t m_flLastChantTime; // 0x181c            
            Vector m_vNextVisionLocation; // 0x1820            
            Vector m_vCastDirection; // 0x182c            
            Vector m_vCastLoc; // 0x1838            
            QAngle m_qCastAngle; // 0x1844            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1850            
            bool m_bIsSpiritForm; // 0x1854            
            uint8_t _pad1855[0x3]; // 0x1855
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x1858            
            uint8_t _pad185c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_KeeperOfTheLight_Illuminate because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_KeeperOfTheLight_Illuminate) == 0x1860);
    };
};
