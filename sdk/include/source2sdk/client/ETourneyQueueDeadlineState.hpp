#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 7
    // Alignment: 4
    // Size: 0x4
    enum class ETourneyQueueDeadlineState : std::uint32_t
    {
        k_ETourneyQueueDeadlineState_Normal = 0x0,
        k_ETourneyQueueDeadlineState_Missed = 0x1,
        k_ETourneyQueueDeadlineState_ExpiredOK = 0x2,
        k_ETourneyQueueDeadlineState_SeekingBye = 0x3,
        k_ETourneyQueueDeadlineState_EligibleForRefund = 0x4,
        k_ETourneyQueueDeadlineState_NA = 0xffffffff,
        k_ETourneyQueueDeadlineState_ExpiringSoon = 0x65,
    };
};
