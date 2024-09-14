#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 21
    // Alignment: 4
    // Size: 0x4
    enum class EDemoCommands : std::uint32_t
    {
        DEM_Error = 0xffffffff,
        DEM_Stop = 0x0,
        DEM_FileHeader = 0x1,
        DEM_FileInfo = 0x2,
        DEM_SyncTick = 0x3,
        DEM_SendTables = 0x4,
        DEM_ClassInfo = 0x5,
        DEM_StringTables = 0x6,
        DEM_Packet = 0x7,
        DEM_SignonPacket = 0x8,
        DEM_ConsoleCmd = 0x9,
        DEM_CustomData = 0xa,
        DEM_CustomDataCallbacks = 0xb,
        DEM_UserCmd = 0xc,
        DEM_FullPacket = 0xd,
        DEM_SaveGame = 0xe,
        DEM_SpawnGroups = 0xf,
        DEM_AnimationData = 0x10,
        DEM_AnimationHeader = 0x11,
        DEM_Max = 0x12,
        DEM_IsCompressed = 0x40,
    };
};
