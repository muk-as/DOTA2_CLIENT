#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/sPlayerSnapshot.hpp"
#include "source2sdk/entity2/CNetworkVarChainer.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CountdownTimer.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // MNetworkNoBase
        // 
        // static metadata: MNetworkVarNames "int m_rgRadiantTotalEarnedGold"
        // static metadata: MNetworkVarNames "int m_rgDireTotalEarnedGold"
        // static metadata: MNetworkVarNames "int m_rgRadiantTotalEarnedXP"
        // static metadata: MNetworkVarNames "int m_rgDireTotalEarnedXP"
        // static metadata: MNetworkVarNames "int m_rgRadiantNetWorth"
        // static metadata: MNetworkVarNames "int m_rgDireNetWorth"
        // static metadata: MNetworkVarNames "GameTime_t m_flTotalEarnedGoldStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flTotalEarnedGoldEndTime"
        // static metadata: MNetworkVarNames "int m_nGoldGraphVersion"
        // static metadata: MNetworkVarNames "int m_rgRadiantWinChance"
        #pragma pack(push, 1)
        class CDOTASpectatorGraphManager
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNotSaved
            source2sdk::entity2::CNetworkVarChainer __m_pChainEntity; // 0x_            
            bool m_bTrackingTeamStats; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_rgRadiantTotalEarnedGold[64]; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_rgDireTotalEarnedGold[64]; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_rgRadiantTotalEarnedXP[64]; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_rgDireTotalEarnedXP[64]; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_rgRadiantNetWorth[64]; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_rgDireNetWorth[64]; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTotalEarnedGoldStartTime; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTotalEarnedGoldEndTime; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nGoldGraphVersion; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_rgRadiantWinChance[64]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CountdownTimer m_TeamStatsUpdateTimer; // 0x_            
            source2sdk::server::CountdownTimer m_HeroInventorySnapshotTimer; // 0x_            
            // m_vecPlayerSnapshots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::sPlayerSnapshot> m_vecPlayerSnapshots[24];
            char m_vecPlayerSnapshots[0x_]; // 0x_            
            std::int32_t m_event_dota_player_killed; // 0x_            
            std::int32_t m_event_server_pre_shutdown; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTASpectatorGraphManager, __m_pChainEntity) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTASpectatorGraphManager, m_bTrackingTeamStats) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTASpectatorGraphManager, m_flStartTime) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTASpectatorGraphManager, m_rgRadiantTotalEarnedGold) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTASpectatorGraphManager, m_rgDireTotalEarnedGold) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTASpectatorGraphManager, m_rgRadiantTotalEarnedXP) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTASpectatorGraphManager, m_rgDireTotalEarnedXP) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTASpectatorGraphManager, m_rgRadiantNetWorth) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTASpectatorGraphManager, m_rgDireNetWorth) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTASpectatorGraphManager, m_flTotalEarnedGoldStartTime) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTASpectatorGraphManager, m_flTotalEarnedGoldEndTime) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTASpectatorGraphManager, m_nGoldGraphVersion) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTASpectatorGraphManager, m_rgRadiantWinChance) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTASpectatorGraphManager, m_TeamStatsUpdateTimer) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTASpectatorGraphManager, m_HeroInventorySnapshotTimer) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTASpectatorGraphManager, m_vecPlayerSnapshots) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTASpectatorGraphManager, m_event_dota_player_killed) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTASpectatorGraphManager, m_event_server_pre_shutdown) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CDOTASpectatorGraphManager) == 0x_);
    };
};
