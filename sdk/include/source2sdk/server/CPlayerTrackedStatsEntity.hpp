#pragma once
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/server/CBaseTrackedStatsEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x510
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "PlayerID_t m_nPlayerID"
    #pragma pack(push, 1)
    class CPlayerTrackedStatsEntity : public server::CBaseTrackedStatsEntity
    {
    public:
        // metadata: MNetworkEnable
        client::PlayerID_t m_nPlayerID; // 0x508        
        [[maybe_unused]] std::uint8_t pad_0x50c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPlayerTrackedStatsEntity because it is not a standard-layout class
    static_assert(sizeof(CPlayerTrackedStatsEntity) == 0x510);
};
