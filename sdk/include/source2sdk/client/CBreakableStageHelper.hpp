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
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x18
    #pragma pack(push, 1)
    class CBreakableStageHelper
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        int32_t m_nCurrentStage; // 0x8        
        int32_t m_nStageCount; // 0xc        
        [[maybe_unused]] std::uint8_t pad_0x10[0x8];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CBreakableStageHelper, m_nCurrentStage) == 0x8);
    static_assert(offsetof(CBreakableStageHelper, m_nStageCount) == 0xc);
    
    static_assert(sizeof(CBreakableStageHelper) == 0x18);
};
