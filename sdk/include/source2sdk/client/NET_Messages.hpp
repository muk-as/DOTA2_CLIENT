#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 13
    // Alignment: 4
    // Size: 0x4
    enum class NET_Messages : std::uint32_t
    {
        net_NOP = 0x0,
        net_Disconnect_Legacy = 0x1,
        net_SplitScreenUser = 0x3,
        net_Tick = 0x4,
        net_StringCmd = 0x5,
        net_SetConVar = 0x6,
        net_SignonState = 0x7,
        net_SpawnGroup_Load = 0x8,
        net_SpawnGroup_ManifestUpdate = 0x9,
        net_SpawnGroup_SetCreationTick = 0xb,
        net_SpawnGroup_Unload = 0xc,
        net_SpawnGroup_LoadCompleted = 0xd,
        net_DebugOverlay = 0xf,
    };
};
