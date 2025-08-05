#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/sndopvarlatchdata_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseCombatCharacter.hpp"
#include "source2sdk/server/sky3dparams_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CAI_Expresser;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CBasePlayerController;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPlayer_AutoaimServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPlayer_CameraServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPlayer_FlashlightServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPlayer_ItemServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPlayer_MovementServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPlayer_ObserverServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPlayer_UseServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPlayer_WaterServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPlayer_WeaponServices;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xaa0
        // Has VTable
        // Construct allowed
        // 
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
        class CBasePlayerPawn : public source2sdk::server::CBaseCombatCharacter
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::server::CPlayer_WeaponServices* m_pWeaponServices; // 0x958            
            // metadata: MNetworkEnable
            source2sdk::server::CPlayer_ItemServices* m_pItemServices; // 0x960            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::server::CPlayer_AutoaimServices* m_pAutoaimServices; // 0x968            
            // metadata: MNetworkEnable
            source2sdk::server::CPlayer_ObserverServices* m_pObserverServices; // 0x970            
            // metadata: MNetworkEnable
            source2sdk::server::CPlayer_WaterServices* m_pWaterServices; // 0x978            
            // metadata: MNetworkEnable
            source2sdk::server::CPlayer_UseServices* m_pUseServices; // 0x980            
            // metadata: MNetworkEnable
            source2sdk::server::CPlayer_FlashlightServices* m_pFlashlightServices; // 0x988            
            // metadata: MNetworkEnable
            source2sdk::server::CPlayer_CameraServices* m_pCameraServices; // 0x990            
            // metadata: MNetworkEnable
            source2sdk::server::CPlayer_MovementServices* m_pMovementServices; // 0x998            
            uint8_t _pad09a0[0x8]; // 0x9a0
            QAngle v_angle; // 0x9a8            
            QAngle v_anglePrevious; // 0x9b4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            std::uint32_t m_iHideHUD; // 0x9c0            
            uint8_t _pad09c4[0x4]; // 0x9c4
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::server::sky3dparams_t m_skybox3d; // 0x9c8            
            source2sdk::entity2::GameTime_t m_fTimeLastHurt; // 0xa58            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::entity2::GameTime_t m_flDeathTime; // 0xa5c            
            source2sdk::entity2::GameTime_t m_fNextSuicideTime; // 0xa60            
            bool m_fInitHUD; // 0xa64            
            uint8_t _pad0a65[0x3]; // 0xa65
            source2sdk::server::CAI_Expresser* m_pExpresser; // 0xa68            
            // metadata: MNetworkEnable
            // m_hController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerController> m_hController;
            char m_hController[0x4]; // 0xa70            
            // metadata: MNetworkEnable
            // m_hDefaultController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerController> m_hDefaultController;
            char m_hDefaultController[0x4]; // 0xa74            
            uint8_t _pad0a78[0x4]; // 0xa78
            float m_fHltvReplayDelay; // 0xa7c            
            float m_fHltvReplayEnd; // 0xa80            
            CEntityIndex m_iHltvReplayEntity; // 0xa84            
            // m_sndOpvarLatchData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::sndopvarlatchdata_t> m_sndOpvarLatchData;
            char m_sndOpvarLatchData[0x18]; // 0xa88            
            
            // Datamap fields:
            // void m_hPawnListEntry; // 0xa78
            // void m_hLastValidNavArea; // 0x8d0
            // void m_hCurrentNavArea; // 0x8c0
            // void m_hCurrentNavAreaBlocked; // 0x8e0
            // CHandle< CBaseEntity > controller; // 0x7fffffff
            // int32_t InputSetHealth; // 0x0
            // bool InputSetHUDVisibility; // 0x0
            // CUtlSymbolLarge InputSetFogController; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBasePlayerPawn because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBasePlayerPawn) == 0xaa0);
    };
};
