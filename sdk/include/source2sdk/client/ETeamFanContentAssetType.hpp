#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 9
    // Alignment: 4
    // Size: 0x4
    enum class ETeamFanContentAssetType : std::uint32_t
    {
        k_eFanContentAssetType_LogoPNG = 0x1,
        k_eFanContentAssetType_LogoSVG = 0x2,
        k_eFanContentAssetType_Logo3D = 0x3,
        k_eFanContentAssetType_Players = 0x4,
        k_eFanContentAssetType_Sprays = 0x5,
        k_eFanContentAssetType_Wallpapers = 0x6,
        k_eFanContentAssetType_Emoticons = 0x7,
        k_eFanContentAssetType_VoiceLines = 0x8,
        k_eFanContentAssetType_Localization = 0x9,
    };
};
