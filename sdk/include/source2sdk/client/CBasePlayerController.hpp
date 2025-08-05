#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/C_CommandContext.hpp"
#include "source2sdk/client/PlayerConnectedState.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BasePlayerPawn;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x7d0
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
        // static metadata: MNetworkReplayCompatField "m_skeletonInstance\.m_vecOrigin\..*|"
        #pragma pack(push, 1)
        class CBasePlayerController : public source2sdk::client::C_BaseEntity
        {
        public:
            uint8_t _pad05e8[0x8]; // 0x5e8
            source2sdk::client::C_CommandContext m_CommandContext; // 0x5f0            
            std::uint64_t m_nInButtonsWhichAreToggles; // 0x690            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "1"
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            std::uint32_t m_nTickBase; // 0x698            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPawnChanged"
            // m_hPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BasePlayerPawn> m_hPawn;
            char m_hPawn[0x4]; // 0x69c            
            // metadata: MNetworkEnable
            bool m_bKnownTeamMismatch; // 0x6a0            
            uint8_t _pad06a1[0x3]; // 0x6a1
            // m_hPredictedPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BasePlayerPawn> m_hPredictedPawn;
            char m_hPredictedPawn[0x4]; // 0x6a4            
            CSplitScreenSlot m_nSplitScreenSlot; // 0x6a8            
            // m_hSplitOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CBasePlayerController> m_hSplitOwner;
            char m_hSplitOwner[0x4]; // 0x6ac            
            // m_hSplitScreenPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::CBasePlayerController>> m_hSplitScreenPlayers;
            char m_hSplitScreenPlayers[0x18]; // 0x6b0            
            bool m_bIsHLTV; // 0x6c8            
            uint8_t _pad06c9[0x3]; // 0x6c9
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnConnectionStateChanged"
            source2sdk::client::PlayerConnectedState m_iConnected; // 0x6cc            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPlayerControllerNameChanged"
            char m_iszPlayerName[128]; // 0x6d0            
            uint8_t _pad0750[0x8]; // 0x750
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "fixed64"
            // metadata: MNetworkChangeCallback "OnSteamIDChanged"
            std::uint64_t m_steamID; // 0x758            
            bool m_bIsLocalPlayerController; // 0x760            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnNoClipEnableChanged"
            bool m_bNoClipEnabled; // 0x761            
            uint8_t _pad0762[0x2]; // 0x762
            // metadata: MNetworkEnable
            std::uint32_t m_iDesiredFOV; // 0x764            
            uint8_t _pad0768[0x68];
            
            // Datamap fields:
            // bool fakeclient; // 0x7fffffff
            // bool is_hltv; // 0x7fffffff
            // const char * playername; // 0x7fffffff
            // bool reserving; // 0x7fffffff
            // void m_pCurrentCommand; // 0x750
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBasePlayerController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CBasePlayerController) == 0x7d0);
    };
};
