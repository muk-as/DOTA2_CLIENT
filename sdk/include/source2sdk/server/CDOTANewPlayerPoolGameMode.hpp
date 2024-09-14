#pragma once
#include "source2sdk/server/CDOTABaseGameMode.hpp"
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
    // Size: 0x878
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTANewPlayerPoolGameMode : public server::CDOTABaseGameMode
    {
    public:
        int32_t m_nHighestLevelInCurrentGame; // 0x7d8        
        [[maybe_unused]] std::uint8_t pad_0x7dc[0x4c]; // 0x7dc
        // m_ExtraMeleeCreepTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_ExtraMeleeCreepTimes;
        char m_ExtraMeleeCreepTimes[0x18]; // 0x828        
        // m_ExtraRangedCreepTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_ExtraRangedCreepTimes;
        char m_ExtraRangedCreepTimes[0x18]; // 0x840        
        // m_ExtraSiegeCreepTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_ExtraSiegeCreepTimes;
        char m_ExtraSiegeCreepTimes[0x18]; // 0x858        
        bool m_bInOvertime; // 0x870        
        [[maybe_unused]] std::uint8_t pad_0x871[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTANewPlayerPoolGameMode because it is not a standard-layout class
    static_assert(sizeof(CDOTANewPlayerPoolGameMode) == 0x878);
};
