#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 8
    // Alignment: 4
    // Size: 0x4
    enum class EBaseClientMessages : std::uint32_t
    {
        CM_CustomGameEvent = 0x118,
        CM_CustomGameEventBounce = 0x119,
        CM_ClientUIEvent = 0x11a,
        CM_DevPaletteVisibilityChanged = 0x11b,
        CM_WorldUIControllerHasPanelChanged = 0x11c,
        CM_RotateAnchor = 0x11d,
        CM_ListenForResponseFound = 0x11e,
        CM_MAX_BASE = 0x12c,
    };
};
