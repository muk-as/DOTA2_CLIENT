#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 32
    // Alignment: 4
    // Size: 0x4
    enum class ELanguage : std::uint32_t
    {
        k_Lang_None = 0xffffffff,
        k_Lang_First = 0x0,
        k_Lang_English = 0x0,
        k_Lang_German = 0x1,
        k_Lang_French = 0x2,
        k_Lang_Italian = 0x3,
        k_Lang_Korean = 0x4,
        k_Lang_Spanish = 0x5,
        k_Lang_Simplified_Chinese = 0x6,
        k_Lang_Traditional_Chinese = 0x7,
        k_Lang_Russian = 0x8,
        k_Lang_Thai = 0x9,
        k_Lang_Japanese = 0xa,
        k_Lang_Portuguese = 0xb,
        k_Lang_Polish = 0xc,
        k_Lang_Danish = 0xd,
        k_Lang_Dutch = 0xe,
        k_Lang_Finnish = 0xf,
        k_Lang_Norwegian = 0x10,
        k_Lang_Swedish = 0x11,
        k_Lang_Hungarian = 0x12,
        k_Lang_Czech = 0x13,
        k_Lang_Romanian = 0x14,
        k_Lang_Turkish = 0x15,
        k_Lang_Brazilian = 0x16,
        k_Lang_Bulgarian = 0x17,
        k_Lang_Greek = 0x18,
        k_Lang_Ukrainian = 0x19,
        k_Lang_Latam_Spanish = 0x1a,
        k_Lang_Vietnamese = 0x1b,
        k_Lang_Indonesian = 0x1c,
        k_Lang_MAX = 0x1d,
    };
};
