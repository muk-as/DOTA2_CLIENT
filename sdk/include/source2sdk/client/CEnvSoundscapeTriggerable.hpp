#pragma once
#include "source2sdk/client/CEnvSoundscape.hpp"
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
    // Standard-layout class: false
    // Size: 0x600
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CEnvSoundscapeTriggerable : public client::CEnvSoundscape
    {
    public:
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CEnvSoundscapeTriggerable) == 0x600);
};
