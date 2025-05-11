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
        // Size: 0x7b8
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
        // static metadata: MNetworkVarNames "uint32 m_iDesiredFOV"
        #pragma pack(push, 1)
        class CBasePlayerController : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad04d8[0x8]; // 0x4d8
            std::uint64_t m_nInButtonsWhichAreToggles; // 0x4e0            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "1"
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            std::uint32_t m_nTickBase; // 0x4e8            
            uint8_t _pad04ec[0x2c]; // 0x4ec
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPawnChanged"
            // m_hPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerPawn> m_hPawn;
            char m_hPawn[0x4]; // 0x518            
            // metadata: MNetworkEnable
            bool m_bKnownTeamMismatch; // 0x51c            
            uint8_t _pad051d[0x3]; // 0x51d
            CSplitScreenSlot m_nSplitScreenSlot; // 0x520            
            // m_hSplitOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerController> m_hSplitOwner;
            char m_hSplitOwner[0x4]; // 0x524            
            // m_hSplitScreenPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBasePlayerController>> m_hSplitScreenPlayers;
            char m_hSplitScreenPlayers[0x18]; // 0x528            
            bool m_bIsHLTV; // 0x540            
            uint8_t _pad0541[0x3]; // 0x541
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnConnectionStateChanged"
            source2sdk::client::PlayerConnectedState m_iConnected; // 0x544            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPlayerControllerNameChanged"
            char m_iszPlayerName[128]; // 0x548            
            CUtlString m_szNetworkIDString; // 0x5c8            
            float m_fLerpTime; // 0x5d0            
            bool m_bLagCompensation; // 0x5d4            
            bool m_bPredict; // 0x5d5            
            uint8_t _pad05d6[0x6]; // 0x5d6
            bool m_bIsLowViolence; // 0x5dc            
            bool m_bGamePaused; // 0x5dd            
            uint8_t _pad05de[0x132]; // 0x5de
            source2sdk::client::ChatIgnoreType_t m_iIgnoreGlobalChat; // 0x710            
            float m_flLastPlayerTalkTime; // 0x714            
            float m_flLastEntitySteadyState; // 0x718            
            std::int32_t m_nAvailableEntitySteadyState; // 0x71c            
            bool m_bHasAnySteadyStateEnts; // 0x720            
            uint8_t _pad0721[0xf]; // 0x721
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "fixed64"
            // metadata: MNetworkChangeCallback "OnSteamIDChanged"
            std::uint64_t m_steamID; // 0x730            
            // metadata: MNetworkEnable
            std::uint32_t m_iDesiredFOV; // 0x738            
            uint8_t _pad073c[0x7c];
            
            // Datamap fields:
            // bool fakeclient; // 0x7fffffff
            // bool is_hltv; // 0x7fffffff
            // const char * playername; // 0x7fffffff
            // bool reserving; // 0x7fffffff
            // void m_pCurrentCommand; // 0x728
            // int32_t m_ePlayerControllerKickPolicyMask; // 0x5d8
            // void m_LastCmd; // 0x5e0
            // void m_nLastRealCommandNumberExecuted; // 0x6f4
            // void m_nLastLateCommandExecuted; // 0x6f8
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBasePlayerController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBasePlayerController) == 0x7b8);
    };
};
