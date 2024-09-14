#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 19
    // Alignment: 4
    // Size: 0x4
    enum class SteamUGCQuery : std::uint32_t
    {
        RankedByVote = 0x0,
        RankedByPublicationDate = 0x1,
        AcceptedForGameRankedByAcceptanceDate = 0x2,
        RankedByTrend = 0x3,
        FavoritedByFriendsRankedByPublicationDate = 0x4,
        CreatedByFriendsRankedByPublicationDate = 0x5,
        RankedByNumTimesReported = 0x6,
        CreatedByFollowedUsersRankedByPublicationDate = 0x7,
        NotYetRated = 0x8,
        RankedByTotalVotesAsc = 0x9,
        RankedByVotesUp = 0xa,
        RankedByTextSearch = 0xb,
        RankedByTotalUniqueSubscriptions = 0xc,
        RankedByPlaytimeTrend = 0xd,
        RankedByTotalPlaytime = 0xe,
        RankedByAveragePlaytimeTrend = 0xf,
        RankedByLifetimeAveragePlaytime = 0x10,
        RankedByPlaytimeSessionsTrend = 0x11,
        RankedByLifetimePlaytimeSessions = 0x12,
    };
};
