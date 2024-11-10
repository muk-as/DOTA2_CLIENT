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
    // Size: 0x8c8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTATurboGameMode : public server::CDOTABaseGameMode
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x818[0x18]; // 0x818
        int32_t m_nHighestLevelInCurrentGame; // 0x830        
        [[maybe_unused]] std::uint8_t pad_0x834[0x34]; // 0x834
        // m_ExtraMeleeCreepTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_ExtraMeleeCreepTimes;
        char m_ExtraMeleeCreepTimes[0x18]; // 0x868        
        // m_ExtraRangedCreepTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_ExtraRangedCreepTimes;
        char m_ExtraRangedCreepTimes[0x18]; // 0x880        
        // m_ExtraSiegeCreepTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_ExtraSiegeCreepTimes;
        char m_ExtraSiegeCreepTimes[0x18]; // 0x898        
        int32_t m_nExtraGoldPerWave; // 0x8b0        
        int32_t m_nExtraXPPerWave; // 0x8b4        
        float m_flNextRewardDistributionTime; // 0x8b8        
        float m_flNextWaveRecalculationTime; // 0x8bc        
        float m_flNextNeutralItemDistributionTime; // 0x8c0        
        bool m_bInOvertime; // 0x8c4        
        bool m_bDistributingPassiveGoldAndXp; // 0x8c5        
        [[maybe_unused]] std::uint8_t pad_0x8c6[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTATurboGameMode because it is not a standard-layout class
    static_assert(sizeof(CDOTATurboGameMode) == 0x8c8);
};
