#pragma once
#include "source2sdk/client/ScriptedHeldWeaponBehavior_t.hpp"
#include "source2sdk/client/ScriptedMoveTo_t.hpp"
#include "source2sdk/client/ScriptedOnDeath_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/modellib/MovementGait_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/ScriptedConflictResponse_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseAnimGraph;
};

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x800
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CScriptedSequence : public server::CBaseEntity
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
        client::ScriptedMoveTo_t m_nMoveTo; // 0x520        
        modellib::MovementGait_t m_nMoveToGait; // 0x524        
        [[maybe_unused]] std::uint8_t pad_0x525[0x3]; // 0x525
        client::ScriptedHeldWeaponBehavior_t m_nHeldWeaponBehavior; // 0x528        
        bool m_bIsPlayingPreIdle; // 0x52c        
        bool m_bIsPlayingEntry; // 0x52d        
        bool m_bIsPlayingAction; // 0x52e        
        bool m_bIsPlayingPostIdle; // 0x52f        
        bool m_bDontRotateOther; // 0x530        
        bool m_bIsRepeatable; // 0x531        
        bool m_bShouldLeaveCorpse; // 0x532        
        bool m_bStartOnSpawn; // 0x533        
        bool m_bDisallowInterrupts; // 0x534        
        bool m_bCanOverrideNPCState; // 0x535        
        bool m_bDontTeleportAtEnd; // 0x536        
        bool m_bHighPriority; // 0x537        
        bool m_bHideDebugComplaints; // 0x538        
        bool m_bContinueOnDeath; // 0x539        
        bool m_bLoopPreIdleSequence; // 0x53a        
        bool m_bLoopActionSequence; // 0x53b        
        bool m_bLoopPostIdleSequence; // 0x53c        
        bool m_bSynchPostIdles; // 0x53d        
        bool m_bIgnoreLookAt; // 0x53e        
        bool m_bIgnoreGravity; // 0x53f        
        bool m_bDisableNPCCollisions; // 0x540        
        bool m_bKeepAnimgraphLockedPost; // 0x541        
        bool m_bDontAddModifiers; // 0x542        
        bool m_bDisableAimingWhileMoving; // 0x543        
        float m_flRadius; // 0x544        
        float m_flRepeat; // 0x548        
        float m_flPlayAnimFadeInTime; // 0x54c        
        float m_flMoveInterpTime; // 0x550        
        float m_flAngRate; // 0x554        
        bool m_bWaitUntilMoveCompletesToStartAnimation; // 0x558        
        [[maybe_unused]] std::uint8_t pad_0x559[0x3]; // 0x559
        int32_t m_nNotReadySequenceCount; // 0x55c        
        entity2::GameTime_t m_startTime; // 0x560        
        bool m_bWaitForBeginSequence; // 0x564        
        [[maybe_unused]] std::uint8_t pad_0x565[0x3]; // 0x565
        int32_t m_saved_effects; // 0x568        
        int32_t m_savedFlags; // 0x56c        
        int32_t m_savedCollisionGroup; // 0x570        
        bool m_bInterruptable; // 0x574        
        bool m_sequenceStarted; // 0x575        
        bool m_bPositionRelativeToOtherEntity; // 0x576        
        [[maybe_unused]] std::uint8_t pad_0x577[0x1]; // 0x577
        // m_hTargetEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTargetEnt;
        char m_hTargetEnt[0x4]; // 0x578        
        // m_hNextCine has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CScriptedSequence> m_hNextCine;
        char m_hNextCine[0x4]; // 0x57c        
        bool m_bThinking; // 0x580        
        bool m_bInitiatedSelfDelete; // 0x581        
        bool m_bIsTeleportingDueToMoveTo; // 0x582        
        bool m_bAllowCustomInterruptConditions; // 0x583        
        // m_hForcedTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseAnimGraph> m_hForcedTarget;
        char m_hForcedTarget[0x4]; // 0x584        
        bool m_bDontCancelOtherSequences; // 0x588        
        bool m_bForceSynch; // 0x589        
        bool m_bPreventUpdateYawOnFinish; // 0x58a        
        bool m_bEnsureOnNavmeshOnFinish; // 0x58b        
        client::ScriptedOnDeath_t m_onDeathBehavior; // 0x58c        
        server::ScriptedConflictResponse_t m_ConflictResponse; // 0x590        
        [[maybe_unused]] std::uint8_t pad_0x594[0x4]; // 0x594
        entity2::CEntityIOOutput m_OnBeginSequence; // 0x598        
        entity2::CEntityIOOutput m_OnActionStartOrLoop; // 0x5c0        
        entity2::CEntityIOOutput m_OnEndSequence; // 0x5e8        
        entity2::CEntityIOOutput m_OnPostIdleEndSequence; // 0x610        
        entity2::CEntityIOOutput m_OnCancelSequence; // 0x638        
        entity2::CEntityIOOutput m_OnCancelFailedSequence; // 0x660        
        entity2::CEntityIOOutput m_OnScriptEvent[8]; // 0x688        
        [[maybe_unused]] std::uint8_t pad_0x7c8[0x8]; // 0x7c8
        CTransform m_matOtherToMain; // 0x7d0        
        // m_hInteractionMainEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hInteractionMainEntity;
        char m_hInteractionMainEntity[0x4]; // 0x7f0        
        int32_t m_iPlayerDeathBehavior; // 0x7f4        
        [[maybe_unused]] std::uint8_t pad_0x7f8[0x8];
        
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
    static_assert(sizeof(CScriptedSequence) == 0x800);
};
