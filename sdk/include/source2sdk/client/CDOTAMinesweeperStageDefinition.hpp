#pragma once
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
    // Size: 0xc
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
        int32_t m_nBoardRows; // 0x0        
        int32_t m_nBoardCols; // 0x4        
        int32_t m_nMines; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTAMinesweeperStageDefinition, m_nBoardRows) == 0x0);
    static_assert(offsetof(CDOTAMinesweeperStageDefinition, m_nBoardCols) == 0x4);
    static_assert(offsetof(CDOTAMinesweeperStageDefinition, m_nMines) == 0x8);
    
    static_assert(sizeof(CDOTAMinesweeperStageDefinition) == 0xc);
};
