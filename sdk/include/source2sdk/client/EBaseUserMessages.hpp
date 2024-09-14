#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 52
    // Alignment: 4
    // Size: 0x4
    enum class EBaseUserMessages : std::uint32_t
    {
        UM_AchievementEvent = 0x65,
        UM_CloseCaption = 0x66,
        UM_CloseCaptionDirect = 0x67,
        UM_CurrentTimescale = 0x68,
        UM_DesiredTimescale = 0x69,
        UM_Fade = 0x6a,
        UM_GameTitle = 0x6b,
        UM_HudMsg = 0x6e,
        UM_HudText = 0x6f,
        UM_ColoredText = 0x71,
        UM_RequestState = 0x72,
        UM_ResetHUD = 0x73,
        UM_Rumble = 0x74,
        UM_SayText = 0x75,
        UM_SayText2 = 0x76,
        UM_SayTextChannel = 0x77,
        UM_Shake = 0x78,
        UM_ShakeDir = 0x79,
        UM_WaterShake = 0x7a,
        UM_TextMsg = 0x7c,
        UM_ScreenTilt = 0x7d,
        UM_VoiceMask = 0x80,
        UM_SendAudio = 0x82,
        UM_ItemPickup = 0x83,
        UM_AmmoDenied = 0x84,
        UM_ShowMenu = 0x86,
        UM_CreditsMsg = 0x87,
        UM_CloseCaptionPlaceholder = 0x8e,
        UM_CameraTransition = 0x8f,
        UM_AudioParameter = 0x90,
        UM_ParticleManager = 0x91,
        UM_HudError = 0x92,
        UM_CustomGameEvent = 0x94,
        UM_AnimGraphUpdate = 0x95,
        UM_HapticsManagerPulse = 0x96,
        UM_HapticsManagerEffect = 0x97,
        UM_CommandQueueState = 0x98,
        UM_UpdateCssClasses = 0x99,
        UM_ServerFrameTime = 0x9a,
        UM_LagCompensationError = 0x9b,
        UM_RequestDllStatus = 0x9c,
        UM_RequestUtilAction = 0x9d,
        UM_UtilActionResponse = 0x9e,
        UM_DllStatusResponse = 0x9f,
        UM_RequestInventory = 0xa0,
        UM_InventoryResponse = 0xa1,
        UM_RequestDiagnostic = 0xa2,
        UM_DiagnosticResponse = 0xa3,
        UM_ExtraUserData = 0xa4,
        UM_NotifyResponseFound = 0xa5,
        UM_PlayResponseConditional = 0xa6,
        UM_MAX_BASE = 0xc8,
    };
};
