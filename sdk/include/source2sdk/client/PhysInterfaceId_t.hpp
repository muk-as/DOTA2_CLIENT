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
        // Enumerator count: 8
        // Alignment: 4
        // Size: 0x_
        enum class PhysInterfaceId_t : std::uint32_t
        {
            PIID_UNKNOWN = 0x0,
            PIID_IPHYSICSBODY = 0x1,
            PIID_IPHYSAGGREGATE = 0x2,
            PIID_IPHYSICSJOINT = 0x3,
            PIID_IPHYSICSMOTIONCONTROLLER = 0x4,
            PIID_IPHYSICSPARTICLEROPE = 0x5,
            PIID_IPHYSICSRAGDOLLCONTROL = 0x6,
            PIID_NUM_TYPES = 0x7,
        };
    };
};
