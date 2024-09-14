#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 25
    // Alignment: 4
    // Size: 0x4
    enum class EGCMsgInitiateTradeResponse : std::uint32_t
    {
        k_EGCMsgInitiateTradeResponse_Accepted = 0x0,
        k_EGCMsgInitiateTradeResponse_Declined = 0x1,
        k_EGCMsgInitiateTradeResponse_VAC_Banned_Initiator = 0x2,
        k_EGCMsgInitiateTradeResponse_VAC_Banned_Target = 0x3,
        k_EGCMsgInitiateTradeResponse_Target_Already_Trading = 0x4,
        k_EGCMsgInitiateTradeResponse_Disabled = 0x5,
        k_EGCMsgInitiateTradeResponse_NotLoggedIn = 0x6,
        k_EGCMsgInitiateTradeResponse_Cancel = 0x7,
        k_EGCMsgInitiateTradeResponse_TooSoon = 0x8,
        k_EGCMsgInitiateTradeResponse_TooSoonPenalty = 0x9,
        k_EGCMsgInitiateTradeResponse_Trade_Banned_Initiator = 0xa,
        k_EGCMsgInitiateTradeResponse_Trade_Banned_Target = 0xb,
        k_EGCMsgInitiateTradeResponse_Free_Account_Initiator_DEPRECATED = 0xc,
        k_EGCMsgInitiateTradeResponse_Shared_Account_Initiator = 0xd,
        k_EGCMsgInitiateTradeResponse_Service_Unavailable = 0xe,
        k_EGCMsgInitiateTradeResponse_Target_Blocked = 0xf,
        k_EGCMsgInitiateTradeResponse_NeedVerifiedEmail = 0x10,
        k_EGCMsgInitiateTradeResponse_NeedSteamGuard = 0x11,
        k_EGCMsgInitiateTradeResponse_SteamGuardDuration = 0x12,
        k_EGCMsgInitiateTradeResponse_TheyCannotTrade = 0x13,
        k_EGCMsgInitiateTradeResponse_Recent_Password_Reset = 0x14,
        k_EGCMsgInitiateTradeResponse_Using_New_Device = 0x15,
        k_EGCMsgInitiateTradeResponse_Sent_Invalid_Cookie = 0x16,
        k_EGCMsgInitiateTradeResponse_TooRecentFriend = 0x17,
        k_EGCMsgInitiateTradeResponse_WalledFundsNotTrusted = 0x18,
    };
};
