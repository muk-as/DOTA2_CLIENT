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
    enum class EHeroSelectionText : std::uint32_t
    {
        k_EHeroSelectionText_Invalid = 0xffffffff,
        k_EHeroSelectionText_None = 0x0,
        k_EHeroSelectionText_ChooseHero = 0x1,
        k_EHeroSelectionText_AllDraft_Planning_YouFirst = 0x2,
        k_EHeroSelectionText_AllDraft_Planning_TheyFirst = 0x3,
        k_EHeroSelectionText_AllDraft_Banning = 0x4,
        k_EHeroSelectionText_AllDraft_Ban_Waiting = 0x5,
        k_EHeroSelectionText_AllDraft_PickTwo = 0x6,
        k_EHeroSelectionText_AllDraft_PickOneMore = 0x7,
        k_EHeroSelectionText_AllDraft_PickOne = 0x8,
        k_EHeroSelectionText_AllDraft_WaitingRadiant = 0x9,
        k_EHeroSelectionText_AllDraft_WaitingDire = 0xa,
        k_EHeroSelectionText_AllDraft_TeammateRandomed = 0xb,
        k_EHeroSelectionText_AllDraft_YouPicking_LosingGold = 0xc,
        k_EHeroSelectionText_AllDraft_TheyPicking_LosingGold = 0xd,
        k_EHeroSelectionText_CaptainsMode_ChooseCaptain = 0xe,
        k_EHeroSelectionText_CaptainsMode_WaitingForChooseCaptain = 0xf,
        k_EHeroSelectionText_CaptainsMode_YouSelect = 0x10,
        k_EHeroSelectionText_CaptainsMode_TheySelect = 0x11,
        k_EHeroSelectionText_CaptainsMode_YouBan = 0x12,
        k_EHeroSelectionText_CaptainsMode_TheyBan = 0x13,
        k_EHeroSelectionText_RandomDraft_HeroReview = 0x14,
        k_EHeroSelectionText_RandomDraft_RoundDisplay = 0x15,
        k_EHeroSelectionText_RandomDraft_Waiting = 0x16,
        k_EHeroSelectionText_EventGame_BanPhase = 0x17,
    };
};
