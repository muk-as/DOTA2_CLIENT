#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class EReadyCheckRequestResult : std::uint32_t
    {
        k_EReadyCheckRequestResult_Success = 0x0,
        k_EReadyCheckRequestResult_AlreadyInProgress = 0x1,
        k_EReadyCheckRequestResult_NotInParty = 0x2,
        k_EReadyCheckRequestResult_SendError = 0x3,
        k_EReadyCheckRequestResult_UnknownError = 0x4,
    };
};
