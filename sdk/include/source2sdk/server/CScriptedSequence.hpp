#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ForcedCrouchState_t.hpp"
#include "source2sdk/client/ScriptedHeldWeaponBehavior_t.hpp"
#include "source2sdk/client/ScriptedMoveTo_t.hpp"
#include "source2sdk/client/ScriptedOnDeath_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x800
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CScriptedSequence : public source2sdk::server::CBaseEntity
        {
        public:
            CUtlSymbolLarge m_iszEntry; // 0x4e0            
            CUtlSymbolLarge m_iszPreIdle; // 0x4e8            
            CUtlSymbolLarge m_iszPlay; // 0x4f0            
            CUtlSymbolLarge m_iszPostIdle; // 0x4f8            
            CUtlSymbolLarge m_iszModifierToAddOnPlay; // 0x500            
            CUtlSymbolLarge m_iszNextScript; // 0x508            
            CUtlSymbolLarge m_iszEntity; // 0x510            
            CUtlSymbolLarge m_iszSyncGroup; // 0x518            
            source2sdk::client::ScriptedMoveTo_t m_nMoveTo; // 0x520            
            source2sdk::modellib::SharedMovementGait_t m_nMoveToGait; // 0x524            
            uint8_t _pad0525[0x3]; // 0x525
            source2sdk::client::ScriptedHeldWeaponBehavior_t m_nHeldWeaponBehavior; // 0x528            
            source2sdk::client::ForcedCrouchState_t m_nForcedCrouchState; // 0x52c            
            bool m_bIsPlayingPreIdle; // 0x530            
            bool m_bIsPlayingEntry; // 0x531            
            bool m_bIsPlayingAction; // 0x532            
            bool m_bIsPlayingPostIdle; // 0x533            
            bool m_bDontRotateOther; // 0x534            
            bool m_bIsRepeatable; // 0x535            
            bool m_bShouldLeaveCorpse; // 0x536            
            bool m_bStartOnSpawn; // 0x537            
            bool m_bDisallowInterrupts; // 0x538            
            bool m_bCanOverrideNPCState; // 0x539            
            bool m_bDontTeleportAtEnd; // 0x53a            
            bool m_bHighPriority; // 0x53b            
            bool m_bHideDebugComplaints; // 0x53c            
            bool m_bContinueOnDeath; // 0x53d            
            bool m_bLoopPreIdleSequence; // 0x53e            
            bool m_bLoopActionSequence; // 0x53f            
            bool m_bLoopPostIdleSequence; // 0x540            
            bool m_bSynchPostIdles; // 0x541            
            bool m_bIgnoreLookAt; // 0x542            
            bool m_bIgnoreGravity; // 0x543            
            bool m_bDisableNPCCollisions; // 0x544            
            bool m_bKeepAnimgraphLockedPost; // 0x545            
            bool m_bDontAddModifiers; // 0x546            
            bool m_bDisableAimingWhileMoving; // 0x547            
            bool m_bIgnoreRotation; // 0x548            
            uint8_t _pad0549[0x3]; // 0x549
            float m_flRadius; // 0x54c            
            float m_flRepeat; // 0x550            
            float m_flPlayAnimFadeInTime; // 0x554            
            float m_flMoveInterpTime; // 0x558            
            float m_flAngRate; // 0x55c            
            float m_flMoveSpeed; // 0x560            
            bool m_bWaitUntilMoveCompletesToStartAnimation; // 0x564            
            uint8_t _pad0565[0x3]; // 0x565
            std::int32_t m_nNotReadySequenceCount; // 0x568            
            source2sdk::entity2::GameTime_t m_startTime; // 0x56c            
            bool m_bWaitForBeginSequence; // 0x570            
            uint8_t _pad0571[0x3]; // 0x571
            std::int32_t m_saved_effects; // 0x574            
            std::int32_t m_savedFlags; // 0x578            
            std::int32_t m_savedCollisionGroup; // 0x57c            
            bool m_bInterruptable; // 0x580            
            bool m_sequenceStarted; // 0x581            
            bool m_bPositionRelativeToOtherEntity; // 0x582            
            uint8_t _pad0583[0x1]; // 0x583
            // m_hTargetEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTargetEnt;
            char m_hTargetEnt[0x4]; // 0x584            
            // m_hNextCine has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CScriptedSequence> m_hNextCine;
            char m_hNextCine[0x4]; // 0x588            
            bool m_bThinking; // 0x58c            
            bool m_bInitiatedSelfDelete; // 0x58d            
            bool m_bIsTeleportingDueToMoveTo; // 0x58e            
            bool m_bAllowCustomInterruptConditions; // 0x58f            
            // m_hForcedTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseAnimGraph> m_hForcedTarget;
            char m_hForcedTarget[0x4]; // 0x590            
            bool m_bDontCancelOtherSequences; // 0x594            
            bool m_bForceSynch; // 0x595            
            bool m_bPreventUpdateYawOnFinish; // 0x596            
            bool m_bEnsureOnNavmeshOnFinish; // 0x597            
            source2sdk::client::ScriptedOnDeath_t m_onDeathBehavior; // 0x598            
            source2sdk::server::ScriptedConflictResponse_t m_ConflictResponse; // 0x59c            
            source2sdk::entity2::CEntityIOOutput m_OnBeginSequence; // 0x5a0            
            source2sdk::entity2::CEntityIOOutput m_OnActionStartOrLoop; // 0x5c8            
            source2sdk::entity2::CEntityIOOutput m_OnEndSequence; // 0x5f0            
            source2sdk::entity2::CEntityIOOutput m_OnPostIdleEndSequence; // 0x618            
            source2sdk::entity2::CEntityIOOutput m_OnCancelSequence; // 0x640            
            source2sdk::entity2::CEntityIOOutput m_OnCancelFailedSequence; // 0x668            
            source2sdk::entity2::CEntityIOOutput m_OnScriptEvent[8]; // 0x690            
            CTransform m_matOtherToMain; // 0x7d0            
            // m_hInteractionMainEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hInteractionMainEntity;
            char m_hInteractionMainEntity[0x4]; // 0x7f0            
            std::int32_t m_iPlayerDeathBehavior; // 0x7f4            
            uint8_t _pad07f8[0x8];
            
            // Datamap fields:
            // void CScriptedSequenceScriptThink; // 0x0
            // void InputMoveToPosition; // 0x0
            // void InputBeginSequence; // 0x0
            // void InputCancelSequence; // 0x0
            // CUtlSymbolLarge InputSetActionSequence; // 0x0
            // CUtlSymbolLarge InputForceTarget; // 0x0
            // void InputScriptPlayerDeath; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CScriptedSequence because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CScriptedSequence) == 0x800);
    };
};
