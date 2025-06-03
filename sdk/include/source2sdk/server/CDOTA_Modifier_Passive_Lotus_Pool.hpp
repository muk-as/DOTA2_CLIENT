#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CountdownTimer.hpp"

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
        // Size: 0x1918
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Passive_Lotus_Pool : public source2sdk::client::CDOTA_Buff
        {
        public:
            float first_lotus_pickup_time; // 0x1878            
            float pickup_time_reduction_pct; // 0x187c            
            float min_lotus_pickup_time; // 0x1880            
            float think_interval; // 0x1884            
            float radius; // 0x1888            
            float m_flRemainingPickupTime; // 0x188c            
            float m_flCurrentMaxPickupTime; // 0x1890            
            std::int32_t m_nLotusSeconds; // 0x1894            
            source2sdk::server::CountdownTimer m_LotusTimer; // 0x1898            
            std::int32_t m_nRespawnSeconds; // 0x18b0            
            uint8_t _pad18b4[0x4]; // 0x18b4
            source2sdk::server::CountdownTimer m_RespawnTimer; // 0x18b8            
            std::int32_t m_nLotusesAvailable; // 0x18d0            
            uint8_t _pad18d4[0x1c]; // 0x18d4
            source2sdk::server::CountdownTimer m_LotusUpgradeTimer; // 0x18f0            
            std::int32_t m_nLotusIndex; // 0x1908            
            source2sdk::client::ParticleIndex_t m_nFxProgress; // 0x190c            
            bool m_bWasInUse; // 0x1910            
            uint8_t _pad1911[0x3]; // 0x1911
            std::int32_t m_iAssociatedTeam; // 0x1914            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Passive_Lotus_Pool because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Passive_Lotus_Pool) == 0x1918);
    };
};
