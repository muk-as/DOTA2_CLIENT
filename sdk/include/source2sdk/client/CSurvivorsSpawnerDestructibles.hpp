#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSurvivorsSpawner.hpp"

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
        // Size: 0x180
        // Has VTable
        #pragma pack(push, 1)
        class CSurvivorsSpawnerDestructibles : public source2sdk::client::CSurvivorsSpawner
        {
        public:
            float m_flMinimumDistanceBetween; // 0x178            
            float m_flDestroyDistance; // 0x17c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSurvivorsSpawnerDestructibles because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CSurvivorsSpawnerDestructibles) == 0x180);
    };
};
