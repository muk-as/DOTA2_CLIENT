#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSurvivorsSpawner.hpp"
#include "source2sdk/client/SurvivorsUnitID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x190
        // Has VTable
        #pragma pack(push, 1)
        class CSurvivorsSpawnerTower : public source2sdk::client::CSurvivorsSpawner
        {
        public:
            // m_vecSpawnedTowers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::SurvivorsUnitID_t> m_vecSpawnedTowers;
            char m_vecSpawnedTowers[0x18]; // 0x178            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSurvivorsSpawnerTower because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CSurvivorsSpawnerTower) == 0x190);
    };
};
