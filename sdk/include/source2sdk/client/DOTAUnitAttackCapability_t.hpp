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
    enum class DOTAUnitAttackCapability_t : std::uint32_t
    {
        DOTA_UNIT_CAP_NO_ATTACK = 0x0,
        DOTA_UNIT_CAP_MELEE_ATTACK = 0x1,
        DOTA_UNIT_CAP_RANGED_ATTACK = 0x2,
        DOTA_UNIT_CAP_RANGED_ATTACK_DIRECTIONAL = 0x4,
        DOTA_UNIT_ATTACK_CAPABILITY_BIT_COUNT = 0x3,
    };
};
