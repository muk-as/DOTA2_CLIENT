#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/client/sPlayerSnapshot.hpp"
#include "source2sdk/entity2/CNetworkVarChainer.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x9f8
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
        class C_DOTASpectatorGraphManager
        {
        public:
            uint8_t _pad0000[0x28]; // 0x0
            source2sdk::entity2::CNetworkVarChainer __m_pChainEntity; // 0x28            
            bool m_bTrackingTeamStats; // 0x50            
            uint8_t _pad0051[0x3]; // 0x51
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x54            
            // metadata: MNetworkEnable
            std::int32_t m_rgRadiantTotalEarnedGold[64]; // 0x58            
            // metadata: MNetworkEnable
            std::int32_t m_rgDireTotalEarnedGold[64]; // 0x158            
            // metadata: MNetworkEnable
            std::int32_t m_rgRadiantTotalEarnedXP[64]; // 0x258            
            // metadata: MNetworkEnable
            std::int32_t m_rgDireTotalEarnedXP[64]; // 0x358            
            // metadata: MNetworkEnable
            std::int32_t m_rgRadiantNetWorth[64]; // 0x458            
            // metadata: MNetworkEnable
            std::int32_t m_rgDireNetWorth[64]; // 0x558            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTotalEarnedGoldStartTime; // 0x658            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTotalEarnedGoldEndTime; // 0x65c            
            // metadata: MNetworkEnable
            std::int32_t m_nGoldGraphVersion; // 0x660            
            // metadata: MNetworkEnable
            std::int32_t m_rgRadiantWinChance[64]; // 0x664            
            uint8_t _pad0764[0x4]; // 0x764
            source2sdk::client::CountdownTimer m_TeamStatsUpdateTimer; // 0x768            
            source2sdk::client::CountdownTimer m_HeroInventorySnapshotTimer; // 0x780            
            // m_vecPlayerSnapshots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::sPlayerSnapshot> m_vecPlayerSnapshots[24];
            char m_vecPlayerSnapshots[0x240]; // 0x798            
            uint8_t _pad09d8[0x18]; // 0x9d8
            std::uint32_t m_unDataChangedCount; // 0x9f0            
            uint8_t _pad09f4[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::C_DOTASpectatorGraphManager, __m_pChainEntity) == 0x28);
        static_assert(offsetof(source2sdk::client::C_DOTASpectatorGraphManager, m_bTrackingTeamStats) == 0x50);
        static_assert(offsetof(source2sdk::client::C_DOTASpectatorGraphManager, m_flStartTime) == 0x54);
        static_assert(offsetof(source2sdk::client::C_DOTASpectatorGraphManager, m_rgRadiantTotalEarnedGold) == 0x58);
        static_assert(offsetof(source2sdk::client::C_DOTASpectatorGraphManager, m_rgDireTotalEarnedGold) == 0x158);
        static_assert(offsetof(source2sdk::client::C_DOTASpectatorGraphManager, m_rgRadiantTotalEarnedXP) == 0x258);
        static_assert(offsetof(source2sdk::client::C_DOTASpectatorGraphManager, m_rgDireTotalEarnedXP) == 0x358);
        static_assert(offsetof(source2sdk::client::C_DOTASpectatorGraphManager, m_rgRadiantNetWorth) == 0x458);
        static_assert(offsetof(source2sdk::client::C_DOTASpectatorGraphManager, m_rgDireNetWorth) == 0x558);
        static_assert(offsetof(source2sdk::client::C_DOTASpectatorGraphManager, m_flTotalEarnedGoldStartTime) == 0x658);
        static_assert(offsetof(source2sdk::client::C_DOTASpectatorGraphManager, m_flTotalEarnedGoldEndTime) == 0x65c);
        static_assert(offsetof(source2sdk::client::C_DOTASpectatorGraphManager, m_nGoldGraphVersion) == 0x660);
        static_assert(offsetof(source2sdk::client::C_DOTASpectatorGraphManager, m_rgRadiantWinChance) == 0x664);
        static_assert(offsetof(source2sdk::client::C_DOTASpectatorGraphManager, m_TeamStatsUpdateTimer) == 0x768);
        static_assert(offsetof(source2sdk::client::C_DOTASpectatorGraphManager, m_HeroInventorySnapshotTimer) == 0x780);
        static_assert(offsetof(source2sdk::client::C_DOTASpectatorGraphManager, m_vecPlayerSnapshots) == 0x798);
        static_assert(offsetof(source2sdk::client::C_DOTASpectatorGraphManager, m_unDataChangedCount) == 0x9f0);
        
        static_assert(sizeof(source2sdk::client::C_DOTASpectatorGraphManager) == 0x9f8);
    };
};
