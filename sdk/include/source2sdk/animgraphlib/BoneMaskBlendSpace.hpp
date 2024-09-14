#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class BoneMaskBlendSpace : std::uint32_t
    {
        // MPropertyFriendlyName "Parent Space"
        BlendSpace_Parent = 0x0,
        // MPropertyFriendlyName "Model Space"
        BlendSpace_Model = 0x1,
        // MPropertyFriendlyName "Model Space, Rotation Only"
        BlendSpace_Model_RotationOnly = 0x2,
        // MPropertyFriendlyName "Model Space, Translation Only"
        BlendSpace_Model_TranslationOnly = 0x3,
    };
};
