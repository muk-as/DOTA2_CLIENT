#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class SeqPoseSetting_t : std::uint32_t
    {
        SEQ_POSE_SETTING_CONSTANT = 0x0,
        SEQ_POSE_SETTING_ROTATION = 0x1,
        SEQ_POSE_SETTING_POSITION = 0x2,
        SEQ_POSE_SETTING_VELOCITY = 0x3,
    };
};
