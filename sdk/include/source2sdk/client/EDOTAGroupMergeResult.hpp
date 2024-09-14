#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 10
    // Alignment: 4
    // Size: 0x4
    enum class EDOTAGroupMergeResult : std::uint32_t
    {
        k_EDOTAGroupMergeResult_OK = 0x0,
        k_EDOTAGroupMergeResult_FAILED_GENERIC = 0x1,
        k_EDOTAGroupMergeResult_NOT_LEADER = 0x2,
        k_EDOTAGroupMergeResult_TOO_MANY_PLAYERS = 0x3,
        k_EDOTAGroupMergeResult_TOO_MANY_COACHES = 0x4,
        k_EDOTAGroupMergeResult_ENGINE_MISMATCH = 0x5,
        k_EDOTAGroupMergeResult_NO_SUCH_GROUP = 0x6,
        k_EDOTAGroupMergeResult_OTHER_GROUP_NOT_OPEN = 0x7,
        k_EDOTAGroupMergeResult_ALREADY_INVITED = 0x8,
        k_EDOTAGroupMergeResult_NOT_INVITED = 0x9,
    };
};
