#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 25
    // Alignment: 4
    // Size: 0x4
    enum class DOTAChatChannelType_t : std::uint32_t
    {
        DOTAChannelType_Regional = 0x0,
        DOTAChannelType_Custom = 0x1,
        DOTAChannelType_Party = 0x2,
        DOTAChannelType_Lobby = 0x3,
        DOTAChannelType_Team = 0x4,
        DOTAChannelType_Guild = 0x5,
        DOTAChannelType_Fantasy = 0x6,
        DOTAChannelType_Whisper = 0x7,
        DOTAChannelType_Console = 0x8,
        DOTAChannelType_Tab = 0x9,
        DOTAChannelType_Invalid = 0xa,
        DOTAChannelType_GameAll = 0xb,
        DOTAChannelType_GameAllies = 0xc,
        DOTAChannelType_GameSpectator = 0xd,
        DOTAChannelType_GameCoaching = 0xe,
        DOTAChannelType_Cafe = 0xf,
        DOTAChannelType_CustomGame = 0x10,
        DOTAChannelType_Private = 0x11,
        DOTAChannelType_PostGame = 0x12,
        DOTAChannelType_BattleCup = 0x13,
        DOTAChannelType_HLTVSpectator = 0x14,
        DOTAChannelType_GameEvents = 0x15,
        DOTAChannelType_Trivia = 0x16,
        DOTAChannelType_NewPlayer = 0x17,
        DOTAChannelType_PrivateCoaching = 0x18,
    };
};
