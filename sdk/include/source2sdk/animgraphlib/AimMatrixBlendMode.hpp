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
    enum class AimMatrixBlendMode : std::uint32_t
    {
        // MPropertyFriendlyName "None"
        AimMatrixBlendMode_None = 0x0,
        // MPropertyFriendlyName "Additive"
        AimMatrixBlendMode_Additive = 0x1,
        // MPropertyFriendlyName "Model-Space Additive"
        AimMatrixBlendMode_ModelSpaceAdditive = 0x2,
        // MPropertyFriendlyName "Bone Mask"
        AimMatrixBlendMode_BoneMask = 0x3,
    };
};
