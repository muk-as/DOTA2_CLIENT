#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 39
    // Alignment: 4
    // Size: 0x4
    enum class EStartFindingMatchResult : std::uint32_t
    {
        k_EStartFindingMatchResult_Invalid = 0x0,
        k_EStartFindingMatchResult_OK = 0x1,
        k_EStartFindingMatchResult_AlreadySearching = 0x2,
        k_EStartFindingMatchResult_FailGeneric = 0x64,
        k_EStartFindingMatchResult_FailedIgnore = 0x65,
        k_EStartFindingMatchResult_MatchmakingDisabled = 0x66,
        k_EStartFindingMatchResult_RegionOffline = 0x67,
        k_EStartFindingMatchResult_MatchmakingCooldown = 0x68,
        k_EStartFindingMatchResult_ClientOutOfDate = 0x69,
        k_EStartFindingMatchResult_CompetitiveNoLowPriority = 0x6a,
        k_EStartFindingMatchResult_CompetitiveNotUnlocked = 0x6b,
        k_EStartFindingMatchResult_GameModeNotUnlocked = 0x6c,
        k_EStartFindingMatchResult_CompetitiveNotEnoughPlayTime = 0x6d,
        k_EStartFindingMatchResult_MissingInitialSkill = 0x6e,
        k_EStartFindingMatchResult_CompetitiveRankSpreadTooLarge = 0x6f,
        k_EStartFindingMatchResult_MemberAlreadyInLobby = 0x70,
        k_EStartFindingMatchResult_MemberNotVACVerified = 0x71,
        k_EStartFindingMatchResult_WeekendTourneyBadPartySize = 0x72,
        k_EStartFindingMatchResult_WeekendTourneyTeamBuyInTooSmall = 0x73,
        k_EStartFindingMatchResult_WeekendTourneyIndividualBuyInTooLarge = 0x74,
        k_EStartFindingMatchResult_WeekendTourneyTeamBuyInTooLarge = 0x75,
        k_EStartFindingMatchResult_MemberMissingEventOwnership = 0x76,
        k_EStartFindingMatchResult_WeekendTourneyNotUnlocked = 0x77,
        k_EStartFindingMatchResult_WeekendTourneyRecentParticipation = 0x78,
        k_EStartFindingMatchResult_MemberMissingAnchoredPhoneNumber = 0x79,
        k_EStartFindingMatchResult_NotMemberOfClan = 0x7a,
        k_EStartFindingMatchResult_CoachesChallengeBadPartySize = 0x7b,
        k_EStartFindingMatchResult_CoachesChallengeRequirementsNotMet = 0x7c,
        k_EStartFindingMatchResult_InvalidRoleSelections = 0x7d,
        k_EStartFindingMatchResult_PhoneNumberDiscrepancy = 0x7e,
        k_EStartFindingMatchResult_NoQueuePoints = 0x7f,
        k_EStartFindingMatchResult_MemberMissingGauntletFlag = 0x80,
        k_EStartFindingMatchResult_MemberGauntletTooRecent = 0x81,
        k_EStartFindingMatchResult_DifficultyNotUnlocked = 0x82,
        k_EStartFindingMatchResult_CoachesNotAllowedInParty = 0x83,
        k_EStartFindingMatchResult_MatchmakingBusy = 0x84,
        k_EStartFindingMatchResult_SteamChinaBanned = 0x85,
        k_EStartFindingMatchResult_SteamChinaInvalidMixedParty = 0x86,
        k_EStartFindingMatchResult_RestrictedFromRanked = 0x87,
    };
};
