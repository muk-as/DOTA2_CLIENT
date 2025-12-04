#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseTrackedStatsEntity.hpp"
#include "source2sdk/client/PlayerID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "PlayerID_t m_nPlayerID"
        #pragma pack(push, 1)
        class CPlayerTrackedStatsEntity : public source2sdk::client::CBaseTrackedStatsEntity
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_nPlayerID; // 0x_            
            std::int32_t m_nTeam; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPlayerTrackedStatsEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CPlayerTrackedStatsEntity) == 0x_);
    };
};
