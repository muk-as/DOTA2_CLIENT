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
    enum class EGCBaseClientMsg : std::uint32_t
    {
        k_EMsgGCPingRequest = 0xbb9,
        k_EMsgGCPingResponse = 0xbba,
        k_EMsgGCToClientPollConvarRequest = 0xbbb,
        k_EMsgGCToClientPollConvarResponse = 0xbbc,
        k_EMsgGCCompressedMsgToClient = 0xbbd,
        k_EMsgGCCompressedMsgToClient_Legacy = 0x20b,
        k_EMsgGCToClientRequestDropped = 0xbbe,
        k_EMsgGCClientWelcome = 0xfa4,
        k_EMsgGCServerWelcome = 0xfa5,
        k_EMsgGCClientHello = 0xfa6,
        k_EMsgGCServerHello = 0xfa7,
        k_EMsgGCClientConnectionStatus = 0xfa9,
        k_EMsgGCServerConnectionStatus = 0xfaa,
    };
};
