#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/DOTA_LANE.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
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
namespace source2sdk
{
    namespace server
    {
        struct CDOTABaseAbility;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_TeamCommander;
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
        class CDOTA_Bot
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_iLifesteal; // 0x_            
            std::int32_t m_iBlock; // 0x_            
            bool m_bForceIdle; // 0x_            
            bool m_bForceCreepAttack; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_fExecutionTime[30]; // 0x_            
            std::int32_t m_iCurExecutionTime; // 0x_            
            source2sdk::client::PlayerID_t m_iPlayerID; // 0x_            
            // m_hUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hUnit;
            char m_hUnit[0x_]; // 0x_            
            source2sdk::server::CDOTA_TeamCommander* m_pTeamCommander; // 0x_            
            std::int32_t m_iUnitType; // 0x_            
            float m_fAggressionFactor; // 0x_            
            bool m_bBotControlled; // 0x_            
            bool m_bLiquidate; // 0x_            
            bool m_bDoNotPurchase; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_iDifficulty; // 0x_            
            bool m_bIsFullScriptTakeover; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::DOTA_LANE m_CurrentLane; // 0x_            
            source2sdk::client::DOTA_LANE m_MostRecentLane; // 0x_            
            source2sdk::client::DOTA_LANE m_AssignedLane; // 0x_            
            source2sdk::client::DOTA_LANE m_TargetLane; // 0x_            
            source2sdk::client::DOTA_LANE m_ForcedLane; // 0x_            
            float m_fCurrentLaneAmount; // 0x_            
            bool m_bIsNPXCarry; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_fEstimatedUnitDamage; // 0x_            
            float m_fEstimatedMaxUnitDamage; // 0x_            
            float m_fEstimatedBuildingDamage; // 0x_            
            bool m_bWantsToCast; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_iWantsToCastFrame; // 0x_            
            bool m_bWantsToAttack; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_iWantsToAttackFrame; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CountdownTimer m_UpdateCurrentLaneTimer; // 0x_            
            source2sdk::server::CountdownTimer m_UpdateModeTimer; // 0x_            
            source2sdk::server::CountdownTimer m_ModeThinkTimer; // 0x_            
            source2sdk::server::CountdownTimer m_InteralRatingsTimer; // 0x_            
            source2sdk::server::CountdownTimer m_BuybackDelayTimer; // 0x_            
            source2sdk::server::CountdownTimer m_CourierUsageTimer; // 0x_            
            source2sdk::server::CountdownTimer m_AbilityMutedTimer; // 0x_            
            source2sdk::server::CountdownTimer m_AbilityMutedCheckTimer; // 0x_            
            source2sdk::entity2::GameTime_t m_HitByTowerTime; // 0x_            
            source2sdk::entity2::GameTime_t m_HitByHeroTime[24]; // 0x_            
            source2sdk::entity2::GameTime_t m_HitByCreepTime; // 0x_            
            source2sdk::entity2::GameTick_t m_nEstimatedDamageUpdatedTick; // 0x_            
            source2sdk::entity2::GameTick_t m_nNearbyUnitsUpdatedTick; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_NearbyTrees has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_NearbyTrees;
            char m_NearbyTrees[0x_]; // 0x_            
            std::int32_t m_nNearbyEnemyCreeps; // 0x_            
            std::int32_t m_nAttackingCreeps; // 0x_            
            std::int32_t m_nAttackingTowers; // 0x_            
            std::int32_t m_nAttackingHeroes; // 0x_            
            source2sdk::entity2::GameTime_t m_fLastSeen; // 0x_            
            std::int32_t m_nFailedPaths; // 0x_            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x_]; // 0x_            
            Vector m_vTargetLoc; // 0x_            
            source2sdk::entity2::GameTime_t m_fTargetLastSeen; // 0x_            
            // m_hTargetLastHitCreep has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTargetLastHitCreep;
            char m_hTargetLastHitCreep[0x_]; // 0x_            
            bool m_bWasInvisible; // 0x_            
            bool m_bKnownInvisible; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector m_vLastSeenLoc; // 0x_            
            Vector m_vRequestedBlinkLoc; // 0x_            
            source2sdk::entity2::GameTime_t m_fRequestedBlinkStart; // 0x_            
            source2sdk::entity2::GameTime_t m_fRequestedBlinkExpire; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hMinions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hMinions;
            char m_hMinions[0x_]; // 0x_            
            // m_Build has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CDOTABaseAbility*> m_Build;
            char m_Build[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_fModeDesires[28]; // 0x_            
            std::int32_t m_iPreviousBotModeType; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::GameTime_t m_fPendingActionExecuteTime; // 0x_            
            bool m_bPendingActionBypass; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nForceAbility; // 0x_            
            source2sdk::entity2::GameTime_t m_flLastDebugTime; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_iLifesteal) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_iBlock) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_bForceIdle) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_bForceCreepAttack) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_fExecutionTime) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_iCurExecutionTime) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_iPlayerID) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_hUnit) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_pTeamCommander) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_iUnitType) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_fAggressionFactor) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_bBotControlled) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_bLiquidate) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_bDoNotPurchase) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_iDifficulty) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_bIsFullScriptTakeover) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_CurrentLane) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_MostRecentLane) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_AssignedLane) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_TargetLane) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_ForcedLane) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_fCurrentLaneAmount) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_bIsNPXCarry) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_fEstimatedUnitDamage) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_fEstimatedMaxUnitDamage) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_fEstimatedBuildingDamage) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_bWantsToCast) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_iWantsToCastFrame) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_bWantsToAttack) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_iWantsToAttackFrame) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_UpdateCurrentLaneTimer) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_UpdateModeTimer) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_ModeThinkTimer) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_InteralRatingsTimer) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_BuybackDelayTimer) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_CourierUsageTimer) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_AbilityMutedTimer) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_AbilityMutedCheckTimer) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_HitByTowerTime) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_HitByHeroTime) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_HitByCreepTime) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_nEstimatedDamageUpdatedTick) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_nNearbyUnitsUpdatedTick) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_NearbyTrees) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_nNearbyEnemyCreeps) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_nAttackingCreeps) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_nAttackingTowers) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_nAttackingHeroes) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_fLastSeen) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_nFailedPaths) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_hTarget) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_vTargetLoc) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_fTargetLastSeen) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_hTargetLastHitCreep) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_bWasInvisible) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_bKnownInvisible) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_vLastSeenLoc) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_vRequestedBlinkLoc) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_fRequestedBlinkStart) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_fRequestedBlinkExpire) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_hMinions) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_Build) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_fModeDesires) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_iPreviousBotModeType) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_fPendingActionExecuteTime) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_bPendingActionBypass) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_nForceAbility) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_flLastDebugTime) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CDOTA_Bot) == 0x_);
    };
};
