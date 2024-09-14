#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 2
    // Alignment: 4
    // Size: 0x4
    enum class ScriptedConflictResponse_t : std::uint32_t
    {
        SS_CONFLICT_ENQUEUE = 0x0,
        SS_CONFLICT_INTERRUPT = 0x1,
    };
};
