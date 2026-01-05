#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseCombatCharacter.hpp"
#include "source2sdk/client/sky3dparams_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CBasePlayerController;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CPlayer_AutoaimServices;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CPlayer_CameraServices;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CPlayer_FlashlightServices;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CPlayer_ItemServices;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CPlayer_MovementServices;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CPlayer_ObserverServices;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CPlayer_UseServices;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CPlayer_WaterServices;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CPlayer_WeaponServices;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
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
        class C_BasePlayerPawn : public source2sdk::client::C_BaseCombatCharacter
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            source2sdk::client::CPlayer_WeaponServices* m_pWeaponServices; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            source2sdk::client::CPlayer_ItemServices* m_pItemServices; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::client::CPlayer_AutoaimServices* m_pAutoaimServices; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            source2sdk::client::CPlayer_ObserverServices* m_pObserverServices; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            source2sdk::client::CPlayer_WaterServices* m_pWaterServices; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            source2sdk::client::CPlayer_UseServices* m_pUseServices; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            source2sdk::client::CPlayer_FlashlightServices* m_pFlashlightServices; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            source2sdk::client::CPlayer_CameraServices* m_pCameraServices; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            source2sdk::client::CPlayer_MovementServices* m_pMovementServices; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            QAngle v_angle; // 0x_            
            QAngle v_anglePrevious; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            std::uint32_t m_iHideHUD; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::client::sky3dparams_t m_skybox3d; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::entity2::GameTime_t m_flDeathTime; // 0x_            
            // metadata: MNotSaved
            Vector m_vecPredictionError; // 0x_            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flPredictionErrorTime; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNotSaved
            Vector m_vecLastCameraSetupLocalOrigin; // 0x_            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flLastCameraSetupTime; // 0x_            
            // metadata: MNotSaved
            float m_flFOVSensitivityAdjust; // 0x_            
            // metadata: MNotSaved
            float m_flMouseSensitivity; // 0x_            
            // metadata: MNotSaved
            Vector m_vOldOrigin; // 0x_            
            // metadata: MNotSaved
            float m_flOldSimulationTime; // 0x_            
            // metadata: MNotSaved
            std::int32_t m_nLastExecutedCommandNumber; // 0x_            
            // metadata: MNotSaved
            std::int32_t m_nLastExecutedCommandTick; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnControllerChanged"
            // m_hController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CBasePlayerController> m_hController;
            char m_hController[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_hDefaultController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CBasePlayerController> m_hDefaultController;
            char m_hDefaultController[0x_]; // 0x_            
            // metadata: MNotSaved
            bool m_bIsSwappingToPredictableController; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void m_hPawnListEntry; // 0x_
            // void m_predictionVisualState; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BasePlayerPawn because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BasePlayerPawn) == 0x_);
    };
};
