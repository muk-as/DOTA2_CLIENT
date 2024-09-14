#pragma once
#include "source2sdk/client/ChatIgnoreType_t.hpp"
#include "source2sdk/client/PlayerConnectedState.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBasePlayerPawn;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x748
    // Has VTable
    // Construct allowed
    // MNetworkNoBase
    // MNetworkAssumeNotNetworkable
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
    class CBasePlayerController : public server::CBaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4b8[0x8]; // 0x4b8
        uint64_t m_nInButtonsWhichAreToggles; // 0x4c0        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "1"
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        uint32_t m_nTickBase; // 0x4c8        
        [[maybe_unused]] std::uint8_t pad_0x4cc[0x2c]; // 0x4cc
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnPawnChanged"
        // m_hPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBasePlayerPawn> m_hPawn;
        char m_hPawn[0x4]; // 0x4f8        
        // metadata: MNetworkEnable
        bool m_bKnownTeamMismatch; // 0x4fc        
        [[maybe_unused]] std::uint8_t pad_0x4fd[0x3]; // 0x4fd
        CSplitScreenSlot m_nSplitScreenSlot; // 0x500        
        // m_hSplitOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBasePlayerController> m_hSplitOwner;
        char m_hSplitOwner[0x4]; // 0x504        
        // m_hSplitScreenPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBasePlayerController>> m_hSplitScreenPlayers;
        char m_hSplitScreenPlayers[0x18]; // 0x508        
        bool m_bIsHLTV; // 0x520        
        [[maybe_unused]] std::uint8_t pad_0x521[0x3]; // 0x521
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnConnectionStateChanged"
        client::PlayerConnectedState m_iConnected; // 0x524        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnPlayerControllerNameChanged"
        char m_iszPlayerName[128]; // 0x528        
        CUtlString m_szNetworkIDString; // 0x5a8        
        float m_fLerpTime; // 0x5b0        
        bool m_bLagCompensation; // 0x5b4        
        bool m_bPredict; // 0x5b5        
        bool m_bAutoKickDisabled; // 0x5b6        
        bool m_bIsLowViolence; // 0x5b7        
        bool m_bGamePaused; // 0x5b8        
        [[maybe_unused]] std::uint8_t pad_0x5b9[0x137]; // 0x5b9
        client::ChatIgnoreType_t m_iIgnoreGlobalChat; // 0x6f0        
        float m_flLastPlayerTalkTime; // 0x6f4        
        float m_flLastEntitySteadyState; // 0x6f8        
        int32_t m_nAvailableEntitySteadyState; // 0x6fc        
        bool m_bHasAnySteadyStateEnts; // 0x700        
        [[maybe_unused]] std::uint8_t pad_0x701[0xf]; // 0x701
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "fixed64"
        // metadata: MNetworkChangeCallback "OnSteamIDChanged"
        uint64_t m_steamID; // 0x710        
        // metadata: MNetworkEnable
        uint32_t m_iDesiredFOV; // 0x718        
        [[maybe_unused]] std::uint8_t pad_0x71c[0x2c];
        
        // Static fields:
        static bool &Get_sm_bRunningPredictedClientStringCommands() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBasePlayerController")->GetStaticFields()[0]->m_pInstance);};
        
        // Datamap fields:
        // bool fakeclient; // 0x7fffffff
        // bool is_hltv; // 0x7fffffff
        // const char * playername; // 0x7fffffff
        // bool reserving; // 0x7fffffff
        // void m_pCurrentCommand; // 0x708
        // void m_LastCmd; // 0x5c0
        // void m_nLastRealCommandNumberExecuted; // 0x6d4
        // void m_nLastLateCommandExecuted; // 0x6d8
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBasePlayerController because it is not a standard-layout class
    static_assert(sizeof(CBasePlayerController) == 0x748);
};
