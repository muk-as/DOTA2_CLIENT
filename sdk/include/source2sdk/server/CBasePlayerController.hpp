#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ChatIgnoreType_t.hpp"
#include "source2sdk/client/PlayerConnectedState.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBasePlayerPawn;
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
        // MNetworkNoBase
        // 
        // static metadata: MNetworkIncludeByName "m_pEntity"
        // static metadata: MNetworkIncludeByName "m_flSimulationTime"
        // static metadata: MNetworkIncludeByName "m_flCreateTime"
        // static metadata: MNetworkIncludeByName "m_iTeamNum"
        // static metadata: MNetworkIncludeByName "m_nNextThinkTick"
        // static metadata: MNetworkIncludeByName "m_fFlags"
        // static metadata: MNetworkUserGroupProxy "CBasePlayerController"
        // static metadata: MNetworkUserGroupProxy "CBasePlayerController"
        // static metadata: MNetworkIncludeByUserGroup "LocalPlayerExclusive"
        // static metadata: MNetworkVarNames "uint32 m_nTickBase"
        // static metadata: MNetworkVarNames "CHandle< CBasePlayerPawn> m_hPawn"
        // static metadata: MNetworkVarNames "bool m_bKnownTeamMismatch"
        // static metadata: MNetworkVarNames "PlayerConnectedState m_iConnected"
        // static metadata: MNetworkVarNames "char m_iszPlayerName"
        // static metadata: MNetworkVarNames "uint64 m_steamID"
        // static metadata: MNetworkVarNames "bool m_bNoClipEnabled"
        // static metadata: MNetworkVarNames "uint32 m_iDesiredFOV"
        #pragma pack(push, 1)
        class CBasePlayerController : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNotSaved
            std::uint64_t m_nInButtonsWhichAreToggles; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "1"
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            // metadata: MNotSaved
            std::uint32_t m_nTickBase; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPawnChanged"
            // m_hPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerPawn> m_hPawn;
            char m_hPawn[0x_]; // 0x_            
            // metadata: MNetworkEnable
            bool m_bKnownTeamMismatch; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNotSaved
            CSplitScreenSlot m_nSplitScreenSlot; // 0x_            
            // metadata: MNotSaved
            // m_hSplitOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerController> m_hSplitOwner;
            char m_hSplitOwner[0x_]; // 0x_            
            // metadata: MNotSaved
            // m_hSplitScreenPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBasePlayerController>> m_hSplitScreenPlayers;
            char m_hSplitScreenPlayers[0x_]; // 0x_            
            bool m_bIsHLTV; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnConnectionStateChanged"
            // metadata: MNotSaved
            source2sdk::client::PlayerConnectedState m_iConnected; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPlayerControllerNameChanged"
            // metadata: MNotSaved
            char m_iszPlayerName[128]; // 0x_            
            // metadata: MNotSaved
            CUtlString m_szNetworkIDString; // 0x_            
            // metadata: MNotSaved
            float m_fLerpTime; // 0x_            
            // metadata: MNotSaved
            bool m_bLagCompensation; // 0x_            
            // metadata: MNotSaved
            bool m_bPredict; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNotSaved
            bool m_bIsLowViolence; // 0x_            
            // metadata: MNotSaved
            bool m_bGamePaused; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNotSaved
            source2sdk::client::ChatIgnoreType_t m_iIgnoreGlobalChat; // 0x_            
            float m_flLastPlayerTalkTime; // 0x_            
            // metadata: MNotSaved
            float m_flLastEntitySteadyState; // 0x_            
            // metadata: MNotSaved
            std::int32_t m_nAvailableEntitySteadyState; // 0x_            
            // metadata: MNotSaved
            bool m_bHasAnySteadyStateEnts; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "fixed64"
            // metadata: MNetworkChangeCallback "OnSteamIDChanged"
            // metadata: MNotSaved
            std::uint64_t m_steamID; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnNoClipEnableChanged"
            bool m_bNoClipEnabled; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::uint32_t m_iDesiredFOV; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // bool fakeclient; // 0x_
            // bool is_hltv; // 0x_
            // const char * playername; // 0x_
            // bool reserving; // 0x_
            // void m_pCurrentCommand; // 0x_
            // int32_t m_nFramePerfSamplesTotalReceived; // 0x_
            // int32_t m_ePlayerControllerKickPolicyMask; // 0x_
            // void m_LastCmd; // 0x_
            // void m_nLastRealCommandNumberExecuted; // 0x_
            // void m_nLastLateCommandExecuted; // 0x_
            // void m_hConVarUserInfoSet; // 0x_
            // void m_AlwaysInPVSEntities; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBasePlayerController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBasePlayerController) == 0x_);
    };
};
