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
        class CDOTA_Modifier_PrimalBeast_Onslaught_Windup : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bReachedMax; // 0x1888            
            bool m_bShouldCharge; // 0x1889            
            uint8_t _pad188a[0x2]; // 0x188a
            float m_flLastOverheadTime; // 0x188c            
            float m_flFacingTarget; // 0x1890            
            Vector m_vAimTarget; // 0x1894            
            source2sdk::client::ParticleIndex_t m_nCrosshairFX; // 0x18a0            
            float m_flChargeDuration; // 0x18a4            
            std::int32_t max_distance; // 0x18a8            
            float max_charge_time; // 0x18ac            
            float turn_rate; // 0x18b0            
            float base_power; // 0x18b4            
            std::int32_t charge_speed; // 0x18b8            
            uint8_t _pad18bc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_PrimalBeast_Onslaught_Windup because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_PrimalBeast_Onslaught_Windup) == 0x18c0);
    };
};
