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
    enum class EDevEventRequestResult : std::uint32_t
    {
        k_EDevEventRequestResult_Success = 0x0,
        k_EDevEventRequestResult_NotAllowed = 0x1,
        k_EDevEventRequestResult_InvalidEvent = 0x2,
        k_EDevEventRequestResult_SqlFailure = 0x3,
        k_EDevEventRequestResult_Timeout = 0x4,
        k_EDevEventRequestResult_LockFailure = 0x5,
        k_EDevEventRequestResult_SDOLoadFailure = 0x6,
    };
};
