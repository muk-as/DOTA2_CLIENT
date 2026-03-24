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
        // Enumerator count: 11
        // Alignment: 4
        // Size: 0x_
        enum class EItemBattlerGameState : std::uint32_t
        {
            k_eGameState_Invalid = 0x0,
            k_eGameState_ChoosingEncounter = 0x1,
            k_eGameState_Encounter_Choice = 0x2,
            k_eGameState_Encounter_Shop = 0x3,
            k_eGameState_ChoosingMonster = 0x4,
            k_eGameState_SearchingForOpponent = 0x5,
            k_eGameState_ShowingOpponent = 0x6,
            k_eGameState_PreFight = 0x7,
            k_eGameState_Fight = 0x8,
            k_eGameState_PostFight = 0x9,
            k_eGameState_GameOver = 0xa,
        };
    };
};
