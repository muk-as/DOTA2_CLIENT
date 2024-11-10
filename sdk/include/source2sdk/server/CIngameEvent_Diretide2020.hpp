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
    // Size: 0x1aa8
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CIngameEvent_Diretide2020 : public server::CIngameEvent_Base
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1aa0[0x8];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CIngameEvent_Diretide2020) == 0x1aa8);
};
