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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSurvivorsGameModeDefinition_SeparationLayerData
        {
        public:
            source2sdk::client::ESurvivorsEnemySeparationLayer m_eSeparationLayer; // 0x_            
            float m_flSeperationDistance; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition_SeparationLayerData, m_eSeparationLayer) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition_SeparationLayerData, m_flSeperationDistance) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CSurvivorsGameModeDefinition_SeparationLayerData) == 0x_);
    };
};
