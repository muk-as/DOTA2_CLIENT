#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/C_CommandContext.hpp"
#include "source2sdk/client/PlayerConnectedState.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BasePlayerPawn;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x6d8
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
    // static metadata: MNetworkReplayCompatField "m_skeletonInstance\.m_vecOrigin\..*|"
    #pragma pack(push, 1)
    class CBasePlayerController : public client::C_BaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x538[0x8]; // 0x538
        int32_t m_nFinalPredictedTick; // 0x540        
        [[maybe_unused]] std::uint8_t pad_0x544[0x4]; // 0x544
        client::C_CommandContext m_CommandContext; // 0x548        
        uint64_t m_nInButtonsWhichAreToggles; // 0x5e8        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "1"
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        uint32_t m_nTickBase; // 0x5f0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnPawnChanged"
        // m_hPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BasePlayerPawn> m_hPawn;
        char m_hPawn[0x4]; // 0x5f4        
        // metadata: MNetworkEnable
        bool m_bKnownTeamMismatch; // 0x5f8        
        [[maybe_unused]] std::uint8_t pad_0x5f9[0x3]; // 0x5f9
        // m_hPredictedPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BasePlayerPawn> m_hPredictedPawn;
        char m_hPredictedPawn[0x4]; // 0x5fc        
        CSplitScreenSlot m_nSplitScreenSlot; // 0x600        
        // m_hSplitOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::CBasePlayerController> m_hSplitOwner;
        char m_hSplitOwner[0x4]; // 0x604        
        // m_hSplitScreenPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::CBasePlayerController>> m_hSplitScreenPlayers;
        char m_hSplitScreenPlayers[0x18]; // 0x608        
        bool m_bIsHLTV; // 0x620        
        [[maybe_unused]] std::uint8_t pad_0x621[0x3]; // 0x621
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnConnectionStateChanged"
        client::PlayerConnectedState m_iConnected; // 0x624        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnPlayerControllerNameChanged"
        char m_iszPlayerName[128]; // 0x628        
        [[maybe_unused]] std::uint8_t pad_0x6a8[0x8]; // 0x6a8
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "fixed64"
        // metadata: MNetworkChangeCallback "OnSteamIDChanged"
        uint64_t m_steamID; // 0x6b0        
        bool m_bIsLocalPlayerController; // 0x6b8        
        [[maybe_unused]] std::uint8_t pad_0x6b9[0x3]; // 0x6b9
        // metadata: MNetworkEnable
        uint32_t m_iDesiredFOV; // 0x6bc        
        [[maybe_unused]] std::uint8_t pad_0x6c0[0x18];
        
        // Static fields:
        static bool &Get_sm_bRunningPredictedClientStringCommands() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBasePlayerController")->GetStaticFields()[0]->m_pInstance);};
        
        // Datamap fields:
        // bool fakeclient; // 0x7fffffff
        // bool is_hltv; // 0x7fffffff
        // const char * playername; // 0x7fffffff
        // bool reserving; // 0x7fffffff
        // void m_pCurrentCommand; // 0x6a8
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBasePlayerController because it is not a standard-layout class
    static_assert(sizeof(CBasePlayerController) == 0x6d8);
};
