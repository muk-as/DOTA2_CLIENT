#pragma once
#include "source2sdk/client/CBaseTrackedStatsEntity.hpp"
#include "source2sdk/client/DOTATeam_t.hpp"
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
    // Size: 0x598
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "DOTATeam_t m_nTeam"
    #pragma pack(push, 1)
    class CTeamTrackedStatsEntity : public client::CBaseTrackedStatsEntity
    {
    public:
        // metadata: MNetworkEnable
        client::DOTATeam_t m_nTeam; // 0x590        
        [[maybe_unused]] std::uint8_t pad_0x594[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTeamTrackedStatsEntity because it is not a standard-layout class
    static_assert(sizeof(CTeamTrackedStatsEntity) == 0x598);
};
