#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x10
        // Has VTable
        // Has Trivial Destructor
        // MDisableDataDescValidation
        // MNetworkNoBase
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_timestamp"
        // static metadata: MNetworkVarNames "WorldGroupId_t m_nWorldGroupId"
        #pragma pack(push, 1)
        class IntervalTimer
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_timestamp; // 0x8            
            // metadata: MNetworkEnable
            WorldGroupId_t m_nWorldGroupId; // 0xc            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::IntervalTimer, m_timestamp) == 0x8);
        static_assert(offsetof(source2sdk::server::IntervalTimer, m_nWorldGroupId) == 0xc);
        
        static_assert(sizeof(source2sdk::server::IntervalTimer) == 0x10);
    };
};
