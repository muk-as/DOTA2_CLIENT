#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSurvivorsSpawnerDefinition.hpp"

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
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CSurvivorsSpawnerDestructiblesDefinition : public source2sdk::client::CSurvivorsSpawnerDefinition
        {
        public:
            float m_flMinimumDistanceBetween; // 0x_            
            float m_flDestroyDistance; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSurvivorsSpawnerDestructiblesDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CSurvivorsSpawnerDestructiblesDefinition) == 0x_);
    };
};
