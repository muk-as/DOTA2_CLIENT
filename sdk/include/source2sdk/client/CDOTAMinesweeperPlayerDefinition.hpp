#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTAMinesweeperPlayerDefinition
        {
        public:
            std::int32_t m_nInitialHealth; // 0x0            
            std::int32_t m_nInitialMana; // 0x4            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperPlayerDefinition, m_nInitialHealth) == 0x0);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperPlayerDefinition, m_nInitialMana) == 0x4);
        
        static_assert(sizeof(source2sdk::client::CDOTAMinesweeperPlayerDefinition) == 0x8);
    };
};
