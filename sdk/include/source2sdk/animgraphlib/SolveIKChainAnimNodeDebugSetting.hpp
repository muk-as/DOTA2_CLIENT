#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Enumerator count: 7
    // Alignment: 4
    // Size: 0x4
    enum class SolveIKChainAnimNodeDebugSetting : std::uint32_t
    {
        // MPropertyFriendlyName "None"
        SOLVEIKCHAINANIMNODEDEBUGSETTING_None = 0x0,
        // MPropertyFriendlyName "Debug X Axis Circle"
        SOLVEIKCHAINANIMNODEDEBUGSETTING_X_Axis_Circle = 0x1,
        // MPropertyFriendlyName "Debug Y Axis Circle"
        SOLVEIKCHAINANIMNODEDEBUGSETTING_Y_Axis_Circle = 0x2,
        // MPropertyFriendlyName "Debug Z Axis Circle"
        SOLVEIKCHAINANIMNODEDEBUGSETTING_Z_Axis_Circle = 0x3,
        // MPropertyFriendlyName "Debug Hold Forward"
        SOLVEIKCHAINANIMNODEDEBUGSETTING_Forward = 0x4,
        // MPropertyFriendlyName "Debug Hold Up"
        SOLVEIKCHAINANIMNODEDEBUGSETTING_Up = 0x5,
        // MPropertyFriendlyName "Debug Hold Left"
        SOLVEIKCHAINANIMNODEDEBUGSETTING_Left = 0x6,
    };
};
