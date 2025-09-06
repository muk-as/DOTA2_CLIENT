#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ETormentorLocation.hpp"
#include "source2sdk/client/ETormentorSpawnPhase.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x18
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
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MNetworkEnable
            source2sdk::client::ETormentorLocation m_eTormentorLocation; // 0x8            
            // metadata: MNetworkEnable
            source2sdk::client::ETormentorSpawnPhase m_eTormentorSpawnPhase; // 0xc            
            // metadata: MNetworkEnable
            float m_flTormentorPhaseStartTime; // 0x10            
            // metadata: MNetworkEnable
            float m_flTormentorPhaseEndTime; // 0x14            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CTormentorSpawnPhase, m_eTormentorLocation) == 0x8);
        static_assert(offsetof(source2sdk::client::CTormentorSpawnPhase, m_eTormentorSpawnPhase) == 0xc);
        static_assert(offsetof(source2sdk::client::CTormentorSpawnPhase, m_flTormentorPhaseStartTime) == 0x10);
        static_assert(offsetof(source2sdk::client::CTormentorSpawnPhase, m_flTormentorPhaseEndTime) == 0x14);
        
        static_assert(sizeof(source2sdk::client::CTormentorSpawnPhase) == 0x18);
    };
};
