#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ESurvivorsEnemySeparationLayer.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
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
        class CSurvivorsGameModeDefinition_SeparationLayerData
        {
        public:
            source2sdk::client::ESurvivorsEnemySeparationLayer m_eSeparationLayer; // 0x0            
            float m_flSeperationDistance; // 0x4            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition_SeparationLayerData, m_eSeparationLayer) == 0x0);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition_SeparationLayerData, m_flSeperationDistance) == 0x4);
        
        static_assert(sizeof(source2sdk::client::CSurvivorsGameModeDefinition_SeparationLayerData) == 0x8);
    };
};
