#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class CAnimationGraphVisualizerPrimitiveType : std::uint32_t
    {
        ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Text = 0x0,
        ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Sphere = 0x1,
        ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Line = 0x2,
        ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Pie = 0x3,
        ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Axis = 0x4,
    };
};
