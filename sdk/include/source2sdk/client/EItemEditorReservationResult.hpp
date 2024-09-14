#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class EItemEditorReservationResult : std::uint32_t
    {
        k_EItemEditorReservationResult_OK = 0x1,
        k_EItemEditorReservationResult_AlreadyExists = 0x2,
        k_EItemEditorReservationResult_Reserved = 0x3,
        k_EItemEditorReservationResult_TimedOut = 0x4,
    };
};
