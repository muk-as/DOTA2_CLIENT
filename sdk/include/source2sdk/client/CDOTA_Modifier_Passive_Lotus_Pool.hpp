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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Passive_Lotus_Pool : public source2sdk::client::CDOTA_Buff
        {
        public:
            float first_lotus_pickup_time; // 0x17f8            
            float pickup_time_reduction_pct; // 0x17fc            
            float min_lotus_pickup_time; // 0x1800            
            float think_interval; // 0x1804            
            float radius; // 0x1808            
            float m_flRemainingPickupTime; // 0x180c            
            float m_flCurrentMaxPickupTime; // 0x1810            
            std::int32_t m_nLotusSeconds; // 0x1814            
            source2sdk::client::CountdownTimer m_LotusTimer; // 0x1818            
            std::int32_t m_nRespawnSeconds; // 0x1830            
            uint8_t _pad1834[0x4]; // 0x1834
            source2sdk::client::CountdownTimer m_RespawnTimer; // 0x1838            
            std::int32_t m_nLotusesAvailable; // 0x1850            
            uint8_t _pad1854[0x1c]; // 0x1854
            source2sdk::client::CountdownTimer m_LotusUpgradeTimer; // 0x1870            
            std::int32_t m_nLotusIndex; // 0x1888            
            uint8_t _pad188c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Passive_Lotus_Pool because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Passive_Lotus_Pool) == 0x1890);
    };
};
