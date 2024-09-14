#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 18
    // Alignment: 4
    // Size: 0x4
    enum class EDOTATriviaQuestionCategory : std::uint32_t
    {
        k_EDOTATriviaQuestionCategory_AbilityIcon = 0x0,
        k_EDOTATriviaQuestionCategory_AbilityCooldown = 0x1,
        k_EDOTATriviaQuestionCategory_HeroAttributes = 0x2,
        k_EDOTATriviaQuestionCategory_HeroMovementSpeed = 0x3,
        k_EDOTATriviaQuestionCategory_TalentTree = 0x4,
        k_EDOTATriviaQuestionCategory_HeroStats = 0x5,
        k_EDOTATriviaQuestionCategory_ItemPrice = 0x6,
        k_EDOTATriviaQuestionCategory_AbilitySound = 0x7,
        k_EDOTATriviaQuestionCategory_InvokerSpells = 0x8,
        k_EDOTATriviaQuestionCategory_AbilityManaCost = 0x9,
        k_EDOTATriviaQuestionCategory_HeroAttackSound = 0xa,
        k_EDOTATriviaQuestionCategory_AbilityName = 0xb,
        k_EDOTATriviaQuestionCategory_ItemComponents = 0xc,
        k_EDOTATriviaQuestionCategory_ItemLore = 0xd,
        k_EDOTATriviaQuestionCategory_ItemPassives = 0xe,
        k_EDOTATriviaQuestionCategory_STATIC_QUESTIONS_END = 0xf,
        k_EDOTATriviaQuestionCategory_DYNAMIC_QUESTIONS_START = 0x63,
        k_EDOTATriviaQuestionCategory_Dynamic_ItemBuild = 0x64,
    };
};
