#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Enumerator count: 5
        // Alignment: 4
        // Size: 0x_
        enum class NPCPhysicsHullType_t : std::uint32_t
        {
            // MPropertyFriendlyName "None"
            eInvalid = 0x0,
            // MPropertyFriendlyName "Capsule - Ground"
            eGroundCapsule = 0x1,
            // MPropertyFriendlyName "Capsule - Centered"
            eCenteredCapsule = 0x2,
            // MPropertyFriendlyName "Capsule - Generic"
            eGenericCapsule = 0x3,
            // MPropertyFriendlyName "Box - Ground"
            eGroundBox = 0x4,
        };
    };
};
