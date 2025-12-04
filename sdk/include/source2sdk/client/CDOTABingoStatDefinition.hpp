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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTABingoStatDefinition
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "Stats that share the same exclusive group cannot be generated in the same card."
            CUtlString m_strExclusiveString; // 0x_            
            // metadata: MPropertyDescription "Expected value (for a match)."
            float m_fStatAverage; // 0x_            
            // metadata: MPropertyDescription "Statistical standard deviation (for a match)."
            float m_fStatStdDev; // 0x_            
            // metadata: MPropertyDescription "Optional Hero Adjective, used to populate heroes in a bingo stat tooltip"
            CUtlString m_strHeroAdjective; // 0x_            
            // metadata: MPropertyDescription "Whether we negate the hero adjective when displaying tooltip"
            bool m_bNegativeHeroAdjective; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "At which league phase this stat unlocks"
            std::int32_t m_nMinLeaguePhase; // 0x_            
            // metadata: MPropertyDescription "Up to which league phase this stat is usable"
            std::int32_t m_nMaxLeaguePhase; // 0x_            
            // metadata: MPropertyDescription "Expected value for League Phase Playoffs game."
            float m_fPlayoffsStatAverage; // 0x_            
            // metadata: MPropertyDescription "Statistical standard deviation of League Phase Playoffs game."
            float m_fPlayoffsStatStdDev; // 0x_            
            // metadata: MPropertyDescription "Expected value for League Phase Main Event game."
            float m_fMainEventStatAverage; // 0x_            
            // metadata: MPropertyDescription "Statistical standard deviation of League Phase Main Event game."
            float m_fMainEventStatStdDev; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_sLocName; // 0x_            
            CUtlString m_sLocTooltip; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTABingoStatDefinition, m_strExclusiveString) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTABingoStatDefinition, m_fStatAverage) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTABingoStatDefinition, m_fStatStdDev) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTABingoStatDefinition, m_strHeroAdjective) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTABingoStatDefinition, m_bNegativeHeroAdjective) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTABingoStatDefinition, m_nMinLeaguePhase) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTABingoStatDefinition, m_nMaxLeaguePhase) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTABingoStatDefinition, m_fPlayoffsStatAverage) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTABingoStatDefinition, m_fPlayoffsStatStdDev) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTABingoStatDefinition, m_fMainEventStatAverage) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTABingoStatDefinition, m_fMainEventStatStdDev) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTABingoStatDefinition, m_sLocName) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTABingoStatDefinition, m_sLocTooltip) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDOTABingoStatDefinition) == 0x_);
    };
};
