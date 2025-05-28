#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x18d0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Invoker_IceWall_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float damage_per_second; // 0x1888            
            Vector m_vWallDirection; // 0x188c            
            Vector m_vWallStart; // 0x1898            
            float wall_total_length; // 0x18a4            
            float wall_width; // 0x18a8            
            float slow_duration; // 0x18ac            
            std::int32_t slow; // 0x18b0            
            float root_damage; // 0x18b4            
            float root_duration; // 0x18b8            
            float tick_interval; // 0x18bc            
            bool m_bGrantedGem; // 0x18c0            
            uint8_t _pad18c1[0x3]; // 0x18c1
            source2sdk::client::ParticleIndex_t m_nParticleIndex; // 0x18c4            
            source2sdk::client::ParticleIndex_t m_nParticleIndex2; // 0x18c8            
            uint8_t _pad18cc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Invoker_IceWall_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Invoker_IceWall_Thinker) == 0x18d0);
    };
};
