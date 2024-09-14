#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem
{
    // Enumerator count: 6
    // Alignment: 4
    // Size: 0x4
    enum class SosEditItemType_t : std::uint32_t
    {
        SOS_EDIT_ITEM_TYPE_SOUNDEVENTS = 0x0,
        SOS_EDIT_ITEM_TYPE_SOUNDEVENT = 0x1,
        SOS_EDIT_ITEM_TYPE_LIBRARYSTACKS = 0x2,
        SOS_EDIT_ITEM_TYPE_STACK = 0x3,
        SOS_EDIT_ITEM_TYPE_OPERATOR = 0x4,
        SOS_EDIT_ITEM_TYPE_FIELD = 0x5,
    };
};
