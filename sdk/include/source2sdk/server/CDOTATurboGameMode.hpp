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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTATurboGameMode : public source2sdk::server::CDOTABaseGameMode
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nHighestLevelInCurrentGame; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_ExtraMeleeCreepTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_ExtraMeleeCreepTimes;
            char m_ExtraMeleeCreepTimes[0x_]; // 0x_            
            // m_ExtraRangedCreepTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_ExtraRangedCreepTimes;
            char m_ExtraRangedCreepTimes[0x_]; // 0x_            
            // m_ExtraSiegeCreepTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_ExtraSiegeCreepTimes;
            char m_ExtraSiegeCreepTimes[0x_]; // 0x_            
            std::int32_t m_nExtraGoldPerWave; // 0x_            
            std::int32_t m_nExtraXPPerWave; // 0x_            
            float m_flNextRewardDistributionTime; // 0x_            
            float m_flNextWaveRecalculationTime; // 0x_            
            bool m_bInOvertime; // 0x_            
            bool m_bDistributingPassiveGoldAndXp; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTATurboGameMode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTATurboGameMode) == 0x_);
    };
};
