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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x7c8
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
            uint8_t _pad04e0[0x8]; // 0x4e0
            std::uint64_t m_nInButtonsWhichAreToggles; // 0x4e8            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "1"
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            std::uint32_t m_nTickBase; // 0x4f0            
            uint8_t _pad04f4[0x2c]; // 0x4f4
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPawnChanged"
            // m_hPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerPawn> m_hPawn;
            char m_hPawn[0x4]; // 0x520            
            // metadata: MNetworkEnable
            bool m_bKnownTeamMismatch; // 0x524            
            uint8_t _pad0525[0x3]; // 0x525
            CSplitScreenSlot m_nSplitScreenSlot; // 0x528            
            // m_hSplitOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerController> m_hSplitOwner;
            char m_hSplitOwner[0x4]; // 0x52c            
            // m_hSplitScreenPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBasePlayerController>> m_hSplitScreenPlayers;
            char m_hSplitScreenPlayers[0x18]; // 0x530            
            bool m_bIsHLTV; // 0x548            
            uint8_t _pad0549[0x3]; // 0x549
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnConnectionStateChanged"
            source2sdk::client::PlayerConnectedState m_iConnected; // 0x54c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPlayerControllerNameChanged"
            char m_iszPlayerName[128]; // 0x550            
            CUtlString m_szNetworkIDString; // 0x5d0            
            float m_fLerpTime; // 0x5d8            
            bool m_bLagCompensation; // 0x5dc            
            bool m_bPredict; // 0x5dd            
            uint8_t _pad05de[0x6]; // 0x5de
            bool m_bIsLowViolence; // 0x5e4            
            bool m_bGamePaused; // 0x5e5            
            uint8_t _pad05e6[0x132]; // 0x5e6
            source2sdk::client::ChatIgnoreType_t m_iIgnoreGlobalChat; // 0x718            
            float m_flLastPlayerTalkTime; // 0x71c            
            float m_flLastEntitySteadyState; // 0x720            
            std::int32_t m_nAvailableEntitySteadyState; // 0x724            
            bool m_bHasAnySteadyStateEnts; // 0x728            
            uint8_t _pad0729[0xf]; // 0x729
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "fixed64"
            // metadata: MNetworkChangeCallback "OnSteamIDChanged"
            std::uint64_t m_steamID; // 0x738            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnNoClipEnableChanged"
            bool m_bNoClipEnabled; // 0x740            
            uint8_t _pad0741[0x3]; // 0x741
            // metadata: MNetworkEnable
            std::uint32_t m_iDesiredFOV; // 0x744            
            uint8_t _pad0748[0x80];
            
            // Datamap fields:
            // bool fakeclient; // 0x7fffffff
            // bool is_hltv; // 0x7fffffff
            // const char * playername; // 0x7fffffff
            // bool reserving; // 0x7fffffff
            // void m_pCurrentCommand; // 0x730
            // int32_t m_ePlayerControllerKickPolicyMask; // 0x5e0
            // void m_LastCmd; // 0x5e8
            // void m_nLastRealCommandNumberExecuted; // 0x6fc
            // void m_nLastLateCommandExecuted; // 0x700
            // void m_hConVarUserInfoSet; // 0x7c0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBasePlayerController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBasePlayerController) == 0x7c8);
    };
};
