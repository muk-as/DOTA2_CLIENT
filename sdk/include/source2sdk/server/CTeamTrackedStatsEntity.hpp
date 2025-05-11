#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/DOTATeam_t.hpp"
#include "source2sdk/server/CBaseTrackedStatsEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x548
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "DOTATeam_t m_nTeam"
        #pragma pack(push, 1)
        class CTeamTrackedStatsEntity : public source2sdk::server::CBaseTrackedStatsEntity
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::client::DOTATeam_t m_nTeam; // 0x540            
            uint8_t _pad0544[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTeamTrackedStatsEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTeamTrackedStatsEntity) == 0x548);
    };
};
