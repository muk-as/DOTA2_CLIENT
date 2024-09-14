#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 6
    // Alignment: 4
    // Size: 0x4
    enum class GCProtoBufMsgSrc : std::uint32_t
    {
        GCProtoBufMsgSrc_Unspecified = 0x0,
        GCProtoBufMsgSrc_FromSystem = 0x1,
        GCProtoBufMsgSrc_FromSteamID = 0x2,
        GCProtoBufMsgSrc_FromGC = 0x3,
        GCProtoBufMsgSrc_ReplySystem = 0x4,
        GCProtoBufMsgSrc_SpoofedSteamID = 0x5,
    };
};
