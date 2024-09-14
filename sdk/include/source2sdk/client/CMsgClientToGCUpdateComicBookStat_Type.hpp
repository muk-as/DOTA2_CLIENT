#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class CMsgClientToGCUpdateComicBookStat_Type : std::uint32_t
    {
        CMsgClientToGCUpdateComicBookStat_Type_HighestPageRead = 0x1,
        CMsgClientToGCUpdateComicBookStat_Type_SecondsSpentReading = 0x2,
        CMsgClientToGCUpdateComicBookStat_Type_HighestPercentRead = 0x3,
    };
};
