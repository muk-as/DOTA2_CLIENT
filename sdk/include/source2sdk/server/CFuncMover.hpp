#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/SolidType_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/CFuncMover_Move_t.hpp"
#include "source2sdk/server/CFuncMover_OrientationUpdate_t.hpp"
#include "source2sdk/server/CFuncMover_TransitionToPathNodeAction_t.hpp"
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
        struct CMoverPathNode;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPathMover;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xa60
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CFuncMover : public source2sdk::server::CBaseModelEntity
        {
        public:
            CUtlSymbolLarge m_iszPathName; // 0x7c8            
            // m_hPathMover has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPathMover> m_hPathMover;
            char m_hPathMover[0x4]; // 0x7d0            
            uint8_t _pad07d4[0x4]; // 0x7d4
            CUtlSymbolLarge m_iszPathNodeStart; // 0x7d8            
            CUtlSymbolLarge m_iszPathNodeEnd; // 0x7e0            
            source2sdk::server::CFuncMover_Move_t m_eMoveType; // 0x7e8            
            bool m_bIsReversing; // 0x7ec            
            uint8_t _pad07ed[0x3]; // 0x7ed
            Vector m_vTarget; // 0x7f0            
            float m_flStartSpeed; // 0x7fc            
            float m_flPathLocation; // 0x800            
            float m_flT; // 0x804            
            std::int32_t m_nCurrentNodeIndex; // 0x808            
            std::int32_t m_nPreviousNodeIndex; // 0x80c            
            source2sdk::client::SolidType_t m_eSolidType; // 0x810            
            bool m_bIsMoving; // 0x811            
            uint8_t _pad0812[0x2]; // 0x812
            float m_flTimeToReachMaxSpeed; // 0x814            
            float m_flDistanceToReachMaxSpeed; // 0x818            
            float m_flTimeToReachZeroSpeed; // 0x81c            
            float m_flDistanceToReachZeroSpeed; // 0x820            
            source2sdk::entity2::GameTime_t m_flTimeMovementStart; // 0x824            
            source2sdk::entity2::GameTime_t m_flTimeMovementStop; // 0x828            
            // m_hStopAtNode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CMoverPathNode> m_hStopAtNode;
            char m_hStopAtNode[0x4]; // 0x82c            
            float m_flPathLocationToBeginStop; // 0x830            
            uint8_t _pad0834[0x4]; // 0x834
            CUtlSymbolLarge m_iszStartForwardSound; // 0x838            
            CUtlSymbolLarge m_iszLoopForwardSound; // 0x840            
            CUtlSymbolLarge m_iszStopForwardSound; // 0x848            
            CUtlSymbolLarge m_iszStartReverseSound; // 0x850            
            CUtlSymbolLarge m_iszLoopReverseSound; // 0x858            
            CUtlSymbolLarge m_iszStopReverseSound; // 0x860            
            CUtlSymbolLarge m_iszArriveAtDestinationSound; // 0x868            
            uint8_t _pad0870[0x18]; // 0x870
            source2sdk::entity2::CEntityIOOutput m_OnMovementEnd; // 0x888            
            bool m_bStartAtClosestPoint; // 0x8b0            
            bool m_bStartAtEnd; // 0x8b1            
            uint8_t _pad08b2[0x2]; // 0x8b2
            source2sdk::server::CFuncMover_OrientationUpdate_t m_eOrientationUpdate; // 0x8b4            
            source2sdk::entity2::GameTime_t m_flTimeStartOrientationChange; // 0x8b8            
            float m_flTimeToBlendToNewOrientation; // 0x8bc            
            float m_flDurationBlendToNewOrientationRan; // 0x8c0            
            std::int32_t m_nOriginalOrientationIndex; // 0x8c4            
            bool m_bCreateMovableNavMesh; // 0x8c8            
            bool m_bAllowMovableNavMeshDockingOnEntireEntity; // 0x8c9            
            uint8_t _pad08ca[0x6]; // 0x8ca
            source2sdk::entity2::CEntityIOOutput m_OnNodePassed; // 0x8d0            
            CUtlSymbolLarge m_iszOrientationMatchEntityName; // 0x8f8            
            // m_hOrientationMatchEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOrientationMatchEntity;
            char m_hOrientationMatchEntity[0x4]; // 0x900            
            float m_flTimeToTraverseToNextNode; // 0x904            
            Vector m_vLerpToNewPosStartInPathEntitySpace; // 0x908            
            Vector m_vLerpToNewPosEndInPathEntitySpace; // 0x914            
            float m_flLerpToPositionT; // 0x920            
            float m_flLerpToPositionDeltaT; // 0x924            
            source2sdk::entity2::CEntityIOOutput m_OnLerpToPositionComplete; // 0x928            
            bool m_bIsPaused; // 0x950            
            uint8_t _pad0951[0x3]; // 0x951
            source2sdk::server::CFuncMover_TransitionToPathNodeAction_t m_eTransitionedToPathNodeAction; // 0x954            
            std::int32_t m_nDelayedTeleportToNode; // 0x958            
            bool m_bIsVerboseLogging; // 0x95c            
            uint8_t _pad095d[0x3]; // 0x95d
            // m_hFollowEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hFollowEntity;
            char m_hFollowEntity[0x4]; // 0x960            
            float m_flFollowDistance; // 0x964            
            float m_flFollowMinimumSpeed; // 0x968            
            float m_flCurFollowEntityT; // 0x96c            
            float m_flCurFollowSpeed; // 0x970            
            uint8_t _pad0974[0x4]; // 0x974
            source2sdk::entity2::CEntityIOOutput m_OnStart; // 0x978            
            source2sdk::entity2::CEntityIOOutput m_OnStartForward; // 0x9a0            
            source2sdk::entity2::CEntityIOOutput m_OnStartReverse; // 0x9c8            
            source2sdk::entity2::CEntityIOOutput m_OnStop; // 0x9f0            
            source2sdk::entity2::CEntityIOOutput m_OnStopped; // 0xa18            
            bool m_bNextNodeReturnsCurrent; // 0xa40            
            bool m_bStartedMoving; // 0xa41            
            uint8_t _pad0a42[0x1e];
            
            // Datamap fields:
            // void InputStart; // 0x0
            // void InputStartForward; // 0x0
            // void InputStartReverse; // 0x0
            // void InputStop; // 0x0
            // void InputToggle; // 0x0
            // void InputToggleDirection; // 0x0
            // void InputPause; // 0x0
            // void InputUnpause; // 0x0
            // CUtlSymbolLarge InputTeleportToPathNode; // 0x0
            // CUtlSymbolLarge InputMoveToPathNode; // 0x0
            // CUtlSymbolLarge InputTransitionToPathNode; // 0x0
            // CUtlSymbolLarge InputTransitionToPathNodeStartForward; // 0x0
            // CUtlSymbolLarge InputTransitionToPathNodeStartReverse; // 0x0
            // float InputSetSpeed; // 0x0
            // float InputSetSpeedImmediate; // 0x0
            // float InputSetTimeToReachMaxSpeed; // 0x0
            // float InputSetTimeToBlendToNewOrientation; // 0x0
            // int32_t InputSetOrientationMode; // 0x0
            // CUtlSymbolLarge InputSetFollowEntity; // 0x0
            // float InputSetFollowDistance; // 0x0
            // float InputSetFollowMinimumSpeed; // 0x0
            // float InputSetTimeToTraverseToNextNode; // 0x0
            // void CFuncMoverMoveThink; // 0x0
            // void CFuncMoverLerpToNewPosition; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncMover because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncMover) == 0xa60);
    };
};
