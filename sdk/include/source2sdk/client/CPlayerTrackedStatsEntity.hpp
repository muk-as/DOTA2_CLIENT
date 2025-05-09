#pragma once
#include "source2sdk/client/CBaseTrackedStatsEntity.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5d8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "PlayerID_t m_nPlayerID"
    #pragma pack(push, 1)
    class CPlayerTrackedStatsEntity : public client::CBaseTrackedStatsEntity
    {
    public:
        // metadata: MNetworkEnable
        client::PlayerID_t m_nPlayerID; // 0x5d0        
        int32_t m_nTeam; // 0x5d4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPlayerTrackedStatsEntity because it is not a standard-layout class
    static_assert(sizeof(CPlayerTrackedStatsEntity) == 0x5d8);
};
