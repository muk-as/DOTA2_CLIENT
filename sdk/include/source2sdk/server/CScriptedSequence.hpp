#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ForcedCrouchState_t.hpp"
#include "source2sdk/client/ScriptedOnDeath_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/modellib/ScriptedHeldWeaponBehavior_t.hpp"
#include "source2sdk/modellib/ScriptedMoveTo_t.hpp"
#include "source2sdk/modellib/SharedMovementGait_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/ScriptedConflictResponse_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseAnimGraph;
    };
};
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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CScriptedSequence : public source2sdk::server::CBaseEntity
        {
        public:
            CUtlSymbolLarge m_iszEntry; // 0x_            
            CUtlSymbolLarge m_iszPreIdle; // 0x_            
            CUtlSymbolLarge m_iszPlay; // 0x_            
            CUtlSymbolLarge m_iszPostIdle; // 0x_            
            CUtlSymbolLarge m_iszModifierToAddOnPlay; // 0x_            
            CUtlSymbolLarge m_iszNextScript; // 0x_            
            CUtlSymbolLarge m_iszEntity; // 0x_            
            CUtlSymbolLarge m_iszSyncGroup; // 0x_            
            source2sdk::modellib::ScriptedMoveTo_t m_nMoveTo; // 0x_            
            source2sdk::modellib::SharedMovementGait_t m_nMoveToGait; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::modellib::ScriptedHeldWeaponBehavior_t m_nHeldWeaponBehavior; // 0x_            
            source2sdk::client::ForcedCrouchState_t m_nForcedCrouchState; // 0x_            
            bool m_bIsPlayingPreIdle; // 0x_            
            bool m_bIsPlayingEntry; // 0x_            
            bool m_bIsPlayingAction; // 0x_            
            bool m_bIsPlayingPostIdle; // 0x_            
            bool m_bDontRotateOther; // 0x_            
            bool m_bIsRepeatable; // 0x_            
            bool m_bShouldLeaveCorpse; // 0x_            
            bool m_bStartOnSpawn; // 0x_            
            bool m_bDisallowInterrupts; // 0x_            
            bool m_bCanOverrideNPCState; // 0x_            
            bool m_bDontTeleportAtEnd; // 0x_            
            bool m_bHighPriority; // 0x_            
            bool m_bHideDebugComplaints; // 0x_            
            bool m_bContinueOnDeath; // 0x_            
            bool m_bLoopPreIdleSequence; // 0x_            
            bool m_bLoopActionSequence; // 0x_            
            bool m_bLoopPostIdleSequence; // 0x_            
            bool m_bSynchPostIdles; // 0x_            
            bool m_bIgnoreLookAt; // 0x_            
            bool m_bIgnoreGravity; // 0x_            
            bool m_bDisableNPCCollisions; // 0x_            
            bool m_bKeepAnimgraphLockedPost; // 0x_            
            bool m_bDontAddModifiers; // 0x_            
            bool m_bDisableAimingWhileMoving; // 0x_            
            bool m_bIgnoreRotation; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flRadius; // 0x_            
            float m_flRepeat; // 0x_            
            float m_flPlayAnimFadeInTime; // 0x_            
            float m_flMoveInterpTime; // 0x_            
            float m_flAngRate; // 0x_            
            float m_flMoveSpeed; // 0x_            
            bool m_bWaitUntilMoveCompletesToStartAnimation; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nNotReadySequenceCount; // 0x_            
            source2sdk::entity2::GameTime_t m_startTime; // 0x_            
            bool m_bWaitForBeginSequence; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_saved_effects; // 0x_            
            std::int32_t m_savedFlags; // 0x_            
            std::int32_t m_savedCollisionGroup; // 0x_            
            bool m_bInterruptable; // 0x_            
            bool m_sequenceStarted; // 0x_            
            bool m_bPositionRelativeToOtherEntity; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hTargetEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTargetEnt;
            char m_hTargetEnt[0x_]; // 0x_            
            // m_hNextCine has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CScriptedSequence> m_hNextCine;
            char m_hNextCine[0x_]; // 0x_            
            bool m_bThinking; // 0x_            
            bool m_bInitiatedSelfDelete; // 0x_            
            bool m_bIsTeleportingDueToMoveTo; // 0x_            
            bool m_bAllowCustomInterruptConditions; // 0x_            
            // m_hForcedTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseAnimGraph> m_hForcedTarget;
            char m_hForcedTarget[0x_]; // 0x_            
            bool m_bDontCancelOtherSequences; // 0x_            
            bool m_bForceSynch; // 0x_            
            bool m_bPreventUpdateYawOnFinish; // 0x_            
            bool m_bEnsureOnNavmeshOnFinish; // 0x_            
            source2sdk::client::ScriptedOnDeath_t m_onDeathBehavior; // 0x_            
            source2sdk::server::ScriptedConflictResponse_t m_ConflictResponse; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnBeginSequence; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnActionStartOrLoop; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnEndSequence; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnPostIdleEndSequence; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnCancelSequence; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnCancelFailedSequence; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnScriptEvent[8]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CTransform m_matOtherToMain; // 0x_            
            // m_hInteractionMainEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hInteractionMainEntity;
            char m_hInteractionMainEntity[0x_]; // 0x_            
            std::int32_t m_iPlayerDeathBehavior; // 0x_            
            bool m_bSkipFadeIn; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void CScriptedSequenceScriptThink; // 0x_
            // void InputMoveToPosition; // 0x_
            // void InputBeginSequence; // 0x_
            // void InputCancelSequence; // 0x_
            // CUtlSymbolLarge InputSetActionSequence; // 0x_
            // CUtlSymbolLarge InputForceTarget; // 0x_
            // void InputScriptPlayerDeath; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CScriptedSequence because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CScriptedSequence) == 0x_);
    };
};
