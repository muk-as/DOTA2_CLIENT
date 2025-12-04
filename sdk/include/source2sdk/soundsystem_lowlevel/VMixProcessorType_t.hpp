#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_lowlevel
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem_lowlevel
    {
        // Enumerator count: 32
        // Alignment: 2
        // Size: 0x_
        enum class VMixProcessorType_t : std::uint16_t
        {
            VPROCESSOR_UNKNOWN = 0x0,
            VPROCESSOR_RT_PITCH = 0x1,
            VPROCESSOR_STEAMAUDIO_HRTF = 0x2,
            VPROCESSOR_DYNAMICS = 0x3,
            VPROCESSOR_PRESETDSP = 0x4,
            VPROCESSOR_DELAY = 0x5,
            VPROCESSOR_MOD_DELAY = 0x6,
            VPROCESSOR_DIFFUSOR = 0x7,
            VPROCESSOR_BOXVERB = 0x8,
            VPROCESSOR_BOXVERB2 = 0x9,
            VPROCESSOR_FREEVERB = 0xa,
            VPROCESSOR_PLATEVERB = 0xb,
            VPROCESSOR_FULLWAVE_INTEGRATOR = 0xc,
            VPROCESSOR_FILTER = 0xd,
            VPROCESSOR_STEAMAUDIO_PATHING = 0xe,
            VPROCESSOR_EQ8 = 0xf,
            VPROCESSOR_ENVELOPE = 0x10,
            VPROCESSOR_VOCODER = 0x11,
            VPROCESSOR_CONVOLUTION = 0x12,
            VPROCESSOR_DUAL_COMPRESSOR = 0x13,
            VPROCESSOR_DYNAMICS_3BAND = 0x14,
            VPROCESSOR_DYNAMICS_COMPRESSOR = 0x15,
            VPROCESSOR_SHAPER = 0x16,
            VPROCESSOR_PANNER = 0x17,
            VPROCESSOR_UTILITY = 0x18,
            VPROCESSOR_AUTOFILTER = 0x19,
            VPROCESSOR_OSC = 0x1a,
            VPROCESSOR_STEREODELAY = 0x1b,
            VPROCESSOR_EFFECT_CHAIN = 0x1c,
            VPROCESSOR_SUBGRAPH_SWITCH = 0x1d,
            VPROCESSOR_STEAMAUDIO_DIRECT = 0x1e,
            VPROCESSOR_STEAMAUDIO_HYBRIDREVERB = 0x1f,
        };
    };
};
