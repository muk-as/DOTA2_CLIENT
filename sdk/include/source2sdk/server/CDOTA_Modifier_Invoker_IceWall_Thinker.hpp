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
        // Size: 0x18c0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Invoker_IceWall_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float damage_per_second; // 0x1878            
            Vector m_vWallDirection; // 0x187c            
            Vector m_vWallStart; // 0x1888            
            float wall_total_length; // 0x1894            
            float wall_width; // 0x1898            
            float slow_duration; // 0x189c            
            std::int32_t slow; // 0x18a0            
            float root_damage; // 0x18a4            
            float root_duration; // 0x18a8            
            float tick_interval; // 0x18ac            
            bool m_bGrantedGem; // 0x18b0            
            uint8_t _pad18b1[0x3]; // 0x18b1
            source2sdk::client::ParticleIndex_t m_nParticleIndex; // 0x18b4            
            source2sdk::client::ParticleIndex_t m_nParticleIndex2; // 0x18b8            
            uint8_t _pad18bc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Invoker_IceWall_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Invoker_IceWall_Thinker) == 0x18c0);
    };
};
