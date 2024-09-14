#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem
{
    // Enumerator count: 30
    // Alignment: 4
    // Size: 0x4
    enum class soundlevel_t : std::uint32_t
    {
        SNDLVL_NONE = 0x0,
        SNDLVL_20dB = 0x14,
        SNDLVL_25dB = 0x19,
        SNDLVL_30dB = 0x1e,
        SNDLVL_35dB = 0x23,
        SNDLVL_40dB = 0x28,
        SNDLVL_45dB = 0x2d,
        SNDLVL_50dB = 0x32,
        SNDLVL_55dB = 0x37,
        SNDLVL_IDLE = 0x3c,
        SNDLVL_60dB = 0x3c,
        SNDLVL_65dB = 0x41,
        SNDLVL_STATIC = 0x42,
        SNDLVL_70dB = 0x46,
        SNDLVL_NORM = 0x4b,
        SNDLVL_75dB = 0x4b,
        SNDLVL_80dB = 0x50,
        SNDLVL_TALKING = 0x50,
        SNDLVL_85dB = 0x55,
        SNDLVL_90dB = 0x5a,
        SNDLVL_95dB = 0x5f,
        SNDLVL_100dB = 0x64,
        SNDLVL_105dB = 0x69,
        SNDLVL_110dB = 0x6e,
        SNDLVL_120dB = 0x78,
        SNDLVL_130dB = 0x82,
        SNDLVL_GUNFIRE = 0x8c,
        SNDLVL_140dB = 0x8c,
        SNDLVL_150dB = 0x96,
        SNDLVL_180dB = 0xb4,
    };
};
