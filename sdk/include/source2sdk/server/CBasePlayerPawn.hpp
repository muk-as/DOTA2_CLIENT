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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
            source2sdk::server::CPlayer_WeaponServices* m_pWeaponServices; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::server::CPlayer_ItemServices* m_pItemServices; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::server::CPlayer_AutoaimServices* m_pAutoaimServices; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::server::CPlayer_ObserverServices* m_pObserverServices; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::server::CPlayer_WaterServices* m_pWaterServices; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::server::CPlayer_UseServices* m_pUseServices; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::server::CPlayer_FlashlightServices* m_pFlashlightServices; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::server::CPlayer_CameraServices* m_pCameraServices; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::server::CPlayer_MovementServices* m_pMovementServices; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            QAngle v_angle; // 0x_            
            QAngle v_anglePrevious; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            std::uint32_t m_iHideHUD; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::server::sky3dparams_t m_skybox3d; // 0x_            
            source2sdk::entity2::GameTime_t m_fTimeLastHurt; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::entity2::GameTime_t m_flDeathTime; // 0x_            
            source2sdk::entity2::GameTime_t m_fNextSuicideTime; // 0x_            
            bool m_fInitHUD; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CAI_Expresser* m_pExpresser; // 0x_            
            // metadata: MNetworkEnable
            // m_hController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerController> m_hController;
            char m_hController[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_hDefaultController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerController> m_hDefaultController;
            char m_hDefaultController[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_fHltvReplayDelay; // 0x_            
            float m_fHltvReplayEnd; // 0x_            
            CEntityIndex m_iHltvReplayEntity; // 0x_            
            // m_sndOpvarLatchData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::sndopvarlatchdata_t> m_sndOpvarLatchData;
            char m_sndOpvarLatchData[0x_]; // 0x_            
            
            // Datamap fields:
            // void m_hPawnListEntry; // 0x_
            // void m_hLastValidNavArea; // 0x_
            // void m_hCurrentNavArea; // 0x_
            // void m_hCurrentNavAreaBlocked; // 0x_
            // CHandle< CBaseEntity > controller; // 0x_
            // int32_t InputSetHealth; // 0x_
            // bool InputSetHUDVisibility; // 0x_
            // CUtlSymbolLarge InputSetFogController; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBasePlayerPawn because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBasePlayerPawn) == 0x_);
    };
};
