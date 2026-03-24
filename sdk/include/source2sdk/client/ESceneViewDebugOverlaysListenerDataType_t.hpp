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
        // Enumerator count: 7
        // Alignment: 4
        // Size: 0x_
        enum class ESceneViewDebugOverlaysListenerDataType_t : std::uint32_t
        {
            k_ESceneViewDebugOverlaysListenerDataType_Unknown = 0x0,
            k_ESceneViewDebugOverlaysListenerDataType_Sphere = 0x1,
            k_ESceneViewDebugOverlaysListenerDataType_Capsule = 0x2,
            k_ESceneViewDebugOverlaysListenerDataType_BoxAngles = 0x3,
            k_ESceneViewDebugOverlaysListenerDataType_Line = 0x4,
            k_ESceneViewDebugOverlaysListenerDataType_SolidBoxAngles = 0x5,
            k_ESceneViewDebugOverlaysListenerDataType_Text3D = 0x6,
        };
    };
};
