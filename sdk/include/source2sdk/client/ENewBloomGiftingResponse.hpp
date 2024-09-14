#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 13
    // Alignment: 4
    // Size: 0x4
    enum class ENewBloomGiftingResponse : std::uint32_t
    {
        kENewBloomGifting_Success = 0x0,
        kENewBloomGifting_UnknownFailure = 0x1,
        kENewBloomGifting_MalformedRequest = 0x2,
        kENewBloomGifting_FeatureDisabled = 0x3,
        kENewBloomGifting_ItemNotFound = 0x4,
        kENewBloomGifting_PlayerNotAllowedToGiveGifts = 0x5,
        kENewBloomGifting_TargetNotAllowedToReceiveGifts = 0x6,
        kENewBloomGifting_ServerNotAuthorized = 0x64,
        kENewBloomGifting_PlayerNotInLobby = 0x65,
        kENewBloomGifting_TargetNotInLobby = 0x66,
        kENewBloomGifting_LobbyNotEligible = 0x67,
        kENewBloomGifting_TargetNotFriend = 0xc8,
        kENewBloomGifting_TargetFriendDurationTooShort = 0xc9,
    };
};
