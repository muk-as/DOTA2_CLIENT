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
    enum class EGCMsgUseItemResponse : std::uint32_t
    {
        k_EGCMsgUseItemResponse_ItemUsed = 0x0,
        k_EGCMsgUseItemResponse_GiftNoOtherPlayers = 0x1,
        k_EGCMsgUseItemResponse_ServerError = 0x2,
        k_EGCMsgUseItemResponse_MiniGameAlreadyStarted = 0x3,
        k_EGCMsgUseItemResponse_ItemUsed_ItemsGranted = 0x4,
        k_EGCMsgUseItemResponse_DropRateBonusAlreadyGranted = 0x5,
        k_EGCMsgUseItemResponse_NotInLowPriorityPool = 0x6,
        k_EGCMsgUseItemResponse_NotHighEnoughLevel = 0x7,
        k_EGCMsgUseItemResponse_EventNotActive = 0x8,
        k_EGCMsgUseItemResponse_ItemUsed_EventPointsGranted = 0x9,
        k_EGCMsgUseItemResponse_MissingRequirement = 0xa,
        k_EGCMsgUseItemResponse_EmoticonUnlock_NoNew = 0xb,
        k_EGCMsgUseItemResponse_EmoticonUnlock_Complete = 0xc,
        k_EGCMsgUseItemResponse_ItemUsed_Compendium = 0xd,
    };
};
