#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Enumerator count: 42
        // Alignment: 4
        // Size: 0x_
        enum class ENotificationType : std::uint32_t
        {
            kENotificationType_None = 0x0,
            kENotificationType_Item_RETIRED = 0x1,
            kENotificationType_ReportActionTaken = 0x2,
            kENotificationType_RecruitmentAccepted = 0x3,
            kENotificationType_FantasyDraftScheduled = 0x4,
            kENotificationType_FantasyOwnerJoined = 0x5,
            kENotificationType_FantasyInvited = 0x6,
            kENotificationType_FantasyCreate = 0x7,
            kENotificationType_NeedOfficialInfoForLeaderboard_RETIRED = 0x8,
            kENotificationType_LowPriorityBanForReports = 0x9,
            kENotificationType_GenericMessage = 0xa,
            kENotificationType_CompendiumGoal = 0xb,
            kENotificationType_CompendiumLevel = 0xc,
            kENotificationType_CompendiumMessage = 0xd,
            kENotificationType_CompendiumPoints = 0xe,
            kENotificationType_FantasyMatchupResult = 0xf,
            kENotificationType_TrophyAwarded = 0x10,
            kENotificationType_TrophyLevelUp = 0x11,
            kENotificationType_FantasyTradeSuccess = 0x12,
            kENotificationType_FantasyTradeFailure = 0x13,
            kENotificationType_AllHeroChallengeUpdated = 0x14,
            kENotificationType_FantasyNewSeason = 0x15,
            kENotificationType_LowPriorityBanForAbandons = 0x16,
            kENotificationType_BattlePassCollectibles_2017 = 0x17,
            kENotificationType_BattlePassCollectibles_2018 = 0x18,
            kENotificationType_BattlePassCollectibles_2019 = 0x19,
            kENotificationType_KickedFromGuild = 0x1a,
            kENotificationType_GuildLevelUp = 0x1b,
            kENotificationType_GuildPromoted = 0x1c,
            kENotificationType_PlusFreeTrial = 0x1d,
            kENotificationType_OverwatchConviction = 0x1e,
            kENotificationType_FromEvent = 0x1f,
            kENotificationType_IndividualRankUpdate = 0x20,
            kENotificationType_SmurfAssociationWarning = 0x21,
            kENotificationType_ShowcaseConvicted = 0x22,
            kENotificationType_BehaviorScoreupdate = 0x23,
            kENotificationType_Exploit2023 = 0x24,
            kENotificationType_AccountSharingBan = 0x25,
            kENotificationType_GiftOpened = 0x26,
            kENotificationType_ImmortalRankUpdate_2026 = 0x27,
            kENotificationType_OtherRankUpdate_2026 = 0x28,
            kENotificationTypeCount = 0x29,
        };
    };
};
