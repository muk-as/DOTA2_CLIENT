#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/TrackedStatNetworkData_t.hpp"
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
    // Size: 0x590
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "TrackedStatNetworkData_t m_vecTrackedStats"
    #pragma pack(push, 1)
    class CBaseTrackedStatsEntity : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnTrackedStatsChanged"
        // m_vecTrackedStats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::TrackedStatNetworkData_t> m_vecTrackedStats;
        char m_vecTrackedStats[0x50]; // 0x538        
        [[maybe_unused]] std::uint8_t pad_0x588[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseTrackedStatsEntity because it is not a standard-layout class
    static_assert(sizeof(CBaseTrackedStatsEntity) == 0x590);
};
