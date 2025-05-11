#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseGameMode.hpp"

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
        // Size: 0x8c0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTATurboGameMode : public source2sdk::server::CDOTABaseGameMode
        {
        public:
            uint8_t _pad0810[0x18]; // 0x810
            std::int32_t m_nHighestLevelInCurrentGame; // 0x828            
            uint8_t _pad082c[0x34]; // 0x82c
            // m_ExtraMeleeCreepTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_ExtraMeleeCreepTimes;
            char m_ExtraMeleeCreepTimes[0x18]; // 0x860            
            // m_ExtraRangedCreepTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_ExtraRangedCreepTimes;
            char m_ExtraRangedCreepTimes[0x18]; // 0x878            
            // m_ExtraSiegeCreepTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_ExtraSiegeCreepTimes;
            char m_ExtraSiegeCreepTimes[0x18]; // 0x890            
            std::int32_t m_nExtraGoldPerWave; // 0x8a8            
            std::int32_t m_nExtraXPPerWave; // 0x8ac            
            float m_flNextRewardDistributionTime; // 0x8b0            
            float m_flNextWaveRecalculationTime; // 0x8b4            
            bool m_bInOvertime; // 0x8b8            
            bool m_bDistributingPassiveGoldAndXp; // 0x8b9            
            uint8_t _pad08ba[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTATurboGameMode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTATurboGameMode) == 0x8c0);
    };
};
