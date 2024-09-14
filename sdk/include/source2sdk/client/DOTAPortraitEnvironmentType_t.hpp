#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 11
    // Alignment: 4
    // Size: 0x4
    enum class DOTAPortraitEnvironmentType_t : std::uint32_t
    {
        DOTA_PORTRAIT_ENVIRONMENT_INVALID = 0xffffffff,
        DOTA_PORTRAIT_ENVIRONMENT_DEFAULT = 0x0,
        DOTA_PORTRAIT_ENVIRONMENT_FULL_BODY = 0x1,
        DOTA_PORTRAIT_ENVIRONMENT_CARD = 0x2,
        DOTA_PORTRAIT_ENVIRONMENT_WEBPAGE = 0x3,
        DOTA_PORTRAIT_ENVIRONMENT_FULL_BODY_RIGHT_SIDE = 0x4,
        DOTA_PORTRAIT_ENVIRONMENT_FULL_BODY_LOADOUT = 0x5,
        DOTA_PORTRAIT_ENVIRONMENT_ICON = 0x6,
        DOTA_PORTRAIT_ENVIRONMENT_SHOWCASE = 0x7,
        DOTA_PORTRAIT_ENVIRONMENT_FIGHTING = 0x8,
        DOTA_PORTRAIT_ENVIRONMENT_TYPE_COUNT = 0x9,
    };
};
