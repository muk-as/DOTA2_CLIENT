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
    // Size: 0x7d0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CScriptedSequence : public server::CBaseEntity
    {
    public:
        CUtlSymbolLarge m_iszEntry; // 0x4b8        
        CUtlSymbolLarge m_iszPreIdle; // 0x4c0        
        CUtlSymbolLarge m_iszPlay; // 0x4c8        
        CUtlSymbolLarge m_iszPostIdle; // 0x4d0        
        CUtlSymbolLarge m_iszModifierToAddOnPlay; // 0x4d8        
        CUtlSymbolLarge m_iszNextScript; // 0x4e0        
        CUtlSymbolLarge m_iszEntity; // 0x4e8        
        CUtlSymbolLarge m_iszSyncGroup; // 0x4f0        
        client::ScriptedMoveTo_t m_nMoveTo; // 0x4f8        
        modellib::MovementGait_t m_nMoveToGait; // 0x4fc        
        [[maybe_unused]] std::uint8_t pad_0x4fd[0x3]; // 0x4fd
        client::ScriptedHeldWeaponBehavior_t m_nHeldWeaponBehavior; // 0x500        
        bool m_bIsPlayingPreIdle; // 0x504        
        bool m_bIsPlayingEntry; // 0x505        
        bool m_bIsPlayingAction; // 0x506        
        bool m_bIsPlayingPostIdle; // 0x507        
        bool m_bDontRotateOther; // 0x508        
        bool m_bIsRepeatable; // 0x509        
        bool m_bShouldLeaveCorpse; // 0x50a        
        bool m_bStartOnSpawn; // 0x50b        
        bool m_bDisallowInterrupts; // 0x50c        
        bool m_bCanOverrideNPCState; // 0x50d        
        bool m_bDontTeleportAtEnd; // 0x50e        
        bool m_bHighPriority; // 0x50f        
        bool m_bHideDebugComplaints; // 0x510        
        bool m_bContinueOnDeath; // 0x511        
        bool m_bLoopPreIdleSequence; // 0x512        
        bool m_bLoopActionSequence; // 0x513        
        bool m_bLoopPostIdleSequence; // 0x514        
        bool m_bSynchPostIdles; // 0x515        
        bool m_bIgnoreLookAt; // 0x516        
        bool m_bIgnoreGravity; // 0x517        
        bool m_bDisableNPCCollisions; // 0x518        
        bool m_bKeepAnimgraphLockedPost; // 0x519        
        bool m_bDontAddModifiers; // 0x51a        
        [[maybe_unused]] std::uint8_t pad_0x51b[0x1]; // 0x51b
        float m_flRadius; // 0x51c        
        float m_flRepeat; // 0x520        
        float m_flPlayAnimFadeInTime; // 0x524        
        float m_flMoveInterpTime; // 0x528        
        float m_flAngRate; // 0x52c        
        bool m_bWaitUntilMoveCompletesToStartAnimation; // 0x530        
        [[maybe_unused]] std::uint8_t pad_0x531[0x3]; // 0x531
        int32_t m_nNotReadySequenceCount; // 0x534        
        entity2::GameTime_t m_startTime; // 0x538        
        bool m_bWaitForBeginSequence; // 0x53c        
        [[maybe_unused]] std::uint8_t pad_0x53d[0x3]; // 0x53d
        int32_t m_saved_effects; // 0x540        
        int32_t m_savedFlags; // 0x544        
        int32_t m_savedCollisionGroup; // 0x548        
        bool m_bInterruptable; // 0x54c        
        bool m_sequenceStarted; // 0x54d        
        bool m_bPositionRelativeToOtherEntity; // 0x54e        
        [[maybe_unused]] std::uint8_t pad_0x54f[0x1]; // 0x54f
        // m_hTargetEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTargetEnt;
        char m_hTargetEnt[0x4]; // 0x550        
        // m_hNextCine has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CScriptedSequence> m_hNextCine;
        char m_hNextCine[0x4]; // 0x554        
        bool m_bThinking; // 0x558        
        bool m_bInitiatedSelfDelete; // 0x559        
        bool m_bIsTeleportingDueToMoveTo; // 0x55a        
        bool m_bAllowCustomInterruptConditions; // 0x55b        
        // m_hForcedTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseAnimGraph> m_hForcedTarget;
        char m_hForcedTarget[0x4]; // 0x55c        
        bool m_bDontCancelOtherSequences; // 0x560        
        bool m_bForceSynch; // 0x561        
        bool m_bPreventUpdateYawOnFinish; // 0x562        
        bool m_bEnsureOnNavmeshOnFinish; // 0x563        
        client::ScriptedOnDeath_t m_onDeathBehavior; // 0x564        
        server::ScriptedConflictResponse_t m_ConflictResponse; // 0x568        
        [[maybe_unused]] std::uint8_t pad_0x56c[0x4]; // 0x56c
        entity2::CEntityIOOutput m_OnBeginSequence; // 0x570        
        entity2::CEntityIOOutput m_OnActionStartOrLoop; // 0x598        
        entity2::CEntityIOOutput m_OnEndSequence; // 0x5c0        
        entity2::CEntityIOOutput m_OnPostIdleEndSequence; // 0x5e8        
        entity2::CEntityIOOutput m_OnCancelSequence; // 0x610        
        entity2::CEntityIOOutput m_OnCancelFailedSequence; // 0x638        
        entity2::CEntityIOOutput m_OnScriptEvent[8]; // 0x660        
        CTransform m_matOtherToMain; // 0x7a0        
        // m_hInteractionMainEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hInteractionMainEntity;
        char m_hInteractionMainEntity[0x4]; // 0x7c0        
        int32_t m_iPlayerDeathBehavior; // 0x7c4        
        [[maybe_unused]] std::uint8_t pad_0x7c8[0x8];
        
        // Datamap fields:
        // void CScriptedSequenceScriptThink; // 0x0
        // void InputMoveToPosition; // 0x0
        // void InputBeginSequence; // 0x0
        // void InputCancelSequence; // 0x0
        // CUtlSymbolLarge InputSetActionSequence; // 0x0
        // void InputScriptPlayerDeath; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CScriptedSequence because it is not a standard-layout class
    static_assert(sizeof(CScriptedSequence) == 0x7d0);
};
