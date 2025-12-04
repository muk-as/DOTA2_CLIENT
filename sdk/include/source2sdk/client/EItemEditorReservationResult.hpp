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
        // Enumerator count: 4
        // Alignment: 4
        // Size: 0x_
        enum class EItemEditorReservationResult : std::uint32_t
        {
            k_EItemEditorReservationResult_OK = 0x1,
            k_EItemEditorReservationResult_AlreadyExists = 0x2,
            k_EItemEditorReservationResult_Reserved = 0x3,
            k_EItemEditorReservationResult_TimedOut = 0x4,
        };
    };
};
