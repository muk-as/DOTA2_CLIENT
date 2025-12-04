#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTABingoStatDefinition.hpp"
#include "source2sdk/client/EEvent.hpp"
#include "source2sdk/client/LeagueID_t.hpp"

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
        class CDOTABingoGameDefinition
        {
        public:
            source2sdk::client::EEvent m_eEvent; // 0x_            
            source2sdk::client::LeagueID_t m_unLeagueID; // 0x_            
            std::int32_t m_nShuffleCardCost; // 0x_            
            std::int32_t m_nRerollSquareCost; // 0x_            
            std::int32_t m_nUpgradeSquareCost; // 0x_            
            std::int32_t m_nMaxSquareUpgrades; // 0x_            
            // m_vecExpectedMatchCountsPerPhase has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecExpectedMatchCountsPerPhase;
            char m_vecExpectedMatchCountsPerPhase[0x_]; // 0x_            
            // m_vecLeaguePhases has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_vecLeaguePhases;
            char m_vecLeaguePhases[0x_]; // 0x_            
            // m_vecValidStatRangesPerPhase has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlVector<std::int32_t>> m_vecValidStatRangesPerPhase;
            char m_vecValidStatRangesPerPhase[0x_]; // 0x_            
            // m_mapBingoStatsByName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<CUtlString,source2sdk::client::CDOTABingoStatDefinition> m_mapBingoStatsByName;
            char m_mapBingoStatsByName[0x_]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTABingoGameDefinition, m_eEvent) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTABingoGameDefinition, m_unLeagueID) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTABingoGameDefinition, m_nShuffleCardCost) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTABingoGameDefinition, m_nRerollSquareCost) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTABingoGameDefinition, m_nUpgradeSquareCost) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTABingoGameDefinition, m_nMaxSquareUpgrades) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTABingoGameDefinition, m_vecExpectedMatchCountsPerPhase) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTABingoGameDefinition, m_vecLeaguePhases) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTABingoGameDefinition, m_vecValidStatRangesPerPhase) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTABingoGameDefinition, m_mapBingoStatsByName) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDOTABingoGameDefinition) == 0x_);
    };
};
