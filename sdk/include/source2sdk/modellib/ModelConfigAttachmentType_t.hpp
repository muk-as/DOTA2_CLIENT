#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class ModelConfigAttachmentType_t : std::uint32_t
    {
        MODEL_CONFIG_ATTACHMENT_INVALID = 0xffffffff,
        MODEL_CONFIG_ATTACHMENT_BONE_OR_ATTACHMENT = 0x0,
        MODEL_CONFIG_ATTACHMENT_ROOT_RELATIVE = 0x1,
        MODEL_CONFIG_ATTACHMENT_BONEMERGE = 0x2,
        MODEL_CONFIG_ATTACHMENT_COUNT = 0x3,
    };
};
