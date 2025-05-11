#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x58
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTABingoStatDefinition
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MPropertyDescription "Stats that share the same exclusive group cannot be generated in the same card."
            CUtlString m_strExclusiveString; // 0x8            
            // metadata: MPropertyDescription "Expected value (for a match)."
            float m_fStatAverage; // 0x10            
            // metadata: MPropertyDescription "Statistical standard deviation (for a match)."
            float m_fStatStdDev; // 0x14            
            // metadata: MPropertyDescription "Optional Hero Adjective, used to populate heroes in a bingo stat tooltip"
            CUtlString m_strHeroAdjective; // 0x18            
            // metadata: MPropertyDescription "Whether we negate the hero adjective when displaying tooltip"
            bool m_bNegativeHeroAdjective; // 0x20            
            uint8_t _pad0021[0x3]; // 0x21
            // metadata: MPropertyDescription "At which league phase this stat unlocks"
            std::int32_t m_nMinLeaguePhase; // 0x24            
            // metadata: MPropertyDescription "Up to which league phase this stat is usable"
            std::int32_t m_nMaxLeaguePhase; // 0x28            
            // metadata: MPropertyDescription "Expected value for League Phase Playoffs game."
            float m_fPlayoffsStatAverage; // 0x2c            
            // metadata: MPropertyDescription "Statistical standard deviation of League Phase Playoffs game."
            float m_fPlayoffsStatStdDev; // 0x30            
            // metadata: MPropertyDescription "Expected value for League Phase Main Event game."
            float m_fMainEventStatAverage; // 0x34            
            // metadata: MPropertyDescription "Statistical standard deviation of League Phase Main Event game."
            float m_fMainEventStatStdDev; // 0x38            
            uint8_t _pad003c[0x4]; // 0x3c
            CUtlString m_sLocName; // 0x40            
            CUtlString m_sLocTooltip; // 0x48            
            uint8_t _pad0050[0x8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTABingoStatDefinition, m_strExclusiveString) == 0x8);
        static_assert(offsetof(source2sdk::client::CDOTABingoStatDefinition, m_fStatAverage) == 0x10);
        static_assert(offsetof(source2sdk::client::CDOTABingoStatDefinition, m_fStatStdDev) == 0x14);
        static_assert(offsetof(source2sdk::client::CDOTABingoStatDefinition, m_strHeroAdjective) == 0x18);
        static_assert(offsetof(source2sdk::client::CDOTABingoStatDefinition, m_bNegativeHeroAdjective) == 0x20);
        static_assert(offsetof(source2sdk::client::CDOTABingoStatDefinition, m_nMinLeaguePhase) == 0x24);
        static_assert(offsetof(source2sdk::client::CDOTABingoStatDefinition, m_nMaxLeaguePhase) == 0x28);
        static_assert(offsetof(source2sdk::client::CDOTABingoStatDefinition, m_fPlayoffsStatAverage) == 0x2c);
        static_assert(offsetof(source2sdk::client::CDOTABingoStatDefinition, m_fPlayoffsStatStdDev) == 0x30);
        static_assert(offsetof(source2sdk::client::CDOTABingoStatDefinition, m_fMainEventStatAverage) == 0x34);
        static_assert(offsetof(source2sdk::client::CDOTABingoStatDefinition, m_fMainEventStatStdDev) == 0x38);
        static_assert(offsetof(source2sdk::client::CDOTABingoStatDefinition, m_sLocName) == 0x40);
        static_assert(offsetof(source2sdk::client::CDOTABingoStatDefinition, m_sLocTooltip) == 0x48);
        
        static_assert(sizeof(source2sdk::client::CDOTABingoStatDefinition) == 0x58);
    };
};
