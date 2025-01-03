#pragma once
#include "source2sdk/client/sndopvarlatchdata_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseCombatCharacter.hpp"
#include "source2sdk/server/sky3dparams_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CAI_Expresser;
};

namespace source2sdk::server
{
    class CBasePlayerController;
};

namespace source2sdk::server
{
    class CPlayer_AutoaimServices;
};

namespace source2sdk::server
{
    class CPlayer_CameraServices;
};

namespace source2sdk::server
{
    class CPlayer_FlashlightServices;
};

namespace source2sdk::server
{
    class CPlayer_ItemServices;
};

namespace source2sdk::server
{
    class CPlayer_MovementServices;
};

namespace source2sdk::server
{
    class CPlayer_ObserverServices;
};

namespace source2sdk::server
{
    class CPlayer_UseServices;
};

namespace source2sdk::server
{
    class CPlayer_WaterServices;
};

namespace source2sdk::server
{
    class CPlayer_WeaponServices;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xa20
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MNetworkUserGroupProxy "CBasePlayerPawn"
    // static metadata: MNetworkUserGroupProxy "CBasePlayerPawn"
    // static metadata: MNetworkExcludeByUserGroup "FogController"
    // static metadata: MNetworkIncludeByUserGroup "Player"
    // static metadata: MNetworkIncludeByUserGroup "Water"
    // static metadata: MNetworkIncludeByUserGroup "LocalPlayerExclusive"
    // static metadata: MNetworkIncludeByName "m_iMaxHealth"
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
    // static metadata: MNetworkUserGroupProxy "CBasePlayerPawn"
    // static metadata: MNetworkVarNames "uint32 m_iHideHUD"
    // static metadata: MNetworkVarNames "sky3dparams_t m_skybox3d"
    // static metadata: MNetworkVarNames "GameTime_t m_flDeathTime"
    // static metadata: MNetworkVarNames "CHandle< CBasePlayerController> m_hController"
    // static metadata: MNetworkVarNames "CHandle< CBasePlayerController> m_hDefaultController"
    #pragma pack(push, 1)
    class CBasePlayerPawn : public server::CBaseCombatCharacter
    {
    public:
        // metadata: MNetworkEnable
        server::CPlayer_WeaponServices* m_pWeaponServices; // 0x8d8        
        // metadata: MNetworkEnable
        server::CPlayer_ItemServices* m_pItemServices; // 0x8e0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        server::CPlayer_AutoaimServices* m_pAutoaimServices; // 0x8e8        
        // metadata: MNetworkEnable
        server::CPlayer_ObserverServices* m_pObserverServices; // 0x8f0        
        // metadata: MNetworkEnable
        server::CPlayer_WaterServices* m_pWaterServices; // 0x8f8        
        // metadata: MNetworkEnable
        server::CPlayer_UseServices* m_pUseServices; // 0x900        
        // metadata: MNetworkEnable
        server::CPlayer_FlashlightServices* m_pFlashlightServices; // 0x908        
        // metadata: MNetworkEnable
        server::CPlayer_CameraServices* m_pCameraServices; // 0x910        
        // metadata: MNetworkEnable
        server::CPlayer_MovementServices* m_pMovementServices; // 0x918        
        [[maybe_unused]] std::uint8_t pad_0x920[0x8]; // 0x920
        QAngle v_angle; // 0x928        
        QAngle v_anglePrevious; // 0x934        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        uint32_t m_iHideHUD; // 0x940        
        [[maybe_unused]] std::uint8_t pad_0x944[0x4]; // 0x944
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        server::sky3dparams_t m_skybox3d; // 0x948        
        entity2::GameTime_t m_fTimeLastHurt; // 0x9d8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flDeathTime; // 0x9dc        
        entity2::GameTime_t m_fNextSuicideTime; // 0x9e0        
        bool m_fInitHUD; // 0x9e4        
        [[maybe_unused]] std::uint8_t pad_0x9e5[0x3]; // 0x9e5
        server::CAI_Expresser* m_pExpresser; // 0x9e8        
        // metadata: MNetworkEnable
        // m_hController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBasePlayerController> m_hController;
        char m_hController[0x4]; // 0x9f0        
        // metadata: MNetworkEnable
        // m_hDefaultController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBasePlayerController> m_hDefaultController;
        char m_hDefaultController[0x4]; // 0x9f4        
        [[maybe_unused]] std::uint8_t pad_0x9f8[0x4]; // 0x9f8
        float m_fHltvReplayDelay; // 0x9fc        
        float m_fHltvReplayEnd; // 0xa00        
        CEntityIndex m_iHltvReplayEntity; // 0xa04        
        // m_sndOpvarLatchData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::sndopvarlatchdata_t> m_sndOpvarLatchData;
        char m_sndOpvarLatchData[0x18]; // 0xa08        
        
        // Datamap fields:
        // void m_hPawnListEntry; // 0x9f8
        // void m_hLastValidNavArea; // 0x888
        // void m_hCurrentNavArea; // 0x878
        // void m_hCurrentNavAreaBlocked; // 0x898
        // CHandle< CBaseEntity > controller; // 0x7fffffff
        // int32_t InputSetHealth; // 0x0
        // bool InputSetHUDVisibility; // 0x0
        // CUtlSymbolLarge InputSetFogController; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBasePlayerPawn because it is not a standard-layout class
    static_assert(sizeof(CBasePlayerPawn) == 0xa20);
};
