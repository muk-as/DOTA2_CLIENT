#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/SolidType_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/CFuncMover_FollowEntityDirection_t.hpp"
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
        // Size: 0xaa0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CFuncMover : public source2sdk::server::CBaseModelEntity
        {
        public:
            CUtlSymbolLarge m_iszPathName; // 0x7f0            
            // m_hPathMover has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPathMover> m_hPathMover;
            char m_hPathMover[0x4]; // 0x7f8            
            uint8_t _pad07fc[0x4]; // 0x7fc
            CUtlSymbolLarge m_iszPathNodeStart; // 0x800            
            CUtlSymbolLarge m_iszPathNodeEnd; // 0x808            
            source2sdk::server::CFuncMover_Move_t m_eMoveType; // 0x810            
            bool m_bIsReversing; // 0x814            
            uint8_t _pad0815[0x3]; // 0x815
            Vector m_vTarget; // 0x818            
            float m_flStartSpeed; // 0x824            
            float m_flPathLocation; // 0x828            
            float m_flT; // 0x82c            
            std::int32_t m_nCurrentNodeIndex; // 0x830            
            std::int32_t m_nPreviousNodeIndex; // 0x834            
            source2sdk::client::SolidType_t m_eSolidType; // 0x838            
            bool m_bIsMoving; // 0x839            
            uint8_t _pad083a[0x2]; // 0x83a
            float m_flTimeToReachMaxSpeed; // 0x83c            
            float m_flDistanceToReachMaxSpeed; // 0x840            
            float m_flTimeToReachZeroSpeed; // 0x844            
            float m_flDistanceToReachZeroSpeed; // 0x848            
            source2sdk::entity2::GameTime_t m_flTimeMovementStart; // 0x84c            
            source2sdk::entity2::GameTime_t m_flTimeMovementStop; // 0x850            
            // m_hStopAtNode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CMoverPathNode> m_hStopAtNode;
            char m_hStopAtNode[0x4]; // 0x854            
            float m_flPathLocationToBeginStop; // 0x858            
            uint8_t _pad085c[0x4]; // 0x85c
            CUtlSymbolLarge m_iszStartForwardSound; // 0x860            
            CUtlSymbolLarge m_iszLoopForwardSound; // 0x868            
            CUtlSymbolLarge m_iszStopForwardSound; // 0x870            
            CUtlSymbolLarge m_iszStartReverseSound; // 0x878            
            CUtlSymbolLarge m_iszLoopReverseSound; // 0x880            
            CUtlSymbolLarge m_iszStopReverseSound; // 0x888            
            CUtlSymbolLarge m_iszArriveAtDestinationSound; // 0x890            
            uint8_t _pad0898[0x18]; // 0x898
            source2sdk::entity2::CEntityIOOutput m_OnMovementEnd; // 0x8b0            
            bool m_bStartAtClosestPoint; // 0x8d8            
            bool m_bStartAtEnd; // 0x8d9            
            uint8_t _pad08da[0x2]; // 0x8da
            source2sdk::server::CFuncMover_OrientationUpdate_t m_eOrientationUpdate; // 0x8dc            
            source2sdk::entity2::GameTime_t m_flTimeStartOrientationChange; // 0x8e0            
            float m_flTimeToBlendToNewOrientation; // 0x8e4            
            float m_flDurationBlendToNewOrientationRan; // 0x8e8            
            std::int32_t m_nOriginalOrientationIndex; // 0x8ec            
            bool m_bCreateMovableNavMesh; // 0x8f0            
            bool m_bAllowMovableNavMeshDockingOnEntireEntity; // 0x8f1            
            uint8_t _pad08f2[0x6]; // 0x8f2
            source2sdk::entity2::CEntityIOOutput m_OnNodePassed; // 0x8f8            
            CUtlSymbolLarge m_iszOrientationMatchEntityName; // 0x920            
            // m_hOrientationMatchEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOrientationMatchEntity;
            char m_hOrientationMatchEntity[0x4]; // 0x928            
            float m_flTimeToTraverseToNextNode; // 0x92c            
            Vector m_vLerpToNewPosStartInPathEntitySpace; // 0x930            
            Vector m_vLerpToNewPosEndInPathEntitySpace; // 0x93c            
            float m_flLerpToPositionT; // 0x948            
            float m_flLerpToPositionDeltaT; // 0x94c            
            source2sdk::entity2::CEntityIOOutput m_OnLerpToPositionComplete; // 0x950            
            bool m_bIsPaused; // 0x978            
            uint8_t _pad0979[0x3]; // 0x979
            source2sdk::server::CFuncMover_TransitionToPathNodeAction_t m_eTransitionedToPathNodeAction; // 0x97c            
            std::int32_t m_nDelayedTeleportToNode; // 0x980            
            bool m_bIsVerboseLogging; // 0x984            
            uint8_t _pad0985[0x3]; // 0x985
            // m_hFollowEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hFollowEntity;
            char m_hFollowEntity[0x4]; // 0x988            
            float m_flFollowDistance; // 0x98c            
            float m_flFollowMinimumSpeed; // 0x990            
            float m_flCurFollowEntityT; // 0x994            
            float m_flCurFollowSpeed; // 0x998            
            uint8_t _pad099c[0x4]; // 0x99c
            CUtlSymbolLarge m_strOrientationFaceEntityName; // 0x9a0            
            // m_hOrientationFaceEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOrientationFaceEntity;
            char m_hOrientationFaceEntity[0x4]; // 0x9a8            
            uint8_t _pad09ac[0x4]; // 0x9ac
            source2sdk::entity2::CEntityIOOutput m_OnStart; // 0x9b0            
            source2sdk::entity2::CEntityIOOutput m_OnStartForward; // 0x9d8            
            source2sdk::entity2::CEntityIOOutput m_OnStartReverse; // 0xa00            
            source2sdk::entity2::CEntityIOOutput m_OnStop; // 0xa28            
            source2sdk::entity2::CEntityIOOutput m_OnStopped; // 0xa50            
            bool m_bNextNodeReturnsCurrent; // 0xa78            
            bool m_bStartedMoving; // 0xa79            
            uint8_t _pad0a7a[0x1e]; // 0xa7a
            source2sdk::server::CFuncMover_FollowEntityDirection_t m_eFollowEntityDirection; // 0xa98            
            uint8_t _pad0a9c[0x4];
            
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
            // CUtlSymbolLarge InputSetFollowEntityForward; // 0x0
            // CUtlSymbolLarge InputSetFollowEntityReverse; // 0x0
            // CUtlSymbolLarge InputSetFaceEntity; // 0x0
            // float InputSetFollowDistance; // 0x0
            // float InputSetFollowMinimumSpeed; // 0x0
            // float InputSetTimeToTraverseToNextNode; // 0x0
            // void CFuncMoverMoveThink; // 0x0
            // void CFuncMoverLerpToNewPosition; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncMover because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncMover) == 0xaa0);
    };
};
