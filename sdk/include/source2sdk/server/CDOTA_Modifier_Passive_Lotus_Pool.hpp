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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Passive_Lotus_Pool : public source2sdk::client::CDOTA_Buff
        {
        public:
            float first_lotus_pickup_time; // 0x_            
            float pickup_time_reduction_pct; // 0x_            
            float min_lotus_pickup_time; // 0x_            
            float think_interval; // 0x_            
            float radius; // 0x_            
            float m_flRemainingPickupTime; // 0x_            
            float m_flCurrentMaxPickupTime; // 0x_            
            std::int32_t m_nLotusSeconds; // 0x_            
            source2sdk::server::CountdownTimer m_LotusTimer; // 0x_            
            std::int32_t m_nRespawnSeconds; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CountdownTimer m_RespawnTimer; // 0x_            
            std::int32_t m_nLotusesAvailable; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CountdownTimer m_LotusUpgradeTimer; // 0x_            
            std::int32_t m_nLotusIndex; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFxProgress; // 0x_            
            bool m_bWasInUse; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_iAssociatedTeam; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Passive_Lotus_Pool because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Passive_Lotus_Pool) == 0x_);
    };
};
