#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ETormentorLocation.hpp"
#include "source2sdk/client/ETormentorSpawnPhase.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // Has Trivial Destructor
        // MNetworkNoBase
        // 
        // static metadata: MNetworkVarNames "ETormentorLocation m_eTormentorLocation"
        // static metadata: MNetworkVarNames "ETormentorSpawnPhase m_eTormentorSpawnPhase"
        // static metadata: MNetworkVarNames "float m_flTormentorPhaseStartTime"
        // static metadata: MNetworkVarNames "float m_flTormentorPhaseEndTime"
        #pragma pack(push, 1)
        class CTormentorSpawnPhase
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::client::ETormentorLocation m_eTormentorLocation; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::ETormentorSpawnPhase m_eTormentorSpawnPhase; // 0x_            
            // metadata: MNetworkEnable
            float m_flTormentorPhaseStartTime; // 0x_            
            // metadata: MNetworkEnable
            float m_flTormentorPhaseEndTime; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CTormentorSpawnPhase, m_eTormentorLocation) == 0x_);
        static_assert(offsetof(source2sdk::server::CTormentorSpawnPhase, m_eTormentorSpawnPhase) == 0x_);
        static_assert(offsetof(source2sdk::server::CTormentorSpawnPhase, m_flTormentorPhaseStartTime) == 0x_);
        static_assert(offsetof(source2sdk::server::CTormentorSpawnPhase, m_flTormentorPhaseEndTime) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CTormentorSpawnPhase) == 0x_);
    };
};
