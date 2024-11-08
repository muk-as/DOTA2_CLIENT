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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x8
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CDOTAMinesweeperStageProgressionChoice
    {
    public:
        CUtlString m_strLocText; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTAMinesweeperStageProgressionChoice, m_strLocText) == 0x0);
    
    static_assert(sizeof(CDOTAMinesweeperStageProgressionChoice) == 0x8);
};
