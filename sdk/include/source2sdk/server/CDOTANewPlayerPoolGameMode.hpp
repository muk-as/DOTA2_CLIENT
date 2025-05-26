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
        // Size: 0x8b8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTANewPlayerPoolGameMode : public source2sdk::server::CDOTABaseGameMode
        {
        public:
            std::int32_t m_nHighestLevelInCurrentGame; // 0x818            
            uint8_t _pad081c[0x4c]; // 0x81c
            // m_ExtraMeleeCreepTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_ExtraMeleeCreepTimes;
            char m_ExtraMeleeCreepTimes[0x18]; // 0x868            
            // m_ExtraRangedCreepTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_ExtraRangedCreepTimes;
            char m_ExtraRangedCreepTimes[0x18]; // 0x880            
            // m_ExtraSiegeCreepTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_ExtraSiegeCreepTimes;
            char m_ExtraSiegeCreepTimes[0x18]; // 0x898            
            bool m_bInOvertime; // 0x8b0            
            uint8_t _pad08b1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTANewPlayerPoolGameMode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTANewPlayerPoolGameMode) == 0x8b8);
    };
};
