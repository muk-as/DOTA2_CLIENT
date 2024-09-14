#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 15
    // Alignment: 4
    // Size: 0x4
    enum class CLC_Messages : std::uint32_t
    {
        clc_ClientInfo = 0x14,
        clc_Move = 0x15,
        clc_VoiceData = 0x16,
        clc_BaselineAck = 0x17,
        clc_RespondCvarValue = 0x19,
        clc_FileCRCCheck = 0x1a,
        clc_LoadingProgress = 0x1b,
        clc_SplitPlayerConnect = 0x1c,
        clc_SplitPlayerDisconnect = 0x1e,
        clc_ServerStatus = 0x1f,
        clc_RequestPause = 0x21,
        clc_CmdKeyValues = 0x22,
        clc_RconServerDetails = 0x23,
        clc_HltvReplay = 0x24,
        clc_Diagnostic = 0x25,
    };
};
