#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class DOTA_PlayerDraftState : std::uint32_t
    {
        DOTA_PLAYERDRAFT_STATE_INACTIVE = 0x0,
        DOTA_PLAYERDRAFT_STATE_INTRO = 0x1,
        DOTA_PLAYERDRAFT_STATE_DRAFT = 0x2,
        DOTA_PLAYERDRAFT_STATE_OUTRO = 0x3,
        DOTA_PLAYERDRAFT_STATE_COUNT = 0x4,
    };
};
