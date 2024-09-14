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
    enum class DOTACustomCameraEventFlags_t : std::uint32_t
    {
        k_ECustomCameraEventFlags_Zoom = 0x1,
        k_ECustomCameraEventFlags_Position = 0x2,
        k_ECustomCameraEventFlags_PositionPlayerHero = 0x4,
        k_ECustomCameraEventFlags_Pitch = 0x8,
        k_ECustomCameraEventFlags_Yaw = 0x10,
        k_ECustomCameraEventFlags_Lock = 0x20,
        k_ECustomCameraEventFlags_Unlock = 0x40,
        k_ECustomCameraEventFlags_ResetDefault = 0x80,
        k_ECustomCameraEventFlags_SpecificPlayer = 0x100,
        k_ECustomCameraEventFlags_FadeOut = 0x200,
        k_ECustomCameraEventFlags_FadeIn = 0x400,
        k_ECustomCameraEventFlags_LetterboxOn = 0x800,
        k_ECustomCameraEventFlags_LetterboxOff = 0x1000,
    };
};
