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
        // Enumerator count: 18
        // Alignment: 4
        // Size: 0x_
        enum class ESource2PlayStatsFieldType : std::uint32_t
        {
            Source2PlayStats_Invalid = 0x0,
            Source2PlayStats_UInt64 = 0x1,
            Source2PlayStats_UInt32 = 0x2,
            Source2PlayStats_UInt16 = 0x3,
            Source2PlayStats_UInt8 = 0x4,
            Source2PlayStats_Int64 = 0x5,
            Source2PlayStats_Int32 = 0x6,
            Source2PlayStats_Int16 = 0x7,
            Source2PlayStats_Int8 = 0x8,
            Source2PlayStats_Float64 = 0x9,
            Source2PlayStats_Float32 = 0xa,
            Source2PlayStats_Bool = 0xb,
            Source2PlayStats_String = 0xc,
            Source2PlayStats_LowCardinalityString = 0xd,
            Source2PlayStats_UTCDateTime = 0xe,
            Source2PlayStats_SteamIDTrustBucket = 0xf,
            Source2PlayStats_SteamIDTrustBucketMin = 0x10,
            Source2PlayStats_SteamID = 0x11,
        };
    };
};
