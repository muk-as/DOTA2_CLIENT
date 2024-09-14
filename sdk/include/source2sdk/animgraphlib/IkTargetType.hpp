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
    enum class IkTargetType : std::uint32_t
    {
        // MPropertyFriendlyName "Attachment"
        IkTarget_Attachment = 0x0,
        // MPropertyFriendlyName "Bone"
        IkTarget_Bone = 0x1,
        // MPropertyFriendlyName "Parameter (Model Space)"
        IkTarget_Parameter_ModelSpace = 0x2,
        // MPropertyFriendlyName "Parameter (World Space)"
        IkTarget_Parameter_WorldSpace = 0x3,
    };
};
