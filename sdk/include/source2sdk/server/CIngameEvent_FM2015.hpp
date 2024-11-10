#pragma once
#include "source2sdk/server/CIngameEvent_Base.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1aa0
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CIngameEvent_FM2015 : public server::CIngameEvent_Base
    {
    public:
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CIngameEvent_FM2015) == 0x1aa0);
};
