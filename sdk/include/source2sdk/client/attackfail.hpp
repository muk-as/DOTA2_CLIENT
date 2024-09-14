#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 8
    // Alignment: 4
    // Size: 0x4
    enum class attackfail : std::uint32_t
    {
        DOTA_ATTACK_RECORD_FAIL_NO = 0x0,
        DOTA_ATTACK_RECORD_FAIL_TERRAIN_MISS = 0x1,
        DOTA_ATTACK_RECORD_FAIL_SOURCE_MISS = 0x2,
        DOTA_ATTACK_RECORD_FAIL_TARGET_EVADED = 0x3,
        DOTA_ATTACK_RECORD_FAIL_TARGET_INVULNERABLE = 0x4,
        DOTA_ATTACK_RECORD_FAIL_TARGET_OUT_OF_RANGE = 0x5,
        DOTA_ATTACK_RECORD_CANNOT_FAIL = 0x6,
        DOTA_ATTACK_RECORD_FAIL_BLOCKED_BY_OBSTRUCTION = 0x7,
    };
};
