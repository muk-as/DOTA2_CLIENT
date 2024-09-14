#pragma once
#include "source2sdk/client/DOTA_LANE.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
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
    class CDOTABaseAbility;
};

namespace source2sdk::server
{
    class CDOTA_TeamCommander;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x8718
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Bot
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x10]; // 0x0
        int32_t m_iLifesteal; // 0x10        
        int32_t m_iBlock; // 0x14        
        bool m_bForceIdle; // 0x18        
        bool m_bForceCreepAttack; // 0x19        
        [[maybe_unused]] std::uint8_t pad_0x1a[0x2]; // 0x1a
        float m_fExecutionTime[30]; // 0x1c        
        int32_t m_iCurExecutionTime; // 0x94        
        client::PlayerID_t m_iPlayerID; // 0x98        
        // m_hUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hUnit;
        char m_hUnit[0x4]; // 0x9c        
        server::CDOTA_TeamCommander* m_pTeamCommander; // 0xa0        
        int32_t m_iUnitType; // 0xa8        
        float m_fAggressionFactor; // 0xac        
        bool m_bBotControlled; // 0xb0        
        bool m_bLiquidate; // 0xb1        
        bool m_bDoNotPurchase; // 0xb2        
        [[maybe_unused]] std::uint8_t pad_0xb3[0x1]; // 0xb3
        int32_t m_iDifficulty; // 0xb4        
        bool m_bIsFullScriptTakeover; // 0xb8        
        [[maybe_unused]] std::uint8_t pad_0xb9[0x3]; // 0xb9
        client::DOTA_LANE m_CurrentLane; // 0xbc        
        client::DOTA_LANE m_MostRecentLane; // 0xc0        
        client::DOTA_LANE m_AssignedLane; // 0xc4        
        client::DOTA_LANE m_TargetLane; // 0xc8        
        client::DOTA_LANE m_ForcedLane; // 0xcc        
        float m_fCurrentLaneAmount; // 0xd0        
        bool m_bIsNPXCarry; // 0xd4        
        [[maybe_unused]] std::uint8_t pad_0xd5[0x3]; // 0xd5
        float m_fEstimatedUnitDamage; // 0xd8        
        float m_fEstimatedMaxUnitDamage; // 0xdc        
        float m_fEstimatedBuildingDamage; // 0xe0        
        bool m_bWantsToCast; // 0xe4        
        [[maybe_unused]] std::uint8_t pad_0xe5[0x3]; // 0xe5
        int32_t m_iWantsToCastFrame; // 0xe8        
        bool m_bWantsToAttack; // 0xec        
        [[maybe_unused]] std::uint8_t pad_0xed[0x3]; // 0xed
        int32_t m_iWantsToAttackFrame; // 0xf0        
        [[maybe_unused]] std::uint8_t pad_0xf4[0x4]; // 0xf4
        server::CountdownTimer m_UpdateCurrentLaneTimer; // 0xf8        
        server::CountdownTimer m_UpdateModeTimer; // 0x110        
        server::CountdownTimer m_ModeThinkTimer; // 0x128        
        server::CountdownTimer m_InteralRatingsTimer; // 0x140        
        server::CountdownTimer m_BuybackDelayTimer; // 0x158        
        server::CountdownTimer m_CourierUsageTimer; // 0x170        
        server::CountdownTimer m_AbilityMutedTimer; // 0x188        
        server::CountdownTimer m_AbilityMutedCheckTimer; // 0x1a0        
        entity2::GameTime_t m_HitByTowerTime; // 0x1b8        
        entity2::GameTime_t m_HitByHeroTime[24]; // 0x1bc        
        entity2::GameTime_t m_HitByCreepTime; // 0x21c        
        entity2::GameTick_t m_nEstimatedDamageUpdatedTick; // 0x220        
        entity2::GameTick_t m_nNearbyUnitsUpdatedTick; // 0x224        
        [[maybe_unused]] std::uint8_t pad_0x228[0xc0]; // 0x228
        // m_NearbyTrees has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int32_t> m_NearbyTrees;
        char m_NearbyTrees[0x18]; // 0x2e8        
        int32_t m_nNearbyEnemyCreeps; // 0x300        
        int32_t m_nAttackingCreeps; // 0x304        
        int32_t m_nAttackingTowers; // 0x308        
        int32_t m_nAttackingHeroes; // 0x30c        
        entity2::GameTime_t m_fLastSeen; // 0x310        
        int32_t m_nFailedPaths; // 0x314        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x318        
        Vector m_vTargetLoc; // 0x31c        
        entity2::GameTime_t m_fTargetLastSeen; // 0x328        
        // m_hTargetLastHitCreep has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTargetLastHitCreep;
        char m_hTargetLastHitCreep[0x4]; // 0x32c        
        bool m_bWasInvisible; // 0x330        
        bool m_bKnownInvisible; // 0x331        
        [[maybe_unused]] std::uint8_t pad_0x332[0x2]; // 0x332
        Vector m_vLastSeenLoc; // 0x334        
        Vector m_vRequestedBlinkLoc; // 0x340        
        entity2::GameTime_t m_fRequestedBlinkStart; // 0x34c        
        entity2::GameTime_t m_fRequestedBlinkExpire; // 0x350        
        [[maybe_unused]] std::uint8_t pad_0x354[0x4]; // 0x354
        // m_hMinions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hMinions;
        char m_hMinions[0x18]; // 0x358        
        // m_Build has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::CDOTABaseAbility*> m_Build;
        char m_Build[0x18]; // 0x370        
        [[maybe_unused]] std::uint8_t pad_0x388[0x82e0]; // 0x388
        float m_fModeDesires[27]; // 0x8668        
        int32_t m_iPreviousBotModeType; // 0x86d4        
        [[maybe_unused]] std::uint8_t pad_0x86d8[0x30]; // 0x86d8
        entity2::GameTime_t m_fPendingActionExecuteTime; // 0x8708        
        bool m_bPendingActionBypass; // 0x870c        
        [[maybe_unused]] std::uint8_t pad_0x870d[0x3]; // 0x870d
        int32_t m_nForceAbility; // 0x8710        
        entity2::GameTime_t m_flLastDebugTime; // 0x8714        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTA_Bot, m_iLifesteal) == 0x10);
    static_assert(offsetof(CDOTA_Bot, m_iBlock) == 0x14);
    static_assert(offsetof(CDOTA_Bot, m_bForceIdle) == 0x18);
    static_assert(offsetof(CDOTA_Bot, m_bForceCreepAttack) == 0x19);
    static_assert(offsetof(CDOTA_Bot, m_fExecutionTime) == 0x1c);
    static_assert(offsetof(CDOTA_Bot, m_iCurExecutionTime) == 0x94);
    static_assert(offsetof(CDOTA_Bot, m_iPlayerID) == 0x98);
    static_assert(offsetof(CDOTA_Bot, m_hUnit) == 0x9c);
    static_assert(offsetof(CDOTA_Bot, m_pTeamCommander) == 0xa0);
    static_assert(offsetof(CDOTA_Bot, m_iUnitType) == 0xa8);
    static_assert(offsetof(CDOTA_Bot, m_fAggressionFactor) == 0xac);
    static_assert(offsetof(CDOTA_Bot, m_bBotControlled) == 0xb0);
    static_assert(offsetof(CDOTA_Bot, m_bLiquidate) == 0xb1);
    static_assert(offsetof(CDOTA_Bot, m_bDoNotPurchase) == 0xb2);
    static_assert(offsetof(CDOTA_Bot, m_iDifficulty) == 0xb4);
    static_assert(offsetof(CDOTA_Bot, m_bIsFullScriptTakeover) == 0xb8);
    static_assert(offsetof(CDOTA_Bot, m_CurrentLane) == 0xbc);
    static_assert(offsetof(CDOTA_Bot, m_MostRecentLane) == 0xc0);
    static_assert(offsetof(CDOTA_Bot, m_AssignedLane) == 0xc4);
    static_assert(offsetof(CDOTA_Bot, m_TargetLane) == 0xc8);
    static_assert(offsetof(CDOTA_Bot, m_ForcedLane) == 0xcc);
    static_assert(offsetof(CDOTA_Bot, m_fCurrentLaneAmount) == 0xd0);
    static_assert(offsetof(CDOTA_Bot, m_bIsNPXCarry) == 0xd4);
    static_assert(offsetof(CDOTA_Bot, m_fEstimatedUnitDamage) == 0xd8);
    static_assert(offsetof(CDOTA_Bot, m_fEstimatedMaxUnitDamage) == 0xdc);
    static_assert(offsetof(CDOTA_Bot, m_fEstimatedBuildingDamage) == 0xe0);
    static_assert(offsetof(CDOTA_Bot, m_bWantsToCast) == 0xe4);
    static_assert(offsetof(CDOTA_Bot, m_iWantsToCastFrame) == 0xe8);
    static_assert(offsetof(CDOTA_Bot, m_bWantsToAttack) == 0xec);
    static_assert(offsetof(CDOTA_Bot, m_iWantsToAttackFrame) == 0xf0);
    static_assert(offsetof(CDOTA_Bot, m_UpdateCurrentLaneTimer) == 0xf8);
    static_assert(offsetof(CDOTA_Bot, m_UpdateModeTimer) == 0x110);
    static_assert(offsetof(CDOTA_Bot, m_ModeThinkTimer) == 0x128);
    static_assert(offsetof(CDOTA_Bot, m_InteralRatingsTimer) == 0x140);
    static_assert(offsetof(CDOTA_Bot, m_BuybackDelayTimer) == 0x158);
    static_assert(offsetof(CDOTA_Bot, m_CourierUsageTimer) == 0x170);
    static_assert(offsetof(CDOTA_Bot, m_AbilityMutedTimer) == 0x188);
    static_assert(offsetof(CDOTA_Bot, m_AbilityMutedCheckTimer) == 0x1a0);
    static_assert(offsetof(CDOTA_Bot, m_HitByTowerTime) == 0x1b8);
    static_assert(offsetof(CDOTA_Bot, m_HitByHeroTime) == 0x1bc);
    static_assert(offsetof(CDOTA_Bot, m_HitByCreepTime) == 0x21c);
    static_assert(offsetof(CDOTA_Bot, m_nEstimatedDamageUpdatedTick) == 0x220);
    static_assert(offsetof(CDOTA_Bot, m_nNearbyUnitsUpdatedTick) == 0x224);
    static_assert(offsetof(CDOTA_Bot, m_NearbyTrees) == 0x2e8);
    static_assert(offsetof(CDOTA_Bot, m_nNearbyEnemyCreeps) == 0x300);
    static_assert(offsetof(CDOTA_Bot, m_nAttackingCreeps) == 0x304);
    static_assert(offsetof(CDOTA_Bot, m_nAttackingTowers) == 0x308);
    static_assert(offsetof(CDOTA_Bot, m_nAttackingHeroes) == 0x30c);
    static_assert(offsetof(CDOTA_Bot, m_fLastSeen) == 0x310);
    static_assert(offsetof(CDOTA_Bot, m_nFailedPaths) == 0x314);
    static_assert(offsetof(CDOTA_Bot, m_hTarget) == 0x318);
    static_assert(offsetof(CDOTA_Bot, m_vTargetLoc) == 0x31c);
    static_assert(offsetof(CDOTA_Bot, m_fTargetLastSeen) == 0x328);
    static_assert(offsetof(CDOTA_Bot, m_hTargetLastHitCreep) == 0x32c);
    static_assert(offsetof(CDOTA_Bot, m_bWasInvisible) == 0x330);
    static_assert(offsetof(CDOTA_Bot, m_bKnownInvisible) == 0x331);
    static_assert(offsetof(CDOTA_Bot, m_vLastSeenLoc) == 0x334);
    static_assert(offsetof(CDOTA_Bot, m_vRequestedBlinkLoc) == 0x340);
    static_assert(offsetof(CDOTA_Bot, m_fRequestedBlinkStart) == 0x34c);
    static_assert(offsetof(CDOTA_Bot, m_fRequestedBlinkExpire) == 0x350);
    static_assert(offsetof(CDOTA_Bot, m_hMinions) == 0x358);
    static_assert(offsetof(CDOTA_Bot, m_Build) == 0x370);
    static_assert(offsetof(CDOTA_Bot, m_fModeDesires) == 0x8668);
    static_assert(offsetof(CDOTA_Bot, m_iPreviousBotModeType) == 0x86d4);
    static_assert(offsetof(CDOTA_Bot, m_fPendingActionExecuteTime) == 0x8708);
    static_assert(offsetof(CDOTA_Bot, m_bPendingActionBypass) == 0x870c);
    static_assert(offsetof(CDOTA_Bot, m_nForceAbility) == 0x8710);
    static_assert(offsetof(CDOTA_Bot, m_flLastDebugTime) == 0x8714);
    
    static_assert(sizeof(CDOTA_Bot) == 0x8718);
};
