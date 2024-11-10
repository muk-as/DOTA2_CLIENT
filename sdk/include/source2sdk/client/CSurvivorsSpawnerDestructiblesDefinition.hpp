#pragma once
#include "source2sdk/client/CSurvivorsSpawnerDefinition.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x150
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CSurvivorsSpawnerDestructiblesDefinition : public client::CSurvivorsSpawnerDefinition
    {
    public:
        float m_flMinimumDistanceBetween; // 0x148        
        float m_flDestroyDistance; // 0x14c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSurvivorsSpawnerDestructiblesDefinition because it is not a standard-layout class
    static_assert(sizeof(CSurvivorsSpawnerDestructiblesDefinition) == 0x150);
};
