#pragma once
#include "source2sdk/server/INextBotComponent.hpp"
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
    // Size: 0x90
    // Has VTable
    #pragma pack(push, 1)
    class CLocomotionBase : public server::INextBotComponent
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x20[0x70];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CLocomotionBase) == 0x90);
};
