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
        // Enumerator count: 7
        // Alignment: 4
        // Size: 0x_
        enum class DOTAProjectileAttachment_t : std::uint32_t
        {
            DOTA_PROJECTILE_ATTACHMENT_NONE = 0x0,
            DOTA_PROJECTILE_ATTACHMENT_ATTACK_1 = 0x1,
            DOTA_PROJECTILE_ATTACHMENT_ATTACK_2 = 0x2,
            DOTA_PROJECTILE_ATTACHMENT_HITLOCATION = 0x3,
            DOTA_PROJECTILE_ATTACHMENT_ATTACK_3 = 0x4,
            DOTA_PROJECTILE_ATTACHMENT_ATTACK_4 = 0x5,
            DOTA_PROJECTILE_ATTACHMENT_LAST = 0x6,
        };
    };
};
