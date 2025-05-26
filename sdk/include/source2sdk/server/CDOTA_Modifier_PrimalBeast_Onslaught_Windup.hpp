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
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_PrimalBeast_Onslaught_Windup : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bReachedMax; // 0x1878            
            bool m_bShouldCharge; // 0x1879            
            uint8_t _pad187a[0x2]; // 0x187a
            float m_flLastOverheadTime; // 0x187c            
            float m_flFacingTarget; // 0x1880            
            Vector m_vAimTarget; // 0x1884            
            source2sdk::client::ParticleIndex_t m_nCrosshairFX; // 0x1890            
            float m_flChargeDuration; // 0x1894            
            std::int32_t max_distance; // 0x1898            
            float max_charge_time; // 0x189c            
            float turn_rate; // 0x18a0            
            float base_power; // 0x18a4            
            std::int32_t charge_speed; // 0x18a8            
            uint8_t _pad18ac[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_PrimalBeast_Onslaught_Windup because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_PrimalBeast_Onslaught_Windup) == 0x18b0);
    };
};
