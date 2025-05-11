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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0xe8
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTABingoGameDefinition
        {
        public:
            source2sdk::client::EEvent m_eEvent; // 0x0            
            source2sdk::client::LeagueID_t m_unLeagueID; // 0x4            
            std::int32_t m_nShuffleCardCost; // 0x8            
            std::int32_t m_nRerollSquareCost; // 0xc            
            std::int32_t m_nUpgradeSquareCost; // 0x10            
            std::int32_t m_nMaxSquareUpgrades; // 0x14            
            // m_vecExpectedMatchCountsPerPhase has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecExpectedMatchCountsPerPhase;
            char m_vecExpectedMatchCountsPerPhase[0x18]; // 0x18            
            // m_vecLeaguePhases has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_vecLeaguePhases;
            char m_vecLeaguePhases[0x18]; // 0x30            
            // m_vecValidStatRangesPerPhase has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlVector<std::int32_t>> m_vecValidStatRangesPerPhase;
            char m_vecValidStatRangesPerPhase[0x18]; // 0x48            
            // m_mapBingoStatsByName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<CUtlString,source2sdk::client::CDOTABingoStatDefinition> m_mapBingoStatsByName;
            char m_mapBingoStatsByName[0x28]; // 0x60            
            uint8_t _pad0088[0x60];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTABingoGameDefinition, m_eEvent) == 0x0);
        static_assert(offsetof(source2sdk::client::CDOTABingoGameDefinition, m_unLeagueID) == 0x4);
        static_assert(offsetof(source2sdk::client::CDOTABingoGameDefinition, m_nShuffleCardCost) == 0x8);
        static_assert(offsetof(source2sdk::client::CDOTABingoGameDefinition, m_nRerollSquareCost) == 0xc);
        static_assert(offsetof(source2sdk::client::CDOTABingoGameDefinition, m_nUpgradeSquareCost) == 0x10);
        static_assert(offsetof(source2sdk::client::CDOTABingoGameDefinition, m_nMaxSquareUpgrades) == 0x14);
        static_assert(offsetof(source2sdk::client::CDOTABingoGameDefinition, m_vecExpectedMatchCountsPerPhase) == 0x18);
        static_assert(offsetof(source2sdk::client::CDOTABingoGameDefinition, m_vecLeaguePhases) == 0x30);
        static_assert(offsetof(source2sdk::client::CDOTABingoGameDefinition, m_vecValidStatRangesPerPhase) == 0x48);
        static_assert(offsetof(source2sdk::client::CDOTABingoGameDefinition, m_mapBingoStatsByName) == 0x60);
        
        static_assert(sizeof(source2sdk::client::CDOTABingoGameDefinition) == 0xe8);
    };
};
