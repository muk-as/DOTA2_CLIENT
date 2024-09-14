#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 6
    // Alignment: 4
    // Size: 0x4
    enum class EGCPlatform : std::uint32_t
    {
        k_eGCPlatform_None = 0x0,
        k_eGCPlatform_PC = 0x1,
        k_eGCPlatform_Mac = 0x2,
        k_eGCPlatform_Linux = 0x3,
        k_eGCPlatform_Android = 0x4,
        k_eGCPlatform_iOS = 0x5,
    };
};
