#pragma once
#include "source2sdk/client/CSurvivorsSpawner.hpp"
#include "source2sdk/client/SurvivorsUnitID_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x190
    // Has VTable
    #pragma pack(push, 1)
    class CSurvivorsSpawnerTower : public client::CSurvivorsSpawner
    {
    public:
        // m_vecSpawnedTowers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::SurvivorsUnitID_t> m_vecSpawnedTowers;
        char m_vecSpawnedTowers[0x18]; // 0x178        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSurvivorsSpawnerTower because it is not a standard-layout class
    static_assert(sizeof(CSurvivorsSpawnerTower) == 0x190);
};
