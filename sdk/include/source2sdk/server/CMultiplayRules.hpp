#pragma once
#include "source2sdk/server/CGameRules.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: false
    // Size: 0xc0
    // Has VTable
    // Is Abstract
    #pragma pack(push, 1)
    class CMultiplayRules : public server::CGameRules
    {
    public:
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CMultiplayRules) == 0xc0);
};
