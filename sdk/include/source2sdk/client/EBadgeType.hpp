#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 22
    // Alignment: 4
    // Size: 0x4
    enum class EBadgeType : std::uint32_t
    {
        k_EBadgeType_Invalid = 0x0,
        k_EBadgeType_TI7_Midweek = 0x1,
        k_EBadgeType_TI7_Finals = 0x2,
        k_EBadgeType_TI7_AllEvent = 0x3,
        k_EBadgeType_TI8_Midweek = 0x4,
        k_EBadgeType_TI8_Finals = 0x5,
        k_EBadgeType_TI8_AllEvent = 0x6,
        k_EBadgeType_TI10 = 0x7,
        k_EBadgeType_TI11_PlayoffsDay1 = 0x8,
        k_EBadgeType_TI11_PlayoffsDay2 = 0x9,
        k_EBadgeType_TI11_PlayoffsDay3 = 0xa,
        k_EBadgeType_TI11_PlayoffsDay4 = 0xb,
        k_EBadgeType_TI11_FinalsWeekend = 0xc,
        k_EBadgeType_TI12_PlayoffsDay1 = 0xd,
        k_EBadgeType_TI12_PlayoffsDay2 = 0xe,
        k_EBadgeType_TI12_PlayoffsDay3 = 0xf,
        k_EBadgeType_TI12_FinalsWeekend = 0x10,
        k_EBadgeType_TI12_Special = 0x11,
        k_EBadgeType_TI13_FinalsDay1 = 0x12,
        k_EBadgeType_TI13_FinalsDay2 = 0x13,
        k_EBadgeType_TI13_FinalsDay3 = 0x14,
        k_EBadgeType_TI13_Special = 0x15,
    };
};
