#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particleslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particleslib
    {
        // Enumerator count: 20
        // Alignment: 4
        // Size: 0x4
        enum class ParticleVecType_t : std::uint32_t
        {
            PVEC_TYPE_INVALID = 0xffffffff,
            PVEC_TYPE_LITERAL = 0x0,
            PVEC_TYPE_LITERAL_COLOR = 0x1,
            PVEC_TYPE_NAMED_VALUE = 0x2,
            PVEC_TYPE_PARTICLE_VECTOR = 0x3,
            PVEC_TYPE_PARTICLE_INITIAL_VECTOR = 0x4,
            PVEC_TYPE_PARTICLE_VELOCITY = 0x5,
            PVEC_TYPE_CP_VALUE = 0x6,
            PVEC_TYPE_CP_RELATIVE_POSITION = 0x7,
            PVEC_TYPE_CP_RELATIVE_DIR = 0x8,
            PVEC_TYPE_CP_RELATIVE_RANDOM_DIR = 0x9,
            PVEC_TYPE_FLOAT_COMPONENTS = 0xa,
            PVEC_TYPE_FLOAT_INTERP_CLAMPED = 0xb,
            PVEC_TYPE_FLOAT_INTERP_OPEN = 0xc,
            PVEC_TYPE_FLOAT_INTERP_GRADIENT = 0xd,
            PVEC_TYPE_RANDOM_UNIFORM = 0xe,
            PVEC_TYPE_RANDOM_UNIFORM_OFFSET = 0xf,
            PVEC_TYPE_CP_DELTA = 0x10,
            PVEC_TYPE_CLOSEST_CAMERA_POSITION = 0x11,
            PVEC_TYPE_COUNT = 0x12,
        };
    };
};
