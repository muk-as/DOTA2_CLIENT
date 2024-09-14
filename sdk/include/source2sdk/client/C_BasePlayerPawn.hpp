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
    // Size: 0xb60
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
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
    #pragma pack(push, 1)
    class C_BasePlayerPawn : public client::C_BaseCombatCharacter
    {
    public:
        // metadata: MNetworkEnable
        client::CPlayer_WeaponServices* m_pWeaponServices; // 0xa10        
        // metadata: MNetworkEnable
        client::CPlayer_ItemServices* m_pItemServices; // 0xa18        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        client::CPlayer_AutoaimServices* m_pAutoaimServices; // 0xa20        
        // metadata: MNetworkEnable
        client::CPlayer_ObserverServices* m_pObserverServices; // 0xa28        
        // metadata: MNetworkEnable
        client::CPlayer_WaterServices* m_pWaterServices; // 0xa30        
        // metadata: MNetworkEnable
        client::CPlayer_UseServices* m_pUseServices; // 0xa38        
        // metadata: MNetworkEnable
        client::CPlayer_FlashlightServices* m_pFlashlightServices; // 0xa40        
        // metadata: MNetworkEnable
        client::CPlayer_CameraServices* m_pCameraServices; // 0xa48        
        // metadata: MNetworkEnable
        client::CPlayer_MovementServices* m_pMovementServices; // 0xa50        
        [[maybe_unused]] std::uint8_t pad_0xa58[0x8]; // 0xa58
        QAngle v_angle; // 0xa60        
        QAngle v_anglePrevious; // 0xa6c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        uint32_t m_iHideHUD; // 0xa78        
        [[maybe_unused]] std::uint8_t pad_0xa7c[0x4]; // 0xa7c
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        client::sky3dparams_t m_skybox3d; // 0xa80        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flDeathTime; // 0xb10        
        Vector m_vecPredictionError; // 0xb14        
        entity2::GameTime_t m_flPredictionErrorTime; // 0xb20        
        Vector m_vecLastCameraSetupLocalOrigin; // 0xb24        
        entity2::GameTime_t m_flLastCameraSetupTime; // 0xb30        
        float m_flFOVSensitivityAdjust; // 0xb34        
        float m_flMouseSensitivity; // 0xb38        
        Vector m_vOldOrigin; // 0xb3c        
        float m_flOldSimulationTime; // 0xb48        
        int32_t m_nLastExecutedCommandNumber; // 0xb4c        
        int32_t m_nLastExecutedCommandTick; // 0xb50        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnControllerChanged"
        // m_hController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::CBasePlayerController> m_hController;
        char m_hController[0x4]; // 0xb54        
        bool m_bIsSwappingToPredictableController; // 0xb58        
        [[maybe_unused]] std::uint8_t pad_0xb59[0x7];
        
        // Datamap fields:
        // void m_hPawnListEntry; // 0xb5a
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BasePlayerPawn because it is not a standard-layout class
    static_assert(sizeof(C_BasePlayerPawn) == 0xb60);
};
