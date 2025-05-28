#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/CountdownTimer.hpp"

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
        // Size: 0x1920
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Passive_Lotus_Pool : public source2sdk::client::CDOTA_Buff
        {
        public:
            float first_lotus_pickup_time; // 0x1888            
            float pickup_time_reduction_pct; // 0x188c            
            float min_lotus_pickup_time; // 0x1890            
            float think_interval; // 0x1894            
            float radius; // 0x1898            
            float m_flRemainingPickupTime; // 0x189c            
            float m_flCurrentMaxPickupTime; // 0x18a0            
            std::int32_t m_nLotusSeconds; // 0x18a4            
            source2sdk::client::CountdownTimer m_LotusTimer; // 0x18a8            
            std::int32_t m_nRespawnSeconds; // 0x18c0            
            uint8_t _pad18c4[0x4]; // 0x18c4
            source2sdk::client::CountdownTimer m_RespawnTimer; // 0x18c8            
            std::int32_t m_nLotusesAvailable; // 0x18e0            
            uint8_t _pad18e4[0x1c]; // 0x18e4
            source2sdk::client::CountdownTimer m_LotusUpgradeTimer; // 0x1900            
            std::int32_t m_nLotusIndex; // 0x1918            
            uint8_t _pad191c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Passive_Lotus_Pool because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Passive_Lotus_Pool) == 0x1920);
    };
};
