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
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x78
    // Has VTable
    // Is Abstract
    #pragma pack(push, 1)
    class CAnimGraphControllerBase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x20]; // 0x0
        // m_vecParamsToResetInPostGraphUpdate has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorFixedGrowable<CGlobalSymbol,8> m_vecParamsToResetInPostGraphUpdate;
        char m_vecParamsToResetInPostGraphUpdate[0x58]; // 0x20        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAnimGraphControllerBase, m_vecParamsToResetInPostGraphUpdate) == 0x20);
    
    static_assert(sizeof(CAnimGraphControllerBase) == 0x78);
};
