#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ERoshanSpawnPhase.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // Has Trivial Destructor
        // MNetworkNoBase
        // 
        // static metadata: MNetworkVarNames "ERoshanSpawnPhase m_eRoshanPhase"
        // static metadata: MNetworkVarNames "GameTime_t m_flRoshanPhaseStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flRoshanPhaseEndTime"
        #pragma pack(push, 1)
        class CRoshanPhaseInfo
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::client::ERoshanSpawnPhase m_eRoshanPhase; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flRoshanPhaseStartTime; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flRoshanPhaseEndTime; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CRoshanPhaseInfo, m_eRoshanPhase) == 0x_);
        static_assert(offsetof(source2sdk::client::CRoshanPhaseInfo, m_flRoshanPhaseStartTime) == 0x_);
        static_assert(offsetof(source2sdk::client::CRoshanPhaseInfo, m_flRoshanPhaseEndTime) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CRoshanPhaseInfo) == 0x_);
    };
};
