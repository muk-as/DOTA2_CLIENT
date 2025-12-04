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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTAMinesweeperStageDefinition
        {
        public:
            std::int32_t m_nBoardRows; // 0x_            
            std::int32_t m_nBoardCols; // 0x_            
            std::int32_t m_nMines; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperStageDefinition, m_nBoardRows) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperStageDefinition, m_nBoardCols) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperStageDefinition, m_nMines) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDOTAMinesweeperStageDefinition) == 0x_);
    };
};
