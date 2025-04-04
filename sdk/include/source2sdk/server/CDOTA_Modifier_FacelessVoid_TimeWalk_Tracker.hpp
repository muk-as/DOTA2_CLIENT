#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker : public client::CDOTA_Buff
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1708[0x18];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker) == 0x1720);
};
