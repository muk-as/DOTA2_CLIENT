#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 30
    // Alignment: 4
    // Size: 0x4
    enum class SVC_Messages : std::uint32_t
    {
        svc_ServerInfo = 0x28,
        svc_FlattenedSerializer = 0x29,
        svc_ClassInfo = 0x2a,
        svc_SetPause = 0x2b,
        svc_CreateStringTable = 0x2c,
        svc_UpdateStringTable = 0x2d,
        svc_VoiceInit = 0x2e,
        svc_VoiceData = 0x2f,
        svc_Print = 0x30,
        svc_Sounds = 0x31,
        svc_SetView = 0x32,
        svc_ClearAllStringTables = 0x33,
        svc_CmdKeyValues = 0x34,
        svc_BSPDecal = 0x35,
        svc_SplitScreen = 0x36,
        svc_PacketEntities = 0x37,
        svc_Prefetch = 0x38,
        svc_Menu = 0x39,
        svc_GetCvarValue = 0x3a,
        svc_StopSound = 0x3b,
        svc_PeerList = 0x3c,
        svc_PacketReliable = 0x3d,
        svc_HLTVStatus = 0x3e,
        svc_ServerSteamID = 0x3f,
        svc_FullFrameSplit = 0x46,
        svc_RconServerDetails = 0x47,
        svc_UserMessage = 0x48,
        svc_Broadcast_Command = 0x4a,
        svc_HltvFixupOperatorStatus = 0x4b,
        svc_UserCmds = 0x4c,
    };
};
