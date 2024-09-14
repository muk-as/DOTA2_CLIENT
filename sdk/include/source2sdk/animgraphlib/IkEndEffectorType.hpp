#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Enumerator count: 2
    // Alignment: 4
    // Size: 0x4
    enum class IkEndEffectorType : std::uint32_t
    {
        // MPropertyFriendlyName "Attachment"
        IkEndEffector_Attachment = 0x0,
        // MPropertyFriendlyName "Last Bone in Chain"
        IkEndEffector_Bone = 0x1,
    };
};
