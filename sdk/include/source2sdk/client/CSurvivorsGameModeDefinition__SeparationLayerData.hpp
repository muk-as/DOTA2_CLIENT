#pragma once
#include "source2sdk/client/ESurvivorsEnemySeparationLayer.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x8
    // Has Trivial Constructor
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CSurvivorsGameModeDefinition__SeparationLayerData
    {
    public:
        client::ESurvivorsEnemySeparationLayer m_eSeparationLayer; // 0x0        
        float m_flSeperationDistance; // 0x4        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSurvivorsGameModeDefinition__SeparationLayerData, m_eSeparationLayer) == 0x0);
    static_assert(offsetof(CSurvivorsGameModeDefinition__SeparationLayerData, m_flSeperationDistance) == 0x4);
    
    static_assert(sizeof(CSurvivorsGameModeDefinition__SeparationLayerData) == 0x8);
};
