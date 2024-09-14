#pragma once
#include "source2sdk/client/DOTATeam_t.hpp"
#include "source2sdk/client/DOTA_LANE.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x1488
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_TeamCommander
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x10]; // 0x0
        entity2::GameTick_t m_nLastUnitsCollectTick; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x14[0x2b4]; // 0x14
        server::CountdownTimer m_LaneFrontUpdate; // 0x2c8        
        uint64_t m_ulBotScriptUGC; // 0x2e0        
        uint32_t m_rtBotScriptUpdated; // 0x2e8        
        [[maybe_unused]] std::uint8_t pad_0x2ec[0x4]; // 0x2ec
        server::CountdownTimer m_AvoidanceGridTimer; // 0x2f0        
        server::CountdownTimer m_EnemyVisibilityGridTimer; // 0x308        
        server::CountdownTimer m_LaneStatusTimer; // 0x320        
        server::CountdownTimer m_ChatThrottleTimer; // 0x338        
        client::DOTATeam_t m_eTeam; // 0x350        
        [[maybe_unused]] std::uint8_t pad_0x354[0x6c]; // 0x354
        bool m_bLateGame; // 0x3c0        
        [[maybe_unused]] std::uint8_t pad_0x3c1[0x3]; // 0x3c1
        float m_LaneLengths[4]; // 0x3c4        
        float m_LaneFrontCreepsAmounts[2][4]; // 0x3d4        
        float m_LaneFrontTowersAmounts[2][4]; // 0x3f4        
        [[maybe_unused]] std::uint8_t pad_0x414[0x4]; // 0x414
        server::CountdownTimer m_LaneReassignTimer; // 0x418        
        // m_AvoidanceGrid has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int32_t> m_AvoidanceGrid;
        char m_AvoidanceGrid[0x18]; // 0x430        
        entity2::GameTime_t m_fNextPotentialLocationTick[24]; // 0x448        
        int32_t m_iPotentialLocationBuffer[24]; // 0x4a8        
        // m_PotentialLocationGrid has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint8_t> m_PotentialLocationGrid[2][24];
        char m_PotentialLocationGrid[0x480]; // 0x508        
        // m_hRoamingUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hRoamingUnit;
        char m_hRoamingUnit[0x4]; // 0x988        
        client::DOTA_LANE m_RoamTargetLane; // 0x98c        
        [[maybe_unused]] std::uint8_t pad_0x990[0x30]; // 0x990
        // m_Buildings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_Buildings[4][8];
        char m_Buildings[0x80]; // 0x9c0        
        float m_fBuildingFortTimings[4][8]; // 0xa40        
        // m_LaneNodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_LaneNodes[4][9];
        char m_LaneNodes[0x90]; // 0xac0        
        float m_fPushLaneDesire[4]; // 0xb50        
        float m_fPushLaneRawDesire[4]; // 0xb60        
        float m_fPushLaneConvenienceDesire[4]; // 0xb70        
        float m_fDefendLaneDesire[4]; // 0xb80        
        float m_fDefendLaneUrgencyDesire[4]; // 0xb90        
        float m_fDefendLanePowerDesire[4]; // 0xba0        
        float m_fFarmLaneDesire[4]; // 0xbb0        
        int32_t m_iLastSeenRoshanHealth; // 0xbc0        
        float m_fRoshanDesire; // 0xbc4        
        // m_hProposedPushUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hProposedPushUnits[4];
        char m_hProposedPushUnits[0x60]; // 0xbc8        
        // m_hProposedDefendUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hProposedDefendUnits[4];
        char m_hProposedDefendUnits[0x60]; // 0xc28        
        // m_hProposedRoamUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hProposedRoamUnits;
        char m_hProposedRoamUnits[0x18]; // 0xc88        
        // m_hProposedRoshanUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hProposedRoshanUnits;
        char m_hProposedRoshanUnits[0x18]; // 0xca0        
        float m_fRoamDesire; // 0xcb8        
        float m_fRoamOffensivePowerFactor; // 0xcbc        
        float m_fRoamDistanceFactor; // 0xcc0        
        float m_fRoamPositionFactor; // 0xcc4        
        // m_hRoamTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hRoamTarget;
        char m_hRoamTarget[0x4]; // 0xcc8        
        Vector m_vRoamTargetLoc; // 0xccc        
        float m_fHeroSelectionTimes[24]; // 0xcd8        
        [[maybe_unused]] std::uint8_t pad_0xd38[0x18]; // 0xd38
        Vector m_vBaseLocation; // 0xd50        
        [[maybe_unused]] std::uint8_t pad_0xd5c[0x4]; // 0xd5c
        // m_AllUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_AllUnits;
        char m_AllUnits[0x18]; // 0xd60        
        // m_AllAlliedUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_AllAlliedUnits;
        char m_AllAlliedUnits[0x18]; // 0xd78        
        // m_AllAlliedHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_AllAlliedHeroes;
        char m_AllAlliedHeroes[0x18]; // 0xd90        
        // m_AllAlliedCreeps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_AllAlliedCreeps;
        char m_AllAlliedCreeps[0x18]; // 0xda8        
        // m_AllAlliedWards has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_AllAlliedWards;
        char m_AllAlliedWards[0x18]; // 0xdc0        
        // m_AllAlliedBuildings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_AllAlliedBuildings;
        char m_AllAlliedBuildings[0x18]; // 0xdd8        
        // m_AllAlliedOther has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_AllAlliedOther;
        char m_AllAlliedOther[0x18]; // 0xdf0        
        // m_AllEnemyUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_AllEnemyUnits;
        char m_AllEnemyUnits[0x18]; // 0xe08        
        // m_AllEnemyHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_AllEnemyHeroes;
        char m_AllEnemyHeroes[0x18]; // 0xe20        
        // m_AllEnemyCreeps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_AllEnemyCreeps;
        char m_AllEnemyCreeps[0x18]; // 0xe38        
        // m_AllEnemyWards has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_AllEnemyWards;
        char m_AllEnemyWards[0x18]; // 0xe50        
        // m_AllEnemyBuildings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_AllEnemyBuildings;
        char m_AllEnemyBuildings[0x18]; // 0xe68        
        // m_AllEnemyOther has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_AllEnemyOther;
        char m_AllEnemyOther[0x18]; // 0xe80        
        // m_AllNeutralCreeps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_AllNeutralCreeps;
        char m_AllNeutralCreeps[0x18]; // 0xe98        
        // m_ThinkerUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_ThinkerUnits;
        char m_ThinkerUnits[0x18]; // 0xeb0        
        // m_AllUnitsIncludingDead has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_AllUnitsIncludingDead;
        char m_AllUnitsIncludingDead[0x18]; // 0xec8        
        [[maybe_unused]] std::uint8_t pad_0xee0[0x30]; // 0xee0
        // m_hCouriers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hCouriers;
        char m_hCouriers[0x18]; // 0xf10        
        // m_hDisabledBots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hDisabledBots;
        char m_hDisabledBots[0x18]; // 0xf28        
        [[maybe_unused]] std::uint8_t pad_0xf40[0x380]; // 0xf40
        entity2::GameTime_t m_fGoodLuckFlavorTextTime; // 0x12c0        
        entity2::GameTime_t m_fTeamfightFlavorTextTime; // 0x12c4        
        entity2::GameTime_t m_fCongratulateHeroFlavorTextTime; // 0x12c8        
        entity2::GameTime_t m_fLastAliveHeroHistorySnapshotTime; // 0x12cc        
        int32_t m_iAliveHeroHistoryIndex; // 0x12d0        
        int32_t m_iAliveHeroHistory[5]; // 0x12d4        
        entity2::GameTime_t m_fPlayerDraftChooseTime; // 0x12e8        
        [[maybe_unused]] std::uint8_t pad_0x12ec[0xc]; // 0x12ec
        CUtlString m_sScriptDirectory; // 0x12f8        
        HSCRIPT m_hHeroSelectionScriptScope; // 0x1300        
        HSCRIPT m_hTeamLevelDesiresScriptScope; // 0x1308        
        [[maybe_unused]] std::uint8_t pad_0x1310[0x68]; // 0x1310
        entity2::GameTick_t m_nScriptPathAvoidanceUpdateTick; // 0x1378        
        float m_fExecutionTime[30]; // 0x137c        
        int32_t m_iCurExecutionTime; // 0x13f4        
        [[maybe_unused]] std::uint8_t pad_0x13f8[0x90];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTA_TeamCommander, m_nLastUnitsCollectTick) == 0x10);
    static_assert(offsetof(CDOTA_TeamCommander, m_LaneFrontUpdate) == 0x2c8);
    static_assert(offsetof(CDOTA_TeamCommander, m_ulBotScriptUGC) == 0x2e0);
    static_assert(offsetof(CDOTA_TeamCommander, m_rtBotScriptUpdated) == 0x2e8);
    static_assert(offsetof(CDOTA_TeamCommander, m_AvoidanceGridTimer) == 0x2f0);
    static_assert(offsetof(CDOTA_TeamCommander, m_EnemyVisibilityGridTimer) == 0x308);
    static_assert(offsetof(CDOTA_TeamCommander, m_LaneStatusTimer) == 0x320);
    static_assert(offsetof(CDOTA_TeamCommander, m_ChatThrottleTimer) == 0x338);
    static_assert(offsetof(CDOTA_TeamCommander, m_eTeam) == 0x350);
    static_assert(offsetof(CDOTA_TeamCommander, m_bLateGame) == 0x3c0);
    static_assert(offsetof(CDOTA_TeamCommander, m_LaneLengths) == 0x3c4);
    static_assert(offsetof(CDOTA_TeamCommander, m_LaneFrontCreepsAmounts) == 0x3d4);
    static_assert(offsetof(CDOTA_TeamCommander, m_LaneFrontTowersAmounts) == 0x3f4);
    static_assert(offsetof(CDOTA_TeamCommander, m_LaneReassignTimer) == 0x418);
    static_assert(offsetof(CDOTA_TeamCommander, m_AvoidanceGrid) == 0x430);
    static_assert(offsetof(CDOTA_TeamCommander, m_fNextPotentialLocationTick) == 0x448);
    static_assert(offsetof(CDOTA_TeamCommander, m_iPotentialLocationBuffer) == 0x4a8);
    static_assert(offsetof(CDOTA_TeamCommander, m_PotentialLocationGrid) == 0x508);
    static_assert(offsetof(CDOTA_TeamCommander, m_hRoamingUnit) == 0x988);
    static_assert(offsetof(CDOTA_TeamCommander, m_RoamTargetLane) == 0x98c);
    static_assert(offsetof(CDOTA_TeamCommander, m_Buildings) == 0x9c0);
    static_assert(offsetof(CDOTA_TeamCommander, m_fBuildingFortTimings) == 0xa40);
    static_assert(offsetof(CDOTA_TeamCommander, m_LaneNodes) == 0xac0);
    static_assert(offsetof(CDOTA_TeamCommander, m_fPushLaneDesire) == 0xb50);
    static_assert(offsetof(CDOTA_TeamCommander, m_fPushLaneRawDesire) == 0xb60);
    static_assert(offsetof(CDOTA_TeamCommander, m_fPushLaneConvenienceDesire) == 0xb70);
    static_assert(offsetof(CDOTA_TeamCommander, m_fDefendLaneDesire) == 0xb80);
    static_assert(offsetof(CDOTA_TeamCommander, m_fDefendLaneUrgencyDesire) == 0xb90);
    static_assert(offsetof(CDOTA_TeamCommander, m_fDefendLanePowerDesire) == 0xba0);
    static_assert(offsetof(CDOTA_TeamCommander, m_fFarmLaneDesire) == 0xbb0);
    static_assert(offsetof(CDOTA_TeamCommander, m_iLastSeenRoshanHealth) == 0xbc0);
    static_assert(offsetof(CDOTA_TeamCommander, m_fRoshanDesire) == 0xbc4);
    static_assert(offsetof(CDOTA_TeamCommander, m_hProposedPushUnits) == 0xbc8);
    static_assert(offsetof(CDOTA_TeamCommander, m_hProposedDefendUnits) == 0xc28);
    static_assert(offsetof(CDOTA_TeamCommander, m_hProposedRoamUnits) == 0xc88);
    static_assert(offsetof(CDOTA_TeamCommander, m_hProposedRoshanUnits) == 0xca0);
    static_assert(offsetof(CDOTA_TeamCommander, m_fRoamDesire) == 0xcb8);
    static_assert(offsetof(CDOTA_TeamCommander, m_fRoamOffensivePowerFactor) == 0xcbc);
    static_assert(offsetof(CDOTA_TeamCommander, m_fRoamDistanceFactor) == 0xcc0);
    static_assert(offsetof(CDOTA_TeamCommander, m_fRoamPositionFactor) == 0xcc4);
    static_assert(offsetof(CDOTA_TeamCommander, m_hRoamTarget) == 0xcc8);
    static_assert(offsetof(CDOTA_TeamCommander, m_vRoamTargetLoc) == 0xccc);
    static_assert(offsetof(CDOTA_TeamCommander, m_fHeroSelectionTimes) == 0xcd8);
    static_assert(offsetof(CDOTA_TeamCommander, m_vBaseLocation) == 0xd50);
    static_assert(offsetof(CDOTA_TeamCommander, m_AllUnits) == 0xd60);
    static_assert(offsetof(CDOTA_TeamCommander, m_AllAlliedUnits) == 0xd78);
    static_assert(offsetof(CDOTA_TeamCommander, m_AllAlliedHeroes) == 0xd90);
    static_assert(offsetof(CDOTA_TeamCommander, m_AllAlliedCreeps) == 0xda8);
    static_assert(offsetof(CDOTA_TeamCommander, m_AllAlliedWards) == 0xdc0);
    static_assert(offsetof(CDOTA_TeamCommander, m_AllAlliedBuildings) == 0xdd8);
    static_assert(offsetof(CDOTA_TeamCommander, m_AllAlliedOther) == 0xdf0);
    static_assert(offsetof(CDOTA_TeamCommander, m_AllEnemyUnits) == 0xe08);
    static_assert(offsetof(CDOTA_TeamCommander, m_AllEnemyHeroes) == 0xe20);
    static_assert(offsetof(CDOTA_TeamCommander, m_AllEnemyCreeps) == 0xe38);
    static_assert(offsetof(CDOTA_TeamCommander, m_AllEnemyWards) == 0xe50);
    static_assert(offsetof(CDOTA_TeamCommander, m_AllEnemyBuildings) == 0xe68);
    static_assert(offsetof(CDOTA_TeamCommander, m_AllEnemyOther) == 0xe80);
    static_assert(offsetof(CDOTA_TeamCommander, m_AllNeutralCreeps) == 0xe98);
    static_assert(offsetof(CDOTA_TeamCommander, m_ThinkerUnits) == 0xeb0);
    static_assert(offsetof(CDOTA_TeamCommander, m_AllUnitsIncludingDead) == 0xec8);
    static_assert(offsetof(CDOTA_TeamCommander, m_hCouriers) == 0xf10);
    static_assert(offsetof(CDOTA_TeamCommander, m_hDisabledBots) == 0xf28);
    static_assert(offsetof(CDOTA_TeamCommander, m_fGoodLuckFlavorTextTime) == 0x12c0);
    static_assert(offsetof(CDOTA_TeamCommander, m_fTeamfightFlavorTextTime) == 0x12c4);
    static_assert(offsetof(CDOTA_TeamCommander, m_fCongratulateHeroFlavorTextTime) == 0x12c8);
    static_assert(offsetof(CDOTA_TeamCommander, m_fLastAliveHeroHistorySnapshotTime) == 0x12cc);
    static_assert(offsetof(CDOTA_TeamCommander, m_iAliveHeroHistoryIndex) == 0x12d0);
    static_assert(offsetof(CDOTA_TeamCommander, m_iAliveHeroHistory) == 0x12d4);
    static_assert(offsetof(CDOTA_TeamCommander, m_fPlayerDraftChooseTime) == 0x12e8);
    static_assert(offsetof(CDOTA_TeamCommander, m_sScriptDirectory) == 0x12f8);
    static_assert(offsetof(CDOTA_TeamCommander, m_hHeroSelectionScriptScope) == 0x1300);
    static_assert(offsetof(CDOTA_TeamCommander, m_hTeamLevelDesiresScriptScope) == 0x1308);
    static_assert(offsetof(CDOTA_TeamCommander, m_nScriptPathAvoidanceUpdateTick) == 0x1378);
    static_assert(offsetof(CDOTA_TeamCommander, m_fExecutionTime) == 0x137c);
    static_assert(offsetof(CDOTA_TeamCommander, m_iCurExecutionTime) == 0x13f4);
    
    static_assert(sizeof(CDOTA_TeamCommander) == 0x1488);
};
