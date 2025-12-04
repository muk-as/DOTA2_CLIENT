#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/DOTATeam_t.hpp"
#include "source2sdk/client/DOTA_LANE.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_TeamCommander
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::GameTick_t m_nLastUnitsCollectTick; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CountdownTimer m_LaneFrontUpdate; // 0x_            
            std::uint64_t m_ulBotScriptUGC; // 0x_            
            std::uint32_t m_rtBotScriptUpdated; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CountdownTimer m_AvoidanceGridTimer; // 0x_            
            source2sdk::server::CountdownTimer m_EnemyVisibilityGridTimer; // 0x_            
            source2sdk::server::CountdownTimer m_LaneStatusTimer; // 0x_            
            source2sdk::server::CountdownTimer m_ChatThrottleTimer; // 0x_            
            source2sdk::client::DOTATeam_t m_eTeam; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bLateGame; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_LaneLengths[4]; // 0x_            
            float m_LaneFrontCreepsAmounts[2][4]; // 0x_            
            float m_LaneFrontTowersAmounts[2][4]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CountdownTimer m_LaneReassignTimer; // 0x_            
            // m_AvoidanceGrid has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_AvoidanceGrid;
            char m_AvoidanceGrid[0x_]; // 0x_            
            source2sdk::entity2::GameTime_t m_fNextPotentialLocationTick[24]; // 0x_            
            std::int32_t m_iPotentialLocationBuffer[24]; // 0x_            
            // m_PotentialLocationGrid has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint8_t> m_PotentialLocationGrid[2][24];
            char m_PotentialLocationGrid[0x_]; // 0x_            
            // m_hRoamingUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hRoamingUnit;
            char m_hRoamingUnit[0x_]; // 0x_            
            source2sdk::client::DOTA_LANE m_RoamTargetLane; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_Buildings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_Buildings[4][8];
            char m_Buildings[0x_]; // 0x_            
            float m_fBuildingFortTimings[4][8]; // 0x_            
            // m_LaneNodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_LaneNodes[4][9];
            char m_LaneNodes[0x_]; // 0x_            
            float m_fPushLaneDesire[4]; // 0x_            
            float m_fPushLaneRawDesire[4]; // 0x_            
            float m_fPushLaneConvenienceDesire[4]; // 0x_            
            float m_fDefendLaneDesire[4]; // 0x_            
            float m_fDefendLaneUrgencyDesire[4]; // 0x_            
            float m_fDefendLanePowerDesire[4]; // 0x_            
            float m_fFarmLaneDesire[4]; // 0x_            
            std::int32_t m_iLastSeenRoshanHealth; // 0x_            
            float m_fRoshanDesire; // 0x_            
            // m_hProposedPushUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hProposedPushUnits[4];
            char m_hProposedPushUnits[0x_]; // 0x_            
            // m_hProposedDefendUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hProposedDefendUnits[4];
            char m_hProposedDefendUnits[0x_]; // 0x_            
            // m_hProposedRoamUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hProposedRoamUnits;
            char m_hProposedRoamUnits[0x_]; // 0x_            
            // m_hProposedRoshanUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hProposedRoshanUnits;
            char m_hProposedRoshanUnits[0x_]; // 0x_            
            float m_fRoamDesire; // 0x_            
            float m_fRoamOffensivePowerFactor; // 0x_            
            float m_fRoamDistanceFactor; // 0x_            
            float m_fRoamPositionFactor; // 0x_            
            // m_hRoamTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hRoamTarget;
            char m_hRoamTarget[0x_]; // 0x_            
            Vector m_vRoamTargetLoc; // 0x_            
            float m_fHeroSelectionTimes[24]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector m_vBaseLocation; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_AllUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_AllUnits;
            char m_AllUnits[0x_]; // 0x_            
            // m_AllAlliedUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_AllAlliedUnits;
            char m_AllAlliedUnits[0x_]; // 0x_            
            // m_AllAlliedHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_AllAlliedHeroes;
            char m_AllAlliedHeroes[0x_]; // 0x_            
            // m_AllAlliedCreeps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_AllAlliedCreeps;
            char m_AllAlliedCreeps[0x_]; // 0x_            
            // m_AllAlliedWards has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_AllAlliedWards;
            char m_AllAlliedWards[0x_]; // 0x_            
            // m_AllAlliedBuildings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_AllAlliedBuildings;
            char m_AllAlliedBuildings[0x_]; // 0x_            
            // m_AllAlliedOther has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_AllAlliedOther;
            char m_AllAlliedOther[0x_]; // 0x_            
            // m_AllEnemyUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_AllEnemyUnits;
            char m_AllEnemyUnits[0x_]; // 0x_            
            // m_AllEnemyHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_AllEnemyHeroes;
            char m_AllEnemyHeroes[0x_]; // 0x_            
            // m_AllEnemyCreeps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_AllEnemyCreeps;
            char m_AllEnemyCreeps[0x_]; // 0x_            
            // m_AllEnemyWards has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_AllEnemyWards;
            char m_AllEnemyWards[0x_]; // 0x_            
            // m_AllEnemyBuildings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_AllEnemyBuildings;
            char m_AllEnemyBuildings[0x_]; // 0x_            
            // m_AllEnemyOther has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_AllEnemyOther;
            char m_AllEnemyOther[0x_]; // 0x_            
            // m_AllNeutralCreeps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_AllNeutralCreeps;
            char m_AllNeutralCreeps[0x_]; // 0x_            
            // m_ThinkerUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_ThinkerUnits;
            char m_ThinkerUnits[0x_]; // 0x_            
            // m_AllUnitsIncludingDead has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_AllUnitsIncludingDead;
            char m_AllUnitsIncludingDead[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hCouriers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hCouriers;
            char m_hCouriers[0x_]; // 0x_            
            // m_hDisabledBots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hDisabledBots;
            char m_hDisabledBots[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::GameTime_t m_fGoodLuckFlavorTextTime; // 0x_            
            source2sdk::entity2::GameTime_t m_fTeamfightFlavorTextTime; // 0x_            
            source2sdk::entity2::GameTime_t m_fCongratulateHeroFlavorTextTime; // 0x_            
            source2sdk::entity2::GameTime_t m_fLastAliveHeroHistorySnapshotTime; // 0x_            
            std::int32_t m_iAliveHeroHistoryIndex; // 0x_            
            std::int32_t m_iAliveHeroHistory[5]; // 0x_            
            source2sdk::entity2::GameTime_t m_fPlayerDraftChooseTime; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_sScriptDirectory; // 0x_            
            HSCRIPT m_hHeroSelectionScriptScope; // 0x_            
            HSCRIPT m_hTeamLevelDesiresScriptScope; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::GameTick_t m_nScriptPathAvoidanceUpdateTick; // 0x_            
            float m_fExecutionTime[30]; // 0x_            
            std::int32_t m_iCurExecutionTime; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_nLastUnitsCollectTick) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_LaneFrontUpdate) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_ulBotScriptUGC) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_rtBotScriptUpdated) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_AvoidanceGridTimer) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_EnemyVisibilityGridTimer) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_LaneStatusTimer) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_ChatThrottleTimer) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_eTeam) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_bLateGame) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_LaneLengths) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_LaneFrontCreepsAmounts) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_LaneFrontTowersAmounts) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_LaneReassignTimer) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_AvoidanceGrid) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_fNextPotentialLocationTick) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_iPotentialLocationBuffer) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_PotentialLocationGrid) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_hRoamingUnit) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_RoamTargetLane) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_Buildings) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_fBuildingFortTimings) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_LaneNodes) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_fPushLaneDesire) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_fPushLaneRawDesire) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_fPushLaneConvenienceDesire) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_fDefendLaneDesire) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_fDefendLaneUrgencyDesire) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_fDefendLanePowerDesire) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_fFarmLaneDesire) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_iLastSeenRoshanHealth) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_fRoshanDesire) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_hProposedPushUnits) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_hProposedDefendUnits) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_hProposedRoamUnits) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_hProposedRoshanUnits) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_fRoamDesire) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_fRoamOffensivePowerFactor) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_fRoamDistanceFactor) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_fRoamPositionFactor) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_hRoamTarget) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_vRoamTargetLoc) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_fHeroSelectionTimes) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_vBaseLocation) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_AllUnits) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_AllAlliedUnits) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_AllAlliedHeroes) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_AllAlliedCreeps) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_AllAlliedWards) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_AllAlliedBuildings) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_AllAlliedOther) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_AllEnemyUnits) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_AllEnemyHeroes) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_AllEnemyCreeps) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_AllEnemyWards) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_AllEnemyBuildings) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_AllEnemyOther) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_AllNeutralCreeps) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_ThinkerUnits) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_AllUnitsIncludingDead) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_hCouriers) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_hDisabledBots) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_fGoodLuckFlavorTextTime) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_fTeamfightFlavorTextTime) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_fCongratulateHeroFlavorTextTime) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_fLastAliveHeroHistorySnapshotTime) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_iAliveHeroHistoryIndex) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_iAliveHeroHistory) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_fPlayerDraftChooseTime) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_sScriptDirectory) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_hHeroSelectionScriptScope) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_hTeamLevelDesiresScriptScope) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_nScriptPathAvoidanceUpdateTick) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_fExecutionTime) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_iCurExecutionTime) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CDOTA_TeamCommander) == 0x_);
    };
};
