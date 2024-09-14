#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 14
    // Alignment: 4
    // Size: 0x4
    enum class ESupportEventRequestResult : std::uint32_t
    {
        k_ESupportEventRequestResult_Success = 0x0,
        k_ESupportEventRequestResult_Timeout = 0x1,
        k_ESupportEventRequestResult_CantLockSOCache = 0x2,
        k_ESupportEventRequestResult_ItemNotInInventory = 0x3,
        k_ESupportEventRequestResult_InvalidItemDef = 0x4,
        k_ESupportEventRequestResult_InvalidEvent = 0x5,
        k_ESupportEventRequestResult_EventExpired = 0x6,
        k_ESupportEventRequestResult_InvalidSupportAccount = 0x7,
        k_ESupportEventRequestResult_InvalidSupportMessage = 0x8,
        k_ESupportEventRequestResult_InvalidEventPoints = 0x9,
        k_ESupportEventRequestResult_InvalidPremiumPoints = 0xa,
        k_ESupportEventRequestResult_InvalidActionID = 0xb,
        k_ESupportEventRequestResult_InvalidActionScore = 0xc,
        k_ESupportEventRequestResult_TransactionFailed = 0xd,
    };
};
