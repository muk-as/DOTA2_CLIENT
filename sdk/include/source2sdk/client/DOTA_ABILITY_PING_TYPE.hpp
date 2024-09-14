#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 16
    // Alignment: 4
    // Size: 0x4
    enum class DOTA_ABILITY_PING_TYPE : std::uint32_t
    {
        ABILITY_PING_READY = 0x1,
        ABILITY_PING_MANA = 0x2,
        ABILITY_PING_COOLDOWN = 0x3,
        ABILITY_PING_ENEMY = 0x4,
        ABILITY_PING_UNLEARNED = 0x5,
        ABILITY_PING_INBACKPACK = 0x6,
        ABILITY_PING_INSTASH = 0x7,
        ABILITY_PING_ONCOURIER = 0x8,
        ABILITY_PING_ALLY = 0x9,
        ABILITY_PING_LEARN_READY = 0xa,
        ABILITY_PING_WILL_LEARN = 0xb,
        ABILITY_PING_FUTURE_LEARN = 0xc,
        ABILITY_PING_NEUTRAL_OFFER = 0xd,
        ABILITY_PING_NEUTRAL_REQUEST = 0xe,
        ABILITY_PING_NEUTRAL_EQUIP = 0xf,
        ABILITY_PING_INCOURIERBACKPACK = 0x10,
    };
};
