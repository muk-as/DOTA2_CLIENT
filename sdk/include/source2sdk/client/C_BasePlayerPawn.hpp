#pragma once
#include "source2sdk/client/C_BaseCombatCharacter.hpp"
#include "source2sdk/client/sky3dparams_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CBasePlayerController;
};

namespace source2sdk::client
{
    class CPlayer_AutoaimServices;
};

namespace source2sdk::client
{
    class CPlayer_CameraServices;
};

namespace source2sdk::client
{
    class CPlayer_FlashlightServices;
};

namespace source2sdk::client
{
    class CPlayer_ItemServices;
};

namespace source2sdk::client
{
    class CPlayer_MovementServices;
};

namespace source2sdk::client
{
    class CPlayer_ObserverServices;
};

namespace source2sdk::client
{
    class CPlayer_UseServices;
};

namespace source2sdk::client
{
    class CPlayer_WaterServices;
};

namespace source2sdk::client
{
    class CPlayer_WeaponServices;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xba8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MNetworkUserGroupProxy "C_BasePlayerPawn"
    // static metadata: MNetworkUserGroupProxy "C_BasePlayerPawn"
    // static metadata: MNetworkExcludeByUserGroup "FogController"
    // static metadata: MNetworkIncludeByUserGroup "Player"
    // static metadata: MNetworkIncludeByUserGroup "Water"
    // static metadata: MNetworkIncludeByUserGroup "LocalPlayerExclusive"
    // static metadata: MNetworkOverride "m_lifeState"
    // static metadata: MNetworkExcludeByName "m_pWeaponServices"
    // static metadata: MNetworkExcludeByName "m_pItemServices"
    // static metadata: MNetworkExcludeByName "m_pAutoaimServices"
    // static metadata: MNetworkExcludeByName "m_pObserverServices"
    // static metadata: MNetworkExcludeByName "m_pWaterServices"
    // static metadata: MNetworkExcludeByName "m_pUseServices"
    // static metadata: MNetworkExcludeByName "m_pFlashlightServices"
    // static metadata: MNetworkExcludeByName "m_pMovementServices"
    // static metadata: MNetworkVarNames "CPlayer_WeaponServices * m_pWeaponServices"
    // static metadata: MNetworkVarNames "CPlayer_ItemServices * m_pItemServices"
    // static metadata: MNetworkVarNames "CPlayer_AutoaimServices * m_pAutoaimServices"
    // static metadata: MNetworkVarNames "CPlayer_ObserverServices * m_pObserverServices"
    // static metadata: MNetworkVarNames "CPlayer_WaterServices * m_pWaterServices"
    // static metadata: MNetworkVarNames "CPlayer_UseServices * m_pUseServices"
    // static metadata: MNetworkVarNames "CPlayer_FlashlightServices * m_pFlashlightServices"
    // static metadata: MNetworkVarNames "CPlayer_CameraServices * m_pCameraServices"
    // static metadata: MNetworkVarNames "CPlayer_MovementServices * m_pMovementServices"
    // static metadata: MNetworkVarNames "uint32 m_iHideHUD"
    // static metadata: MNetworkVarNames "sky3dparams_t m_skybox3d"
    // static metadata: MNetworkVarNames "GameTime_t m_flDeathTime"
    // static metadata: MNetworkVarNames "CHandle< CBasePlayerController> m_hController"
    // static metadata: MNetworkVarNames "CHandle< CBasePlayerController> m_hDefaultController"
    #pragma pack(push, 1)
    class C_BasePlayerPawn : public client::C_BaseCombatCharacter
    {
    public:
        // metadata: MNetworkEnable
        client::CPlayer_WeaponServices* m_pWeaponServices; // 0xa58        
        // metadata: MNetworkEnable
        client::CPlayer_ItemServices* m_pItemServices; // 0xa60        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        client::CPlayer_AutoaimServices* m_pAutoaimServices; // 0xa68        
        // metadata: MNetworkEnable
        client::CPlayer_ObserverServices* m_pObserverServices; // 0xa70        
        // metadata: MNetworkEnable
        client::CPlayer_WaterServices* m_pWaterServices; // 0xa78        
        // metadata: MNetworkEnable
        client::CPlayer_UseServices* m_pUseServices; // 0xa80        
        // metadata: MNetworkEnable
        client::CPlayer_FlashlightServices* m_pFlashlightServices; // 0xa88        
        // metadata: MNetworkEnable
        client::CPlayer_CameraServices* m_pCameraServices; // 0xa90        
        // metadata: MNetworkEnable
        client::CPlayer_MovementServices* m_pMovementServices; // 0xa98        
        [[maybe_unused]] std::uint8_t pad_0xaa0[0x8]; // 0xaa0
        QAngle v_angle; // 0xaa8        
        QAngle v_anglePrevious; // 0xab4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        uint32_t m_iHideHUD; // 0xac0        
        [[maybe_unused]] std::uint8_t pad_0xac4[0x4]; // 0xac4
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        client::sky3dparams_t m_skybox3d; // 0xac8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flDeathTime; // 0xb58        
        Vector m_vecPredictionError; // 0xb5c        
        entity2::GameTime_t m_flPredictionErrorTime; // 0xb68        
        Vector m_vecLastCameraSetupLocalOrigin; // 0xb6c        
        entity2::GameTime_t m_flLastCameraSetupTime; // 0xb78        
        float m_flFOVSensitivityAdjust; // 0xb7c        
        float m_flMouseSensitivity; // 0xb80        
        Vector m_vOldOrigin; // 0xb84        
        float m_flOldSimulationTime; // 0xb90        
        int32_t m_nLastExecutedCommandNumber; // 0xb94        
        int32_t m_nLastExecutedCommandTick; // 0xb98        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnControllerChanged"
        // m_hController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::CBasePlayerController> m_hController;
        char m_hController[0x4]; // 0xb9c        
        // metadata: MNetworkEnable
        // m_hDefaultController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::CBasePlayerController> m_hDefaultController;
        char m_hDefaultController[0x4]; // 0xba0        
        bool m_bIsSwappingToPredictableController; // 0xba4        
        [[maybe_unused]] std::uint8_t pad_0xba5[0x3];
        
        // Datamap fields:
        // void m_hPawnListEntry; // 0xba6
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BasePlayerPawn because it is not a standard-layout class
    static_assert(sizeof(C_BasePlayerPawn) == 0xba8);
};
