#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 6
    // Alignment: 4
    // Size: 0x4
    enum class EShowcaseItemState : std::uint32_t
    {
        k_eShowcaseItemState_Ok = 0x0,
        k_eShowcaseItemState_MinorModifications = 0x1,
        k_eShowcaseItemState_ValidityUnknown = 0x2,
        k_eShowcaseItemState_PartiallyInvalid = 0x3,
        k_eShowcaseItemState_Invalid = 0x4,
        k_eShowcaseItemState_Failure = 0x5,
    };
};
